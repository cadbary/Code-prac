#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int a[100];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(a[i]>=m)
    {
        sum+=a[i]-m;
        m=a[i];
    }
    }
    cout<<sum;
}
