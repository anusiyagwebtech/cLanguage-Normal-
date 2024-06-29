// Expected Output :
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
// Sum of Series upto 5 terms : 2.283334
#include<stdio.h>
int main() {
	
	float sum = 1;
	int n = 5;
	
	for (int i = 2; i <=n; i++) {
		 sum += float(1)/i;
	}
	
	printf("%f", sum);
	
	
	
  
    
    return 0;
 
}
