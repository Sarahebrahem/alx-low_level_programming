#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
#define PASSWORD_LENGTH 10
/**
  * main - Entry point
  * Return: 0 (success)
  */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i, ascii_code;

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		ascii_code = rand() % 94 + 33;
		password[i] = (char)ascii_code;
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s", password);
	return (0);
}
