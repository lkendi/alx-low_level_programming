#include <stdio.h>
#include <string.h>

int main() {
	char pwd[] = "password";
	FILE *file = fopen("100-password", "w");

	if (file != NULL) {
		fprintf(file, "%s", pwd);
		fclose(file);
	}

	return 0;
}
