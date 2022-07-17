#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int compare(char you,char comp)
{
    if(you == comp)
    return 0;
    else if(you == 's' && comp == 'w')
    return 1;
    else if(you == 's' && comp == 'g')
    return -1;
    else if(you == 'w' && comp == 'g')
    return 1;
    else if(you == 'w' && comp == 's')
    return -1;
    else if(you == 'g' && comp == 's')
    return 1;
    else if(you == 'g' && comp == 'w')
    return -1;
}

int main()
{
    char you,comp;
    printf("Enter your chose :\n's' for Snake.\n'w' for Water.\n'g' for Gun.\n");
    scanf("%c",&you);
    srand(time(0));
    int number = rand()%100 +1;
    if(number <= 33)
    comp = 's';
    else if(number > 33 && number <= 66)
    comp = 'w';
    else
    comp = 'g';
    printf("You chosed %c and Computer chosed %c\n",you,comp);
    int n = compare(you,comp);
    if(n == 0)
    printf("Game Draw!\n");
    else if(n == 1)
    printf("You Win!\n");
    else
    printf("You Loss!\n");

    return 0;
}

