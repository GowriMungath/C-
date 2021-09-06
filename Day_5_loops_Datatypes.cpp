#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,p,q;
    cout<<"Enter value of n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
    cout<<"Enter p: ";
    cin>>p;
    while(p>=0)
    {
        cout<<"p= "<<p<<endl;
        cout<<"Enter p: ";
        cin>>p;
    }
    cout<<"Enter q: ";
    cin>>q;
    do
    {
        cout<<q<<endl;
        cout<<"Enter q: ";
        cin>>q;
    }
    while(q>=0);
}

