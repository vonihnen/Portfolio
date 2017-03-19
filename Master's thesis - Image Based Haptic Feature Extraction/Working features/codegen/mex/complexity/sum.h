/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef __SUM_H__
#define __SUM_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "complexity_types.h"

/* Function Declarations */
extern real_T b_sum(const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux b_sum value [8087];

#endif

extern void sum(const emxArray_real_T *x, emxArray_real_T *y);

#endif

/* End of code generation (sum.h) */
