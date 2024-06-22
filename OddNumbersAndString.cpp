#include<stdio.h>
#include<string.h>


int main() {
	
  int num ;
  printf("Enter the number: ");
  scanf("%d", &num);
  char str[50] = "";
  int sum = 0;
  
  for (int i = 1; i < num*2; i = i+2) {
  	char tempstr[10];
  	snprintf(tempstr, sizeof(tempstr),"%d ", i);
  	strcat(str,tempstr);
  	sum += i;
  }
  
  printf("\nThe odd numbers are: %s", str);
  printf("\nThe Sum: %d", sum);
	
}

