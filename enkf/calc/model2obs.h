/******************************************************************************
 *
 * File:        model2obs.h        
 *
 * Created:     12/2012
 *
 * Author:      Pavel Sakov
 *              Bureau of Meteorology
 *
 * Description:
 *
 * Revisions:
 *
 *****************************************************************************/

#if !defined(_MODEL2OBS_H)

#include "dasystem.h"

void H_surf_standard(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, float dst[]);
void H_surf_biased(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, float dst[]);
void H_subsurf_standard(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, float dst[]);
void H_subsurf_wsurfbias(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, float dst[]);
void H_subsurf_lowmem(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, float dst[]);
void H_vertsum(dasystem* das, int nobs, int obsids[], char fname[], int mem, int t, float dst[]);

#define _MODEL2OBS_H
#endif
