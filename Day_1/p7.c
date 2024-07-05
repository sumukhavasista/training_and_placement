#include<stdio.h>
int main()
{
    int num = 97;
    switch(num)
    {
        //case 100/10 also possible
        // case 10>10 is possible with op as No values

        case 'a' : printf("10");
        break;
        case 'b' : printf("20");
        break;
        default : printf("No values");
    }
}