#include "verktyg.h"
#include <stdio.h>
#include <iostream>

void skriv_multiplikationstabell(int num){
    for(int i = 1; i <= 10; i++){
        std::cout << num << " x " << i << " = " << (num * i) << "\n";
    }
}

void skriv_flera_tabeller(int tal[], int antal){
    for(int i = 0; i < antal; i++){
        skriv_multiplikationstabell(tal[i]);
    }
}