#include<stdio.h>  
 int main()    
{    
    int n,car_number=0,m;   
    int state_code;
    int TN,MP,MH,KA,KL,JK,AS,UP,PB,HP,RJ,GJ,OR,CG,WB,AP,MZ,MR,SK,TS;
    printf("WELCOME TO THE CENTRAL CAR PARKING SYSTEM\n");
    
    printf("____________________________________________________\n");
    
    printf("Enter your car state code :   \n");
    scanf("%d",&state_code);
    printf("Enter a car_number:\n");    
    scanf("%d",&car_number);
    scanf("%d",&n);    
    while(n>0)    
    {    
    m=n%10;    
    car_number=car_number+m;    
    n=n/10;    
    }    
    printf("car to be parked at gate no.=%d\n",car_number);    


    char c;
    for (c = 'A'; c <= 'Z'; ++c)
        printf("%c ", --c);
    return 0;
}   
