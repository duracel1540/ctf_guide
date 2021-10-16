#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flag() {
	FILE *fp;
	int c;
	fp = fopen("flag", "r");
	if(fp == NULL)
		printf("Something is wrong, please contact your admin\n");
	else{
		printf("Your flag: ");
		while((c = getc(fp)) != EOF)
			putchar(c);

	}
	fclose(fp);
}

int main() {
	char buffer[20];
	printf("Can you find it?\n");
	printf("Exploit this:");
	scanf("%s", buffer);

	return 0;
}
