#include "mex.h"

void mexFunction ( int nlhs, mxArray *plhs[], 
                   int nrhs, const mxArray *prhs[] )
{   
	char *functionName;
	int functionNameLen;
	/* Get the length of the function name string. */
	functionNameLen = (mxGetM(prhs[0]) * mxGetN(prhs[0])) + 1;
	
	/* Allocate memory for input strings. */
	functionName = (char *) mxCalloc(functionNameLen, sizeof(char));
	
	/* Copy the string to functionName. */
	functionName = mxArrayToString(prhs[0]);
	if (!strcmp(functionName,"func1")){
		func1(nlhs, plhs, nrhs-1, &(prhs[1]));	
	} 
}