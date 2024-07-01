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
