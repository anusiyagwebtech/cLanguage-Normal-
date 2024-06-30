#include<stdio.h>
#include<Math.h>

int main () {
	
//	
// Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
//Test Data :
//Input the number or terms :5
//Expected Output :
//9 99 999 9999 99999
//The sum of the saries = 111105

    int s = 5;
    int sum = 0;
    
    for (int i = 1; i <= 5; i++) {
    	
      int a = pow(10,i) - 1;
	  sum += a;	
      
	}

  
    
    printf("%d", sum);
    
	
	return 0;
}
