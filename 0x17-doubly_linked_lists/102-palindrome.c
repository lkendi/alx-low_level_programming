#include <stdio.h>

int isPalindrome(int num) {
	int reversed = 0;
	int original = num;

	while (num > 0) {
		int remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}

	if (original != reversed) 
		return (0);
	else
		return (1);
}

int main() {
	int largest_palindrome = 0;

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			int prod = i * j;
			if (isPalindrome(prod) && prod > largest_palindrome) {
				largest_palindrome = prod;
			}
		}
	}

	FILE *file = fopen("102-result", "w");
	fprintf(file, "%d", largest_palindrome);
	fclose(file);

	return 0;
}
