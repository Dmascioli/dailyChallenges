/* easy challenge #1 in c */

#include <stdio.h>

#define BUFF_SIZE 20

int main() {
	char name[BUFF_SIZE];
	int age;
	char username[BUFF_SIZE];

	printf("What is your name?\n");
	scanf("%s", name);

	printf("What is your age?\n");
	scanf("%d", &age);

	printf("What is your username?\n");
	scanf("%s", username);

	printf("Your name is %s, you are %d years old and your username is %s.\n",name, age, username);

	return 0;

}


