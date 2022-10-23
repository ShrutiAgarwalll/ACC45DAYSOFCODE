//Easy Pronunciation
#include<iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	for(int i=0; i<a; i++)
	{
	    int N;
	    string S;
	    cin>>N>>S;
        int result=0;
        for(int j=0; j<N; j++)
        {
            if(result>=4)
            {
                break;
            }
            if(S[j]=='a' || S[j]=='e' || S[j]=='i' || S[j]=='o' || S[j]=='u')
            {
                result=0;
            }
            else
            {
                result++;
            }
        }
        if (result >= 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
	}
	return 0;
}

