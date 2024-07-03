// normal if conditions
#include <stdio.h>
int main() {
   
    int a1, a2, a3;
	
	printf("Enter Three Numbers: ");
	scanf("%d %d %d", &a1, &a2, &a3);
  
    if (a1 > a2 ) {
    	if (a1 > a3) {
    		printf("\nThe High Value is %d", a1);
		}
		else {
			printf("\nThe High Value is %d", a3);
		}
	}else {
	   if (a2 > a3) {
	   	 printf("The high value is %d", a2);
	   } else {
	   	 printf("The high value is %d", a3);
	   }
	}
	

	return 0;
}


// 2. Maximum Numbers:: Using Ternary Operator

#include <stdio.h>
int main() {
	
	int a1, a2, a3;
	printf("Enter the Three Numbers: ");
	scanf("%d %d %d", &a1, &a2, &a3);
    
    int max;
    
    max = (a1 > a2) ? ((a1 > a3) ? a1 : a3) : ((a2 > a3) ? a2 : a3);
	
	printf("\nThe High Value is %d", max); 
		
	
	return 0;
}
