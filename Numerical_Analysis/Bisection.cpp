#include<iostream>
#include<cmath>
using namespace std;


int main() {
    double a,b,x,fa,fb,fx;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    double tol;
    cout<<"Enter the tolerance value: ";
    cin>>tol;
    fa = a*a*a - a - 1;
    fb = b*b*b - b - 1;

    if(fa*fb>0) {
        cout<<"The function does not have a root in the given interval"<<endl;
        return 0;
    }
    else
    {
        x = (a+b)/2;
        fx = x*x*x - x -1;
        while(abs(fx)>tol)
        {
            x = (a+b)/2;
            fx = x*x*x - x -1;
            if(fx*fa>0)
            {
                a = x;
            }
            else
            {
                b = x;
            }
        }
        cout<<"The root of the function is: "<<x<<endl;
    }

}