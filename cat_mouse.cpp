#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        a=abs(x-z)
        b=abs(y-z);
        if(a<b)
        {
        cout<<"Cat A"<<endl;
        }
        else if(a>b)
        {
        cout<<"Cat B"<<endl;
        }
        else
        {
        cout<<"Mouse C"<<endl;
        }   
    }    
}