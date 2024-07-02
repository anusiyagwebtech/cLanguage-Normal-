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
    	sum += pow(i,2);
	}
    printf("%d", sum);
	return 0;
}
