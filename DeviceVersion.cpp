#include <stdio.h>  // Include the standard input/output header

int main() {
	
    #if __STDC_VERSION >= 199901L  // Check if the C standard version is C18 or later
        printf("Hello World!");  // If the condition is true, this line will be included and executed
    #else 
        printf("Hi");
    #endif  // End of the preprocessor conditional
	
	return 0;  // Return 0 to indicate that the program ended successfully
}
