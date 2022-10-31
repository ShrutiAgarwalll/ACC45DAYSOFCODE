//volume control
#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<x-y<<endl;
        }
        else if(y>x)
        {
            cout<<y-x<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
