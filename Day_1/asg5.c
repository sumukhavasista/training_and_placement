    #include<stdio.h>
    int main()
    {
        char ticket= 'E';
        switch(ticket)
        {
            case 'E' : printf("Early bird ticket");
            break;

            case 'D' : printf("Discount ticket");
            break;

            case 'V' : printf("VIP Ticket");
            break;

            case 'S' : printf("Standard Ticket");
            break;

            case 'C' : printf("Children Ticket");
            break;

            default : printf("No tickets purchased");

        }
    }