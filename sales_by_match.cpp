#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,count=0;
    cin >> n;
    
    int k[101]={0};
    for(auto i=0;i<n;i++)
    {
        int c;
        cin >> c;
        k[c]++;
    }
    for(j=0;j<=100;j++)
    {
        count +=k[j]/2;
    }
    cout<< count<<endl;

}