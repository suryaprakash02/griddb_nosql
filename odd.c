#include <stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("Enter an integer ");
    scanf("%d", &num);

    // True if the number is perfectly divisible by 2
    if(number % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

   getch();
}
