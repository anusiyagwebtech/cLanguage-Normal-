#include <stdio.h>
#include<Math.h>

int main() {
	
//	3. Write a C program to calculate Compound Interest. 
// CI = p(1+r/100)^n - p;

   float principal = 2300;
   float rate = 7;
   float time = 4;
   
    float result = principal*(pow((1 + (rate/100)), time));
    
    
    printf("Result : %f", result - principal);
	
     
	
	return 0;
}
