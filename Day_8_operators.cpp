#include<iostream>
using namespace std;
int main()
{
    int i=10;
    cout<<i++<<++i;
    int n;
    cout<<"\nEnter the value of n: ";
    cin>>n;
    cout<<(n==10)<<endl;
    cout<<(n<10)<<endl;
    cout<<(n>10)<<endl;
    if(n%2==0)
    {
        cout<<"divisible by 2"<<endl;
    }
    else if(n%3==0)
    {
        cout<<"divisible by 3"<<endl;
    }
    else if(n%3==0 and n%2==0)
    {
        cout<<"divisible by both 2 and 3"<<endl;
    }
    char ch='a';
    cout<<int(ch)<<endl;
    cout<<&ch<<endl;
    char *p=&ch;
    cout<<p<<endl;
    cout<<sizeof(ch)<<endl;
    int a=10;
    a%2==0?cout<<"even":cout<<"odd";
}
