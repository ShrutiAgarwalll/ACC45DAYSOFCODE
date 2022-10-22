#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0; i<a; i++)
	{
	    int N,M;
	    cin>>N>>M;
	    int packets, rem;
	    if(N<=M)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        rem=(N-M)%4;
	        packets=(N-M)/4;
	        
	        if(rem==0)
	        {
	            cout<<packets<<endl;
	        }
	        else
	        {
	            cout<<packets+1<<endl;
	        }
	    }
	}
	return 0;
}
