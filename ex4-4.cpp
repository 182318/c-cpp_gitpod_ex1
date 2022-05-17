#include <iostream>

using namespace std;

int main()
{
    int year;
    
    printf("please enter a year:\n");
    scanf("%d",&year);
    
    if(year%4!=0 && year%100==0){
        printf("it is not a leap year");
    }else if(year%4==0 && year%100!=0){
        printf("it is a leap year");
    }else if(year%100==0 && year%400!=0){
        printf("it is not a leap year");
    }else if(year%400==0 && year%3200!=0){
        printf("it is a leap year");
    }else{
        printf("it is not a leap year");
    }

    return 0;
}   
