	
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
