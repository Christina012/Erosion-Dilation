/**\file */
#ifndef SLIC_DECLARATIONS_TwoDAverageVariable_H
#define SLIC_DECLARATIONS_TwoDAverageVariable_H
#include "MaxSLiCInterface.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define TwoDAverageVariable_PCIE_ALIGNMENT (16)
#define TwoDAverageVariable_nxMax (4096)


/*----------------------------------------------------------------------------*/
/*---------------------------- Interface default -----------------------------*/
/*----------------------------------------------------------------------------*/




/**
 * \brief Basic static function for the interface 'default'.
 * 
 * \param [in] param_N Interface Parameter "N".: Number of data items to process
 * \param [in] offset_TwoDAverageVariableKernel_nxoffset Offset parameter "nxoffset" for kernel "TwoDAverageVariableKernel".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask0 Input scalar parameter "TwoDAverageVariableKernel.mask0".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask1 Input scalar parameter "TwoDAverageVariableKernel.mask1".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask2 Input scalar parameter "TwoDAverageVariableKernel.mask2".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask3 Input scalar parameter "TwoDAverageVariableKernel.mask3".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask4 Input scalar parameter "TwoDAverageVariableKernel.mask4".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask5 Input scalar parameter "TwoDAverageVariableKernel.mask5".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask6 Input scalar parameter "TwoDAverageVariableKernel.mask6".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask7 Input scalar parameter "TwoDAverageVariableKernel.mask7".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask8 Input scalar parameter "TwoDAverageVariableKernel.mask8".
 * \param [in] instream_inStream The stream should be of size (param_N * 4) bytes.
 * \param [out] outstream_outStream The stream should be of size (param_N * 4) bytes.
 */
void TwoDAverageVariable(
	int32_t param_N,
	long offset_TwoDAverageVariableKernel_nxoffset,
	uint64_t inscalar_TwoDAverageVariableKernel_mask0,
	uint64_t inscalar_TwoDAverageVariableKernel_mask1,
	uint64_t inscalar_TwoDAverageVariableKernel_mask2,
	uint64_t inscalar_TwoDAverageVariableKernel_mask3,
	uint64_t inscalar_TwoDAverageVariableKernel_mask4,
	uint64_t inscalar_TwoDAverageVariableKernel_mask5,
	uint64_t inscalar_TwoDAverageVariableKernel_mask6,
	uint64_t inscalar_TwoDAverageVariableKernel_mask7,
	uint64_t inscalar_TwoDAverageVariableKernel_mask8,
	const uint32_t *instream_inStream,
	uint32_t *outstream_outStream);

/**
 * \brief Basic static non-blocking function for the interface 'default'.
 * 
 * Schedule to run on an engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 * 
 * 
 * \param [in] param_N Interface Parameter "N".: Number of data items to process
 * \param [in] offset_TwoDAverageVariableKernel_nxoffset Offset parameter "nxoffset" for kernel "TwoDAverageVariableKernel".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask0 Input scalar parameter "TwoDAverageVariableKernel.mask0".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask1 Input scalar parameter "TwoDAverageVariableKernel.mask1".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask2 Input scalar parameter "TwoDAverageVariableKernel.mask2".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask3 Input scalar parameter "TwoDAverageVariableKernel.mask3".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask4 Input scalar parameter "TwoDAverageVariableKernel.mask4".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask5 Input scalar parameter "TwoDAverageVariableKernel.mask5".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask6 Input scalar parameter "TwoDAverageVariableKernel.mask6".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask7 Input scalar parameter "TwoDAverageVariableKernel.mask7".
 * \param [in] inscalar_TwoDAverageVariableKernel_mask8 Input scalar parameter "TwoDAverageVariableKernel.mask8".
 * \param [in] instream_inStream The stream should be of size (param_N * 4) bytes.
 * \param [out] outstream_outStream The stream should be of size (param_N * 4) bytes.
 * \return A handle on the execution status, or NULL in case of error.
 */
max_run_t *TwoDAverageVariable_nonblock(
	int32_t param_N,
	long offset_TwoDAverageVariableKernel_nxoffset,
	uint64_t inscalar_TwoDAverageVariableKernel_mask0,
	uint64_t inscalar_TwoDAverageVariableKernel_mask1,
	uint64_t inscalar_TwoDAverageVariableKernel_mask2,
	uint64_t inscalar_TwoDAverageVariableKernel_mask3,
	uint64_t inscalar_TwoDAverageVariableKernel_mask4,
	uint64_t inscalar_TwoDAverageVariableKernel_mask5,
	uint64_t inscalar_TwoDAverageVariableKernel_mask6,
	uint64_t inscalar_TwoDAverageVariableKernel_mask7,
	uint64_t inscalar_TwoDAverageVariableKernel_mask8,
	const uint32_t *instream_inStream,
	uint32_t *outstream_outStream);

