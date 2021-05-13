#include"score.h"
//define the function input_score()

void input_scores(int s[]) {
	// get user input by using a sentinel-controled loop
	int i, input=0;
	printf("enter score, -1 to end: \n");
	for (i = 0; i < MAX && input != -1; i++) {
		scanf("%d", &input);
		if (0 < input && input < 100) {
			s[i] = input;
		}
		else i--;
	}
	printf("%d score are given \n", i-1);
}
