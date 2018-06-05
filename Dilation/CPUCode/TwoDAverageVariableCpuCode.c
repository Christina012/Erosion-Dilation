/**
 * Document: MaxCompiler Tutorial (maxcompiler-tutorial.pdf)
 * Chapter: 8      Example: 3      Name: Two-dimensional average variable
 * MaxFile name: TwoDAverageVariable
 * Summary:
 *    Averages within an 8-point window.
 */

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "Maxfiles.h"
#include <MaxSLiCInterface.h>

void generateInputData(int *dataIn, int nx, int ny)
{
	for (int i = 0; i < nx * ny; i++) {
		dataIn[i] = 0;
	}
	dataIn[nx * (ny / 2) + nx / 2] = 9; //value in the center of the field
	dataIn[nx/2 - 2] = 7; //value in the first row
	dataIn[(ny-1) * nx + nx/2 + 2] = 8; //value in the last row
	dataIn[8 * nx] = 6; //value in the first column
	dataIn[4 * nx + (nx-1)] = 4; //value in the last column
}

void print_2d_data(int *data, char* name, int nx, int ny)
{
	printf("\n%s\n", name);
	for (int y = 0; y < ny; y++) {
		for (int x = 0; x < nx; x++) {
			printf(" %d ", data[y * nx + x]);
		}
		printf("\n");
	}
}

int main()
{
	const int NX = 16;
	const int NY = 16;
	size_t sizeBytes = NX * NY * sizeof(int);
	int *dataIn = malloc(sizeBytes);
	int *dataOut1 = malloc(sizeBytes);
	int *dataOut2 = malloc(sizeBytes);
	int *dataOut3 = malloc(sizeBytes);
	int *dataOut4 = malloc(sizeBytes);
	int *dataOut44 = malloc(sizeBytes);
	

	int nxMax = TwoDAverageVariable_nxMax;
	if (NX > nxMax) {
		fprintf(
			stderr,
			"2D filter with maximum size nxMax=%d can not process data with nx=%d\n",
			nxMax,
			NX);
		exit(1);
	}
	if (NY < 1) {
		fprintf(
			stderr,
			"Invalid ny size (%d), ny must be greater than 1\n",
			NY);
		exit(1);
	}

	generateInputData(dataIn, NX, NY);
	printf("Running DFE.\n");


    //if the dimensions of the arrays are changed, need to change the parameters in the manager!
    
    //dilation mask 1:
        // 0 1 0
        // 0 1 0
        // 0 1 0
	TwoDAverageVariable(NX*NY, NX, 0, 1, 0, 0, 1, 0, 0, 1, 0, dataIn, dataOut1);
	
    //dilation mask 2:
        // 0 0 0
        // 1 1 1
        // 0 0 0
	TwoDAverageVariable(NX*NY, NX, 0, 0, 0, 1, 1, 1, 0, 0, 0, dataIn, dataOut2);
	
	//dilation mask 3:
        // 0 1 0
        // 1 1 1
        // 0 1 0
    TwoDAverageVariable(NX*NY, NX, 0, 1, 0, 1, 1, 1, 0, 1, 0, dataIn, dataOut3);
	
	//dilation mask 4:
        // 1 1 1
        // 1 1 1
        // 1 1 1
	TwoDAverageVariable(NX*NY, NX, 1, 1, 1, 1, 1, 1, 1, 1, 1, dataIn, dataOut4);
	
	//dilation mask 4 used a second time:
        // 1 1 1
        // 1 1 1
        // 1 1 1
	TwoDAverageVariable(NX*NY, NX, 1, 1, 1, 1, 1, 1, 1, 1, 1, dataOut4, dataOut44);
	
	
	


	// Display results, if we're running a small size
	if (NX < 20 && NY < 20) {
		print_2d_data(dataIn, "INPUT DATA", NX, NY);
		print_2d_data(dataOut1, "OUTPUT DATA: MASK 1", NX, NY);
		print_2d_data(dataOut2, "OUTPUT DATA: MASK 2", NX, NY);
		print_2d_data(dataOut3, "OUTPUT DATA: MASK 3", NX, NY);
		print_2d_data(dataOut4, "OUTPUT DATA: MASK 4", NX, NY);
		print_2d_data(dataOut44, "OUTPUT DATA: MASK 4 applied twice", NX, NY);
	} else
		printf("(Not displaying output data of size %dx%d)\n", NX, NY);
		
    
	return 0;
}
