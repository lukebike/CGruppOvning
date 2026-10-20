#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

void frigor_matlogg(double *logg) {
    free(logg);
}