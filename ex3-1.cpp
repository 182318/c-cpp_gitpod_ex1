#include <iostream>
int main() {
    double x,y;

    printf("please input y:\n");
    scanf("%lf",&y);
    
    printf("please input x:\n");
    scanf("%lf",&x);
    
    
    printf("%lf+%lf = %.4lf \n",x,y,x+y);
    printf("%lf+%lf = %.4lf \n",x,y,--x+y);
    printf("%lf+%lf = %.4lf \n",x,y,++x+y);
    printf("%lf-%lf = %.4lf \n",x,y,x-y);
    printf("%lf-%lf = %.4lf \n",x,y,++x-y);
    printf("%lf-%lf = %.4lf \n",x,y,--x-y);
    printf("%lf*%lf = %.4lf \n",x,y,x*y);
    printf("%lf*%lf = %.4lf \n",x,y,++x*y);
    printf("%lf*%lf = %.4lf \n",x,y,--x*y);
    printf("%lf/%lf = %.4lf \n",x,y,x/y);
    printf("%lf/%lf = %.4lf \n",x,y,++x/y);
    printf("%lf/%lf = %.4lf \n",x,y,--x/y);
    std::cout<<"hello world";
    
    return 0;
}
