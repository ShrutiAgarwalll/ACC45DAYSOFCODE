//minimum coin
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int x;
	    cin>>x;
	    if(x%10==0)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<x%10<<endl;
	    }
	}
	return 0;
}
