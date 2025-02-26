// 07 File Average Score

#include <stdio.h>

double findAverage(char *filename)
{
    FILE *path = fopen(filename, "r");
    double sum = 0, score;
    int count = 0;

    while (fscanf(path, "%lf", &score) != EOF)
    {
        sum += score;
        count++;
    }

    fclose(path);

    return sum / count;
}   

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}