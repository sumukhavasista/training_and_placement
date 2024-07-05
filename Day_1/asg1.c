//Problem statement goes here




#include<stdio.h>
int main()
{
    int m, n, m1, n1, x, y;
    scanf("%d %d %d %d %d %d", &m, &n, &m1, &n1, &x, &y);
    int apple = m + m + m1 - x;
    int orange = n + n + n1 - y;
    printf("%d %d", apple, orange);
}