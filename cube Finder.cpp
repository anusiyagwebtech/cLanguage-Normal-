#include <stdio.h>


int cubeFinder(int num);

int main () {
	
//   Write a program in C to display the cube of the number up to an integer.
 
 
    
   cubeFinder(5);
    
	
	return 0;
}

int cubeFinder (int num) {
	for (int i = 1; i <= num ; i++) {
	  printf("Number is : %d and cube of the %d is :%d\n",i,i,i*i*i );	
	}
	return 0;
}

#include <stdio.h>
#include<math.h>



void powerFounder(int number, int power);

int main () {
	

 int number = 2, power = 6;
  
  powerFounder(number,power);
   
   return 0;
  

}

void powerFounder(int number , int power) {
	printf("%d", (int)pow(number,power));
}
