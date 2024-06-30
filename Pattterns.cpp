1.
* * * * *
 * * * *
  * * *
   * *
    *

for (int j = 5; j > 0; j--) {
      	for (int i = 0; i < j; i++) {
    	printf("%d ",j);
    
	} printf("\n");
	    for (int k = j-1; k < 5;  k++) {
	    	printf(" ");
		}
	  } 

2. 

* * * * *
 *     *
  *   *
   * *
    *


      for (int j = 5; j > 0; j--) {
      	for (int i = 0; i < j; i++) {
    
    	if(j == 4 && i == 1 || j == 4 && i == 2 || j == 3 && i == 1 ) {
   printf("  ");
}else {
		printf("* ");
}
    
	} printf("\n");
	    for (int k = j-1; k < 5;  k++) {
	    	printf(" ");
	    	
		}
	  } 
	  



3.


*
**
***
****
*****


#include<stdio.h>
#include<string.h>


int main() {
	

 
 for (int i = 0; i < 5; i++) {
 	 printf("\n");
 	for(int j = 0; j < i+1; j++) {
 		printf("*");
	 }
	
 }
}

4. 

1
12
123
1234
12345


for (int i = 0; i < 5; i++) {
 	 printf("\n");
 	for(int j = 0; j < i+1; j++) {
 		printf("%d",j+1);
	 }
	
 }
5. 

1
22
333
4444
55555

 for (int i = 0; i < 5; i++) {
 	 printf("\n");
 	for(int j = 0; j < i+1; j++) {
 		printf("%d",i+1);
	 }
	
 }


6.


1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

int a = 0;
 for (int i = 0; i < 5; i++) {
 	 printf("\n");
 	for(int j = 0; j < i+1; j++) {
 		a++;
 		printf("%d ", a);
	 }
	
 }

7.

   *
  * *
 * * *
* * * *

int limit = 4;

for (int i = 0; i < limit; i++) {
	
	  for (int k = (limit)-i; k > 1; k--) {
	  	printf(" ");
	  }
	  
	  for (int j = i; j >= 0; j--) {
	  
	  	printf("* ");
	  }
	  printf("\n");
	
}
 
 8. 

   1 
  2 3 
 4 5 6 
7 8 9 10


int limit = 4;
int sum = 0;

for (int i = 0; i < limit; i++) {
	
	  for (int k = (limit)-i; k > 1; k--) {
	  	printf(" ");
	  }
	  
	  for (int j = i; j >= 0; j--) {
	    sum++;
	  	printf("%d ", sum);
	  }
	  printf("\n");
	
}
10. 
//   1
//  2 2
// 3 3 3
//4 4 4 4


    int limit;
    printf("Enter the number for Magic: ");
    scanf("%d", &limit);
    
   
    for (int i = 0; i < limit; i++) {
    	for (int s = i; s < limit-1; s++) {
    		printf(" ");
		}
    	for (int j = 0; j < i+1; j++) {
    		printf("%d ", i+1);
		}
		printf("\n");
	}


//	       *
//            ***
//           *****
//          *******
//         *********
//        ***********
//       *************
//      ***************
//     *****************
//    *******************
//   *********************
//  ***********************
// *************************
    
    int o = 25;
    int l = o/2;
    for (int j = 1; j <= o; j += 2) 
	 {
	 	l++;
	 	
	 	for (int k = o - l; k >= 0; k--) {
	 		printf(" ");
		 }
	 	
    	for (int i = j; i > 0; i--) {
		printf("*");
		
	}	
	printf("\n");

	}

