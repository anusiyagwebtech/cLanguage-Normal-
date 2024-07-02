//1
#include <stdio.h>
using namespace std;

int main () {
	
  int a[] = {78, 5, 76,456, 8, 43, 23}, i, max;
  int length = sizeof(a) / sizeof(a[0]);
 
  max = a[0];
  
  for( i = 1; i < length; i++) {
    if(max < a[i]) {
    	max = a[i];
	}
  }
   printf("%d", max);
	return 0;
}

// 2

#include <stdio.h>
#include <Math.h>

int main () {
 
   int a[5] = {6, 8, 3 , 82,45};
      
   int high = a[0];
   for (int i = 1; i < 5; i++) {
   	if(high < a[i]) {
   		high = a[i];
	   }
	   	
   }
      
   printf("%d", high);
   
   return 0;
	
}
