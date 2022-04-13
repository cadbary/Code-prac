#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];       
    }
    
    
    
    for(j=0;j<n;j++)
    {
        if(j > 0 ) j=j-1;
        if(a[j+2]==0)
        {
            count=count+1;
            j=j+2;
            
        }
        else if(a[j+1]==0)
        {
            count=count+1;
            j=j+1;
            
        }
          


    }
    cout<<count;
       
}
