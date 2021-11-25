#include <stdio.h>

int main()
{
    float scoreOne, scoreTwo, answer;

    printf("Input the first Score: ");
    scanf("%f", &scoreOne);
    printf("Input the second Score: ");
    scanf("%f", &scoreTwo);

    answer = (scoreOne + scoreTwo) / 2;

    printf("\nThe Mean Score is: %.1f\n", answer);

    return 0;
}
