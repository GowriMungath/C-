#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is greater";
    }
    else if(b>c)
    {
        cout<<b<<" is greater";
    }
    else
    {
        cout<<c<<" is greater";
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number ";
    cin>>a;
    if(a%2==0)
    {
        cout<<a<<" is an even number.";
    }
    else
    {
        cout<<a<<" is an odd number.";
    }
    return 0;
}
