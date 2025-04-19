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
    fa = 2*a + 3 * cos(a) - exp(a);
    fb = 2*b + 3 * cos(b) - exp(b);

    if(fa*fb>0) {
        cout<<"The function does not have a root in the given interval"<<endl;
        return 0;
    }
    else
    {
        x = (a+b)/2;
        fx = 2*x + 3 * cos(x) - exp(x);
        while(abs(fx)>tol)
        {
            x = (a+b)/2;
            fx = 2*x + 3 * cos(x) - exp(x);
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