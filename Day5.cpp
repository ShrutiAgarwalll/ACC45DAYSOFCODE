//The_Lead_Game
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int n;
	    cin>>n;
	    
	    int sum1=0, sum2=0;
	    int winner, lead=0;
	    int dif=0;
	    for(int i=0;i<n;i++)
	    {
	        int p1, p2;
	        cin>>p1>>p2;
	        sum1 += p1;
	        sum2 += p2;
	        if(sum1 > sum2)
	        {
	            dif = sum1-sum2;
	            if(dif > lead){
	                lead = dif; 
	                winner = 1; 
	            }
	        }
	        else
	        {
	            dif = sum2 - sum1;
	            if(dif > lead){
	                lead = dif;
	                winner = 2;
	            }
	        }
	    }
	    cout << winner << " " << lead << endl;
	    
	return 0;
}
