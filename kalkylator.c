#include "verktyg.h"
#include <stdio.h>

double berakna(double num1, double num2, char symbol){
    if(symbol == '+'){
        return num1 + num2;
    } else if(symbol == '-'){
        return num1 - num2;
    } else if(symbol == '*'){
        return num1 * num2;
    } else if(symbol == '/'){
        if(num2 == 0){
            printf("Cannot divide with zero.");
            return 0;
        }
        return num1 / num2;
    } else{
        printf("Invalid operator or numbers, try again.");
        return 0;
    };
}