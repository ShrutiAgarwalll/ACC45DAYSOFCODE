//water consumption
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        if(x>=2000)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}
