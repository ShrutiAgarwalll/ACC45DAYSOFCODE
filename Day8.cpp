//To Do List
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0; i<a; i++)
	{
	    int b ,c;
	    int count = 0;
	    cin>>b;
	    for(int j=0; j<b; j++)
        {
            cin>>c;
            if(c >= 1000)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
	    cout<<count<<endl;
	}
	return 0;
}
