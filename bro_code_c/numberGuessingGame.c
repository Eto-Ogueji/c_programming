#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX =100;

    int guess;
    int guesses;
    int answer;

    //used the current time as a seed
    srand(time(0));


    //generate a random no btw MIN & MAX
    answer = (rand() % MAX) + MIN;


    do {
        printf("Enter a guess: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too high");
        }
        else if (guess != answer)
        {
            printf("Too low!\n");
        }
        guesses++;
    }while(guess != answer);


    printf("answer: %d\n", answer);

    printf("guesses: %d\n", guesses);

    return 0;
}