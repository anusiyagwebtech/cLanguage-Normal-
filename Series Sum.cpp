#include <stdio.h>
#include <Math.h>

int main () {
	
// Write a program in C to find the sum of the series [x - x^3 + x^5 + ......].
//Input the value of x :3
//Input number of terms : 5
//Expected Output :
//The sum is : 16.375000

   int val,terms;
   
   printf("Enter the value: ");
   scanf("%d", &val);
   printf("\nEnter the number of terms: ");
   scanf("%d", &terms); 
   
  int sum = 0;
   int l = 0;
    
   for (int i = 1; i < terms*2; i += 2) {
   	  if(l % 2 == 0)  sum += pow(val,i);
   	  else sum -= pow(val,i);
   	  
      l++;
      
      
   }
	
printf("\n\n%d", sum);	

	return 0;
}

#include <stdio.h>
#include <Math.h>

int main () {
// Write a C program that displays the n terms of square natural numbers and their sum.
//1 4 9 16 ... n Terms
//Test Data :
//Input the number of terms : 5
//Expected Output :
//The square natural upto 5 terms are :1 4 9 16 25
//The Sum of Square Natural Number upto 5 terms = 55

    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    int sum = 1;
    for(int i = 2; i <= terms; i++) {
    	sum += i*i;
	}
    printf("%d", sum);
	return 0;
}
