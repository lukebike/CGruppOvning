#include "verktyg.h"
#include <stdio.h>

void skriv_multiplikationstabell(int num){
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
}