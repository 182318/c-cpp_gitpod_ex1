#include <iostream>

double pi=3.1415926535897932384626433832795,r;

int main()
{
    printf("please enter your circle radius:");
    scanf("%lf",&r);
    printf("your circumference=%lf units \n", 2*pi*r);
    printf("your circular area=%lf units^2 \n", pi*r*r);

    return 0;
}
