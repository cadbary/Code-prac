#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,n,sum,count=0,k;
cin>>n>>k;
int a[n];
for(int r=0;r<n;r++)
{
    cin>>a[r];
    
}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
            sum=a[i]+a[j];
            if(sum%k==0)
            {
             count++ ; 
            }
            }
        }
        
    }
    cout<<count;
    
}