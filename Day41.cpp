//counting problem
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int arr[10000000],n;
        int count=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if (arr[j]%2!=0)
            {
                count++;
            }
        }
        if(count%2==0)
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
