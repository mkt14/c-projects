#include <stdio.h>
#include <conio.h>
int main (){
   float bill,rate[10];
   int qty[10],i,bid,n;
   char item,name;
   printf("Enter the bill id:  ");
   scanf("%d",&bid);
   printf(          "Welcome to the D^MART\n\n\n\n");
   printf("**************________________________***************\n");
   
   printf("Enter the no. of produts purchased: \n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("\n\nEnter the %d name of products   :  \n",i+1);
       scanf("%d",&name);
       printf("Enter the rate of %s items  \n",item[i]);
       scanf("%f",&rate[i]);
       printf("\nEnter the quantity of %s item:  \n",item[i]);
       scanf("%d",&qty[i]);
       bill = bill+(rate[i]*qty[i]);
       
      
   }
   printf("\n\n************ Wel - Come ******************");
    printf("\n\nBill id is= %d",bid);
    printf("\n\nCustomer name= %s",name);
    for(i=0;i<n;i++)
     {
    printf("\n\n%s\t\t%.2f\t%d\t%.2f",item[i],rate[i],qty[i],rate[i]*qty[i]);
    }
    printf("\n\n\t\t\tTotal=  %.2f",bill);
    printf("\n\n************** Thank you ***********************");
}
}



