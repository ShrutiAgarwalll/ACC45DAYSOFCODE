//odd_sum_pair
#include <iostream>
using namespace std;

int main() {
	int a;
    cin>>a;
	for(int i=0; i<a; i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
        if(a%2!=0 and b%2!=0 and c%2!=0)
	    {
	        cout<<"NO";
	    }
	    else if(a%2!=0 || b%2!=0 || c%2!=0)
	    {
	        cout<<"YES";
	    }
        else
        {
            cout<<"NO";
        }
	}
}
    
