#include <stdio.h>
#include<math.h>



void MultiplicationTable(int whichTable, int limit);

int main () {
	
 MultiplicationTable(15,20);
 

}

void MultiplicationTable(int whichTable , int limit) {
	

	
	for (int i = 1; i <= limit; i++) {
		printf("%d * %d = %d\n", whichTable, i, whichTable*i);
	}
}
