//HACKERMAN
#include <iostream>
using namespace std;
int main() 
{
   int a;
   cin>>a;
   for(int i=0;i<a;i++)
   {
       int A,B,N,K=0;
       cin>>A>>B;
       N=A+B;
       for(int j=2;j<N;j++)
       {
           if(N%j==0)
           {
              K++;
              break;
           }
       }
if(K==0)
{
    cout<<"ALICE"<<endl;
}
else
{
    cout<<"BOB"<<endl;
}
   }
    return 0;
}
