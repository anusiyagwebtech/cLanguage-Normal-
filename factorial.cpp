//normal for loop
int input;
	
	printf("Enter the number to be factorial: ");
	scanf("%d", &input);
	int factorial = 1;
	for (int i = input; i > 0; i-- ){
		factorial *= i;
	}
	
	printf("Factorial : %d", factorial);
