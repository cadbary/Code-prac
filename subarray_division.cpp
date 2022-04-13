#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m,i,sum[100],count=0;
    cin>> n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];  
        sum[i]=sum[i-1]+a[i];
    }    
    cin>>d>>m;
    for(i=m;i<=n;i++)
    {
        if(sum[i]-sum[i-m]==d)
        
        count++;
        
    }
    cout<<count;
}