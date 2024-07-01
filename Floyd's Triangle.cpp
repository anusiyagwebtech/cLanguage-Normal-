//	Write a program in C to print Floyd's Triangle.
//1 
//01
//101 
//0101 
//10101

   int oneZero = 1;


   for (int i = 0; i < 5; i++) {
   	
   	 
   	 for (int j = 0; j < i+1; j++) {
   	 	if (oneZero == 1) {
   	 		oneZero = 0;
			}
			else {
				oneZero = 1;
			}
   	 	 printf("%d", oneZero);
   	 	 
		}
		printf("\n");
   	  
   }
	
	//  C

#include <stdio.h>

int main () {
	
//	Write a program in C to print Floyd's Triangle.
//1 
//01
//101 
//0101 
//10101
    

   
    
   for (int i = 0; i < 5; i++) {
   	
   	 
   	 for (int j = 0; j < i+1; j++) {
   	      if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
   	     
		}
		printf("\n");
   	  
   }
	
	return 0;
}

