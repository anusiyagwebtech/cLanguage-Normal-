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

#include<stdio.h>

int multiplicationTable(int table, int limit);
int main() {
	
	int table = 2, limit = 20;
	
	multiplicationTable(table,limit);

	return 0;
}

int multiplicationTable(int table, int limit) {
	
	for(int i = 1; i <= limit;i++) {
		printf("%d * %d = %d\n", i,table,i*table);
		
	}
	
}
