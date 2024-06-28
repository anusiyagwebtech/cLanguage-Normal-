#include<stdio.h>
int factorial (int a);
int power (int base, int p);
int main() {
	
	
//	Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
//Test Data :
//Input the Value of x :2
//Input the number of terms : 5
//Expected Output :
//the sum = -0.415873
//Number of terms = 5
//value of x = 2.000000
	
   int x, series;
   
   printf("Enter the number: ");
   scanf("%d", &x);
   printf("How much number of series want: ");
   scanf("%d", &series);
   int alt = 0;
   float ans = 1;
   
   for (int i = 2; i < series*2; i += 2) {
   	alt++;
   	
   	if(alt % 2 == 0) {
   	ans += 	(float)power(x,i)/factorial(i);
	}
	else {
		ans -= (float)power(x,i) / factorial(i);
	}
   	
   	 
   }
   
  
   printf("%f", ans);
   
	return 0;
}

int factorial (int a) {
	int fact = 1;
	
	for (int i = a; i > 1; i--) {
		fact *= i;
	}
	
	return fact;
}

int power (int base, int p) {
	int pow = 1;
	for (int i = 0; i < p; i++) {
		pow *= base;
	}
	return pow;
}
