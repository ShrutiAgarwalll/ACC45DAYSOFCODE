//The cheaper cab
#include <iostream>
using namespace std;
int main() 
{
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
    cout<<"first cab";
    }
    else if (y<x)
    {
    cout<<"second cab";
    }
    else
    {
    cout<<"any";
    }
    return 0;
}
