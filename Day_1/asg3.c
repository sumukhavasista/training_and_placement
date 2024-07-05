//Problem statement 3.

//Lucky Winner
//It was the inaugural ceremony of "Fantasy Kingdom" Amusement park and the park Management has announced some lucky prizes 
//for the visitors on the first day. Based on this, the visitors whose ticket number has the last digit as 3 or 8, are declared as
//lucky winners and attracting prizes are awaiting to be presented for them.
//Write a program to find if the last digit of the ticket number of visitors is 3 or 8.
//Input Format
//First line of the input is an integer that corresponds to the ticket number.

//Output Format
//Output should display as "Lucky Winner" if the last digit of the ticket number is 3 or 8. Otherwise print "Not a Lucky Winner"
//Sample Input 43
//Sample Output 3 Lucky Winner


#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int reminder = num % 10;
    if (reminder == 3 || reminder == 8)
    
        printf("Lucky Winner");
        else
        printf("Not a lucky winner");
    
}