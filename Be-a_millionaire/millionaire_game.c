#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void game(void)
{
	char user2;
	char input2[] = "A. (;)";
	char input2a[] = "B. ({})";
	char input2b[] = "C. ([])";
	int i2;

	printf("\nQuestion #2:\nThis question is worth 1,000,000naira!\n");
	printf("\nWhich of the following is used to signify the start and end of a series of statements in c?\n%s\n%s\n%s\n", input2, input2a, input2b);
	printf("\nEnter the correct answer:\n");
	scanf("%s", &user2);

	if (user2 == 'A' || user2 == 'C')
	{
		printf("\nSorry you have entered a wrong answer\n[Program Finished!]\n");
		return;
	}
	else if (user2 == 'B' || user2 == 'b')
	{

		printf("\nCongratulations! you have won 1,000,000naira.\n[Program Finishedn");
		return;
	}
	else
	{
		printf("\nwrong input!\n");
		return;
	}
}
void main(int argc, char argv[])
{
	char user;

	printf("\nWelcome To Who Want To Be A Millionaire?\n");

	printf("\nClick S to start the game or Q to quit\n");
	scanf("%s", &user);
	
	while (user == 'S')
	{
		if (user == 'S')
		{
			char user1;
			char input1[] = "A. Snake";
			char input1a[] = "B. Ant";
			char input1b[] = "C. Ape";

			printf("\nQUestion #1:\nThis question is worth 500,000naira\n");
			printf("\n Orangutan is classified as what animal species?\n%s\n%s\n%s\n", input1, input1a, input1b);
			printf("\nEnter the correct answer\n");
			scanf("%s", &user1);

			int i;

			if (user1 == 'C' || user1 == 'c')
			{
				printf("\nCongratulations! you have won 500,000naira.\nclick 1 to continue or 0 to quit\n");
				scanf("%d", &i);
				if (i == 1)
				{
					game();
				}
				else
				{
					printf("\nGOOD BYE\n[Program Finished]\n");
					return;
				} 
			}
			else if (user1 == 'A' || user1 == 'B')
			{
				printf("\nYou have entered a wrong answer!\n[Program Finished!]\n");
				return;
			}
			else
			{
				printf("\nWrong input!");
				return;
			}
		}
		else if (user == 'Q')
		{
			printf("\nGOOD BYE!");
			return;
		}
		else
		{
			printf("\nWrong input");
			return;
		}
	}
}


