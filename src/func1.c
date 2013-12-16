/*
    License Client
    It listen to TCP/IP socket on port 9000 and expected go get
    respon "true" string from License server
*/
#include "mex.h"

/* Output Arguments */
#define A        prhs[0]
#define B        prhs[1]

/* Output Arguments */
#define OUT      plhs[0]

void func1( int nlhs, mxArray *plhs[], 
            int nrhs, const mxArray *prhs[] )
{
    double *a, *b, *out;
    int status;
    
    /* Check for proper number of arguments */    
    if (nrhs != 2) { 
        mexErrMsgTxt("Two arguments required."); 
    } else if (nlhs > 1) {
        mexErrMsgTxt("Too many output arguments."); 
    }
    
    a = mxGetPr(A);
    b = mxGetPr(B);
        
    OUT = mxCreateDoubleMatrix(1, 1, mxREAL);
    out = mxGetPr(OUT);

    *out = *a + *b;
}