/**
 * \brief Advanced static interface, structure for the engine interface 'default'
 * 
 */
typedef struct { 
	int32_t param_N; /**<  [in] Interface Parameter "N".: Number of data items to process */
	long offset_TwoDAverageVariableKernel_nxoffset; /**<  [in] Offset parameter "nxoffset" for kernel "TwoDAverageVariableKernel". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask0; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask0". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask1; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask1". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask2; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask2". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask3; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask3". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask4; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask4". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask5; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask5". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask6; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask6". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask7; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask7". */
	uint64_t inscalar_TwoDAverageVariableKernel_mask8; /**<  [in] Input scalar parameter "TwoDAverageVariableKernel.mask8". */
	const uint32_t *instream_inStream; /**<  [in] The stream should be of size (param_N * 4) bytes. */
	uint32_t *outstream_outStream; /**<  [out] The stream should be of size (param_N * 4) bytes. */
} TwoDAverageVariable_actions_t;

/**
 * \brief Advanced static function for the interface 'default'.
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in,out] interface_actions Actions to be executed.
 */
void TwoDAverageVariable_run(
	max_engine_t *engine,
	TwoDAverageVariable_actions_t *interface_actions);

/**
 * \brief Advanced static non-blocking function for the interface 'default'.
 *
 * Schedule the actions to run on the engine and return immediately.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * 
 * \param [in] engine The engine on which the actions will be executed.
 * \param [in] interface_actions Actions to be executed.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *TwoDAverageVariable_run_nonblock(
	max_engine_t *engine,
	TwoDAverageVariable_actions_t *interface_actions);

/**
 * \brief Group run advanced static function for the interface 'default'.
 * 
 * \param [in] group Group to use.
 * \param [in,out] interface_actions Actions to run.
 *
 * Run the actions on the first device available in the group.
 */
void TwoDAverageVariable_run_group(max_group_t *group, TwoDAverageVariable_actions_t *interface_actions);

/**
 * \brief Group run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule the actions to run on the first device available in the group and return immediately.
 * The status of the run must be checked with ::max_wait. 
 * Note that use of ::max_nowait is prohibited with non-blocking running on groups:
 * see the ::max_run_group_nonblock documentation for more explanation.
 *
 * \param [in] group Group to use.
 * \param [in] interface_actions Actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *TwoDAverageVariable_run_group_nonblock(max_group_t *group, TwoDAverageVariable_actions_t *interface_actions);

/**
 * \brief Array run advanced static function for the interface 'default'.
 * 
 * \param [in] engarray The array of devices to use.
 * \param [in,out] interface_actions The array of actions to run.
 *
 * Run the array of actions on the array of engines.  The length of interface_actions
 * must match the size of engarray.
 */
void TwoDAverageVariable_run_array(max_engarray_t *engarray, TwoDAverageVariable_actions_t *interface_actions[]);

/**
 * \brief Array run advanced static non-blocking function for the interface 'default'.
 * 
 *
 * Schedule to run the array of actions on the array of engines, and return immediately.
 * The length of interface_actions must match the size of engarray.
 * The status of the run can be checked either by ::max_wait or ::max_nowait;
 * note that one of these *must* be called, so that associated memory can be released.
 *
 * \param [in] engarray The array of devices to use.
 * \param [in] interface_actions The array of actions to run.
 * \return A handle on the execution status of the actions, or NULL in case of error.
 */
max_run_t *TwoDAverageVariable_run_array_nonblock(max_engarray_t *engarray, TwoDAverageVariable_actions_t *interface_actions[]);

/**
 * \brief Converts a static-interface action struct into a dynamic-interface max_actions_t struct.
 *
 * Note that this is an internal utility function used by other functions in the static interface.
 *
 * \param [in] maxfile The maxfile to use.
 * \param [in] interface_actions The interface-specific actions to run.
 * \return The dynamic-interface actions to run, or NULL in case of error.
 */
max_actions_t* TwoDAverageVariable_convert(max_file_t *maxfile, TwoDAverageVariable_actions_t *interface_actions);

/**
 * \brief Initialise a maxfile.
 */
max_file_t* TwoDAverageVariable_init(void);

/* Error handling functions */
int TwoDAverageVariable_has_errors(void);
const char* TwoDAverageVariable_get_errors(void);
void TwoDAverageVariable_clear_errors(void);
/* Free statically allocated maxfile data */
void TwoDAverageVariable_free(void);
/* returns: -1 = error running command; 0 = no error reported */
int TwoDAverageVariable_simulator_start(void);
/* returns: -1 = error running command; 0 = no error reported */
int TwoDAverageVariable_simulator_stop(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* SLIC_DECLARATIONS_TwoDAverageVariable_H */

