#include<iostream>
using namespace std;
int main()
{
    int date;
    float money=3000;
    for(date=1;date<=30;date++)
    {
        if(date%2==0)
        {
            continue;
        }
        cout<<"Today is "<<date<<". You can go"<<endl;
        money=money-500;
        if(money<=0)
        {
            cout<<"You dont't have enough money. You can't go!";
            break;
        }
    }
}

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}

//prime or not check
#include<iostream>
using namespace std;
int main()
{   
    int n;
    int flag=1;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==1)
    {
        cout<<"Neither prime nor composite";
        exit(0);
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NOT PRIME";
    }
    else
    {
        cout<<"PRIME";
    }
}

#include<iostream>
using namespace std;
int main()
{   
    int i;
    int n1,n2;
    cout<<"Enter start and end: ";
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        int flag=1;
        for(int j=2;j<=i/2;j++)
        {
        if(i%j==0)
        {
            flag=0;
            break;
        }
        }
        if(flag==1)
        {
        cout<<i<<" is a prime number."<<endl;
        }
    }
}
