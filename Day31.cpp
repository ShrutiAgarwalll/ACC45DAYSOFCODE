//finding shoes
#include <iostream>
using namespace std;
int main()
{
   int a;
   cin>>a;
   for(int i=0;i<a;i++)
   {
       int n,m;
       cin>>n>>m;
       if(m==n)
       {
           cout<<2*n<<endl;
       }
       else if(m<n)
       {
           cout<<(2*n)-m<<endl;
       }
       else
       {
           cout<<n<<endl;
       }
   }
    return 0;
}
