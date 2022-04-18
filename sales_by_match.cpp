/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];        
        if (a[i]==a[i+1]) 
        {
            count++;
            i=i+2;        
        }
    }
    cout<<count;
    
}*/

    
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i,j;
    cin>>n;
    int c[n];
    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
      if(c[i]==c[j+1])
      {
          
          count++;
          i=i+2;
            c[j]=0;
      }
      
        }
    }
    cout<<count;
        
}
