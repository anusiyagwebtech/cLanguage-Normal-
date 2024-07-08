Find odd number or even number
string library strcpy


#include <stdio.h>
#include<string.h>

int main() {
	
//	Write a JavaScript program to find the given number is odd or even 

    int  a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    char str[5];
    if (a % 2 == 0) {
      strcpy(str, "even");
	} else {
		strcpy(str, "odd");
	}
	printf("The given number is %s", str);
	
	return 0;
}
