#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp1=-1,temp2=100000,n;
    cin>> n;
    int a[n],a_count=0,b_count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<temp2)
        {
            temp2=a[i];
            b_count++;
        }
        
        if(a[i]>temp1)
        {
            temp1=a[i];
            a_count++;
        }
    
        

    }
    cout<<a_count-1<<" ";
    cout<<b_count-1;
}