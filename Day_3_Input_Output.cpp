//input output
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"sum = "<<a+b;
}

//multiple variables 
#include<iostream>
using namespace std;
int main()
{
    int a=5,b=10;
    cout<<"sum = "<<a+b;
}

#include<iostream>
using namespace std;
int main()
{
    const int a=5,b=10;
    cout<<"sum = "<<a+b;
    a=a+6; //error because a is declared as a constant and its value can't be altered
}
