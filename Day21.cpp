//mario and bullet
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(z-(y/x)>0)
        {
            cout<<z-(y/x)<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
