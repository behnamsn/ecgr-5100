#include <stdio.h>
#include <stdint.h>

#include "x2b.h"

/*
This program is written by Behnam Sobhani Nadri for graduate coursework ECGR 5100 Research Tools and Techniques.

repo: http://github.com/behnamsn/ecgr-5100
Name: Behnam Sobhani Nadri
NinerNET ID: bsobhani(@charlotte.edu)

Electrical and Computer Engineering (ECE) Department, UNC at Charlotte 
November 2024
*/

int main (){

uint32_t x = 500;
uint32_t y = 10;

// Calling division function 
printf(" \n Result of the division is: %d\n", idiv(x,y));

// Call multiply function
printf(" \n Result of the multiply is: %d\n", imul(x,y));

return 0;
}
