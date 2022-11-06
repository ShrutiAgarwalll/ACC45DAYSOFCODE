//Test score
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i =0;i<a;i++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if(y==0)
        {
            cout<<"yes"<<endl;
        }
        else if(y%x==0)
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
