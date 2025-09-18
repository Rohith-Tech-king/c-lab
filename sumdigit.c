#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int digit;

    // Prompt the user to enter five integers
    printf("Enter five integers: ");
    scanf("%d", &num);
    
    while(num>0) 
    {
    	digit=num%10;
    	sum += digit;
    	num /=10;
	}


    // Print the sum
    printf("Sum digit: %d\n", sum);
    return 0;
}
