#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char sentence_1[100];
	int input_1;
	printf("Your sentence :");
	scanf("%s", &sentence_1);
	printf("\nnumber of:");
	scanf("%d", &input_1);
	for (int i = 0; i < input_1; i++)
	{
		printf("\n%s", sentence_1);
	}
}