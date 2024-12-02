#include "x2b.h"

/*
This program is written by Behnam Sobhani Nadri for graduate coursework ECGR 5100 Research Tools and Techniques.

repo: http://github.com/behnamsn/ecgr-5100
Name: Behnam Sobhani Nadri
NinerNET ID: bsobhani(@charlotte.edu)

Electrical and Computer Engineering (ECE) Department, UNC at Charlotte
November 2024
*/


// Signed Multiply

int
*imul (int edx ,int mul) 
{	
	int *ans ;
	int *edx_rem ;
	int *mul_rem ;

	int quot_edx = edx ;
	int quot_mul = mul ;
 
// convert to binary loop
	for(int i=0 ; quot_edx > 1 ; i++)
	{
		// convert to binary
		edx_rem[i] = quot_edx % 2 ; 
		mul_rem[i] = quot_mul % 2 ; 
	}
// multiply loop	
	for(int j=0 ; j<8 ; j++){
		for(int i=0 ; i<8 ; i++){
			// upon each iteration we can xor bits,
			// carry is added to the next bit in inner loop (i) 
		 	
			ans[i] = edx_rem[i+j] & mul_rem[j] ; // shift the bits by the size of j
			if (edx_rem[i] && mul_rem[j]); ans[i+1] ; // adding carry to the next 
		}
	}
return ans;

};

// Signed Division
int 
*idiv (int eax ,int div)
{	
	int *ans; ;
	int *eax_rem ;
	int *div_rem ;

	int quot_eax = eax ;
	int quot_div = div ;
 
// convert to binary and division loop
	for(int i=0 ; quot_eax > 1 ; i++)
	{
		// convert to binary
		eax_rem[i] = quot_eax % 2; 
		div_rem[i] = quot_div % 2; 
		if(div_rem[i]) ans[i] = eax_rem[i] / div_rem[i];
	}
	
return ans;
};
