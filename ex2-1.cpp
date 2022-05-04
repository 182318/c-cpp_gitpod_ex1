#include <stdio.h>

int main()
{
    int i ;
    double f;
    float f1;
    char* s;
    char s1='c';
    
    #if 0
    printf("please input an integer: \n");
    scanf("%d",&i);
    printf("your input integer= %d\n",i);
    
    printf("please input a float number: \n");
    scanf("%lf",&f);
    printf("your input integer= %lf\n",f);
    
    printf("please input a string:\n");
    scanf("%s",s);
    printf("your input integer= %s\n",s);
    #endif
    
    printf("char display=%2c\n",s1);
    printf("char display=%x\n",s1);
    
    int a ;
    printf("please input an integer: \n");
    scanf("%d",&a);
    printf("your input integer= %d\n",a+2);
    printf("your input integer= %d\n",a-2);
    printf("your input integer= %d\n",a*2);
    printf("your input integer= %d\n",a/2);
    
    return 0;
}
