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


#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=5;
    char ch='c';
    bool b=true;
    float f=4.5;
    double d=7.97;
    string str="Gowri";
    float scientific=4e3;
    double sci=8E4;
    char p=75, c=45;
    cout<<a<<" "<<ch<<" "<<b<<" "<<f<<" "<<d<<" "<<str<<endl;
    cout<<scientific<<" "<<sci<<" "<<endl;
    cout<<p<<" "<<c;
}
