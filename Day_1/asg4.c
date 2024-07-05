#include<stdio.h>
int main()
{
    int p1, p2, p3;
    scanf("%d %d %d", &p1, &p2, &p3);

    if (p1 + p2 + p3 == 180)
    {
        if (p1 == 90 || p2 == 90 || p3 == 90)
        printf("Prize 2");
    else if (p1 == p2 && p2 == p3 && p3 == p1)
        printf("Prize 3");
    else
    printf("Prize 1");
    } 
    else
    {
        printf("No Prize");
    }
}