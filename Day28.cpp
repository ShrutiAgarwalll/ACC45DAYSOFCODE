//tv discount
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        if(A-C>B-D)
        {
            cout<<"second"<<endl;
        }
        else if(A-C<B-D)
        {
            cout<<"first"<<endl;
        }
        else
        {
            cout<<"any"<<endl;
        }
    }
   

    return 0;
}
