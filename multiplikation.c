#include "verktyg.h"
#include <stdio.h>

void skriv_multiplikationstabell(int num){
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

void skriv_flera_tabeller(int tal[], int antal){
    for(int i = 0; i < antal; i++){
        skriv_multiplikationstabell(tal[i]);
    }
}