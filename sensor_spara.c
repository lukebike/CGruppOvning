#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

void spara_sensorregister(const char *filnamn, Sensormatning *reg, int antal){
    FILE *file = fopen(filnamn, "w");
    if(file == NULL){
        printf("File could not be opened.");
        return;
    }
    for(int i = 0; i < antal; i++){
        fprintf(file, "%s %.2lf", reg[i].namn, reg[i].varde);
    }
    fclose(file);
}