#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Question
{
    char question[250];
    char optionA[25];
    char optionB[25];
    char optionC[25];
    char optionD[25];
    char answer;
};

int main()
{

    struct Question gk[] = {{"1. What is the capital of France?",
                             "A: Berlin",
                             "B: Paris",
                             "C: Rome",
                             "D: Madrid",
                             'b'},
                            {"2. What is the largest country in the world?",
                             "A: China",
                             "B: Russia",
                             "C: Canada",
                             "D: United States",
                             'b'}};

    int numberOfQns = sizeof(gk) / sizeof(gk[0]);
    char userAnswer;
    int score = 0;

    for (int i = 0; i < numberOfQns; i++)
    {
        printf("\n%s", gk[i].question);
        printf("\n%s", gk[i].optionA);
        printf("\n%s", gk[i].optionB);
        printf("\n%s", gk[i].optionC);
        printf("\n%s", gk[i].optionD);
        printf("\n Enter one option A, B, C, or D: ");
        scanf(" %c", &userAnswer);

        if (tolower(userAnswer) == tolower(gk[i].answer))
        {
            printf("You entered correct answer.\n");
            score++;
        }
        else
        {
            printf("The correct answer is %c.\n", gk[i].answer);
        }
    }

    printf("Your total score is %d\n", score);

    return 0;
}
