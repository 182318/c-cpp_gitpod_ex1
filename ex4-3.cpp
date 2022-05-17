#include <iostream>

using namespace std;

int main(){
    int r;
    float pi=3.14159265359;
    
    printf("please input radius:\n");
    scanf("%d",&r);
    
    if(r>=0){
        printf("circumference=%f units \n",2*pi*r);
        printf("your circular area=%f units^2 \n", pi*r*r);
    }else{
        printf("your input is invalid");
    }
    
    return 0;
}
