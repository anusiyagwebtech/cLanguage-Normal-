//16. Write a C program to display the sum of n terms of even natural numbers.
//Test Data :
//Input number of terms : 5
//Expected Output :
//The even numbers are :2 4 6 8 10
//The Sum of even Natural Number upto 5 terms : 30	
	int input;
	printf("Enter the number: ");
	scanf("%d", &input);
	int evenSum = 0;
	
	printf("\nThe even numbers are: ");
	
	for (int i = 2; i <= input*2; i += 2)  {
		evenSum += i;
		printf("%d ", i);
	}
	printf("\nsum: %d", evenSum);
