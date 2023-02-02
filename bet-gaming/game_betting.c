#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int cash = 500;
void bet_game(int bet)
{
	char c[3] = {'J','Q','K'};
	printf("shuffling..........\n");
	int i;

	for (i = 0; i < 5; i++)
	{
		int x = rand() %3;
		int y = rand() %3;
		int temp = c[x];
		c[x] = c[y];
		c[y] = temp;
	}

	int playguess;

	printf("What's the position of the Queen - 1,2,3 ");
	scanf("%d", &playguess);

	if (c[playguess - 1] == 'Q')
	{
		cash += 3*bet;
		printf("You win! Result = %c %c %c\n Total cash = %d\n", c[0], c[1], c[2], cash);
	}
	else
	{
		cash -= bet;
		printf("You lose! Result = %c %c %c\n Total cash = %d\n", c[0], c[1], c[2], cash);
	}
}

void main(int argc, char *argv[])
{
	int bet;

	printf("Your maximum bet is $500\n");

	while (cash > 0)
	{
		printf("What's your bet $");
		scanf("%d", &bet);

		if (bet == 0 || bet > cash)
		{
			printf("\n invalid bet amount\n");
			return;
		}
		bet_game(bet);
	}

}
