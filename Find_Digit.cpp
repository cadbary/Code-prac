#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,count=0,temp;
        cin>>n;
        while(temp!=0)
        {
            int r=tmp%10;
            if(r!=0 && n%r==0)
            count++;
            temp/=10;
        }
        

        count++;
    }
    cout<<count;
}