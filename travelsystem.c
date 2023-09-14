#include <stdio.h>

int main()
{
     char place;
     int pack,members,totalpay,payable;
     printf("---------Welcome to JOE travels--------- \n which place would you like to travel? \n Goa-G \n Bangalore-B \n Darjeling-D \n  ");
     scanf("%c",&place);
     printf("enter travel/package Duration \n 3 Days package - 3 \n 5 Days package -5\n");
     scanf("%d",&pack);
     printf("enter total members in your family or group \n");
     scanf("%d",&members);
     printf("We have veg and Non-Veg food and if you want bevarages you can buy your own expenses \n");
     if(place=='G')
     {
        totalpay = 15000*pack;
     }
     else if(place=='B')
     {
        totalpay = 10000*pack;
     }
     else if(place=='D')
     {
        totalpay = 20000*pack;
     }

     else
     {
        printf("Selected package is not available in our travels\n ");
     }

     printf("enter payable amount\n");
     scanf("%d",&payable);
     if (payable>=totalpay)
     {
        printf("------congratulation!------- \n your tickets booked successfully \n your remaining Balance is %d",payable-totalpay);
     }

     else if(payable<totalpay)
     {
        printf("your money is insufficient\n you should pay remaining %d amount for ticket booking or else your ticket booking will be cancelled \n",totalpay-payable);
     }

     else
     {
        printf("your ticket booking is cancelled");
     }
     

}
