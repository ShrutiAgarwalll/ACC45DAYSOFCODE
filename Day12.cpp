//broken phone
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<"new phone"<<endl;
        }
        else if(y>x)
        {
            cout<<"repair"<<endl;
        }
        else
            cout<<"any"<<endl;
        }
    return 0;
}
