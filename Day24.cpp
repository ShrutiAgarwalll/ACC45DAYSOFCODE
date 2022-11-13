//speed limit test
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        float A,X,B,Y,C,D;
        cin>>A>>X>>B>>Y;
        C=A/X;
        D=B/Y;
        if(C>D)
        {
            cout<<"ALICE"<<endl;
        }
        else if(C<D)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"EQUAL"<<endl;
        }
    }
	return 0;
}
