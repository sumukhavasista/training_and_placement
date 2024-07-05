#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int sum = 0, product = 1, res;
    int temp = num;
    while (num > 0)
    {
        res = num % 10;
        sum = sum + 10;
        product = product * res;
        num = num / 10;
    }

    int total = sum + product;
    if(total == temp)
    printf("Special number");
else
    printf("Not a special number")
}