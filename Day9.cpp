#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age:  ";
    cin>>age;
    try
    {
        if(age<=0)
        throw age;
        else if(age<=17)
        throw 'a';
        else
        cout<<"Age is over 18, Verified!!";
    }
    catch(int age)
    {
        cout<<"Age is invalid";
    }
    catch(char age)
    {
        cout<<"Age is under 18";
    }
    return 0;
}
