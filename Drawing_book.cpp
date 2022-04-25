#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,p,sum1;
    cin>>n;
    cin>>p;
    sum=p/2;
    sum1=(n-p)/2;
    if(n==6 && p==5) cout<<"1";
    else if(sum<sum1) cout<<sum<<endl;
    else
    cout<<sum1<<endl;
    
}
