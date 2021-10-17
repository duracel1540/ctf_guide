#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


void flag() {
	FILE *fp;
	fp = fopen("flag", "r");
	char buffer[30];

	if(fp == NULL)
		puts("You can't open the file");
	else {
		puts("Good Job!!");
		printf("Here is your flag : ");
		fgets(buffer, sizeof(buffer), fp);
		printf("%s\n", buffer);
	}
}

int main() {
	srand(time(NULL));
	int a[36] = {0,};
	int sum = 0;
	int ans = 0;
	
	time_t start_time, final_time;
	
	int t = rand() % 6 + 2;
	for(int i=0; i<36; i++) {
		if(i == 0 || (i % t) == 0)
			;
		else
			a[i] = rand() % 50 + 1;
		sum += a[i];
	}
	
	start_time = clock();

	puts("Sum of these numbers?");
	puts("--------------------------");
	printf("%d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);
	printf("%d %d %d %d %d %d\n", a[6], a[7], a[8], a[9], a[10], a[11]);
	printf("%d %d %d %d %d %d\n", a[12], a[13], a[14], a[15], a[16], a[17]);
	printf("%d %d %d %d %d %d\n", a[18], a[19], a[20], a[21], a[22], a[23]);
	printf("%d %d %d %d %d %d\n", a[24], a[25], a[26], a[27], a[28], a[29]);
	printf("%d %d %d %d %d %d\n", a[30], a[31], a[32], a[33], a[34], a[35]);
	puts("--------------------------");
	
	printf("Answer : ");
	scanf("%d", &ans);
	
	final_time = clock();
	
	if(ans != sum)
		puts("Wrong Answer!");
	else if (final_time - start_time < 1)
		puts("Time over!");
	else
		flag();
	
	
	
	
	return 0;
}





