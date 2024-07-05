#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    float res = 0.5;
    for (int i=1; i<=5; i++)
    {
        res = res * 3;
        printf("%0.2f", i);
    }
}