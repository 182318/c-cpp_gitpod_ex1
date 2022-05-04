#include <cstdio>
#include <iostream>

using namespace std;

double pi=3.1415926535897932384626433832795,r;


int main()
{
    cout<<"please enter your circle radius:\n";
    scanf("%lf",&r);
    cout<<"your circumference="<<2*pi*r<<"\n"<<"your circular area="<<pi*r*r;

    return 0;
}
