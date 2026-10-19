#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

void berakna_loggstatistik(double *logg, int antal, double *min_ut, double *max_ut, double *medel_ut){
    double min = 0;
    double max = 0;
    double medel = 0;
    if(logg == NULL || antal <= 0){
        *min_ut = 0;
        *max_ut = 0;
        *medel_ut = 0;
    }
    min = logg[0];
    max = logg[0];
    for(int i = 0; i < antal; i++){
        medel += logg[i];
        if(logg[i] < min){
            min = logg[i];
        }
        if(logg[i] > max){
            max = logg[i];
        }
    }
    *min_ut = min;
    *max_ut = max;
    *medel_ut = medel / antal;
}