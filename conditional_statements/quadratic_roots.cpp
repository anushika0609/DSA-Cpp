#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int a, b, c;
    cout<<"Enter a :";
    cin>>a;

    cout<<"Enter b :";
    cin>>b;

    cout<<"Enter c :";
    cin>>c;
    float d;
    d=sqrt((b*b)-4*a*c);

    float root1, root2;
    root1=(-b+d)/2*a;
    root2=(-b-d)/2*a;

    cout<<"Roots of the quadratic equation are "<<root1<<" and "<<root2;
    return 0;
}