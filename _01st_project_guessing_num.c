#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, attempts=1;
    srand(time(0));
    number = rand()%100 +1;  // --> generates random numbers between 1 to 100 (If only rand() is used it generates any random numbers)
    // printf("\nThe Number is %d\n",number);
    printf("\nGuess the currect Number between 1 to 100\n");
    do
    {   
        scanf("%d",&guess);
        if (guess < number)
            printf("Enter the Higher number please.\n");
        else if (guess > number)
            printf("Enter the Lower number please.\n");
        else
            printf("Congragulation you Guessed the Number currectly in %d Attempts.\nAnd the Number is %d.\n\n",attempts,number);
        attempts++;
    }while (guess != number);

    return 0;
}
