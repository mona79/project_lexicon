#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>


void guess()
{
	int number, guess, numberofguess = 0;
	srand(time(NULL));
	number = rand() % 100;

	printf("Guess a number between  1 and 100 \n");


	do {

		if (numberofguess > 9) {
			printf("\nYou Loose!\n");
			break;
		}


		scanf("%d", &guess);

		if (guess > number)

		{
			printf("Lower number!\n");
			numberofguess++;
		}

		else if (number > guess)

		{
			printf("Higher number!\n");
			numberofguess++;
		}

		else
			printf("You guessed the number in %d attempts!\n", numberofguess);

	} while (guess != number);
}


int main()
{

	guess();

	return 0;
}
