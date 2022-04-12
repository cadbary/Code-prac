#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j;
    cin>>n;
    int a[n];
    for(j=0;j<n;j++)
    {
        cin>>a[j];
        int b=a[j]%5;
        b=5-b;
       if(a[j]>=38 && b<=2)
       {
           cout<<a[j]+b<<endl;
       }
       else {
       cout<<a[j]<<endl;
       }
    }
    
}