#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b,n,k,total,sum=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];    
    }
    cin>>b;
    // cout<<a[0]<<endl<<k<<endl<<b<<endl;
   for(int j=0;j<n;j++)
   {
       sum=sum+a[j];

   }
   
   total=(sum-a[k])/2;
   total=b-total;
   if(total==0)
   cout<<"Bon Appetit";
   else
   cout<<total;
}