#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,f,count=0,k,flag1,flag2;
    cin>>m>>f;
    int a[m];
    for(i=0;i<m;i++)
    {
          cin>>a[i];
    }
    int b[f];
    for(j=0;j<f;j++)
    {
          cin>>b[j];
    }
        for(k=1;k<=100;k++)
        {

            flag1=0;
            flag2=0;
            for(i=0;i<m;i++)
            {

                if(k%a[i]!=0)
                {
                    flag1=1;

                }
            }
            for(j=0;j<f;j++)
            {
                if(b[j]%k!=0)
                {
                    flag2=1;

                }
            }
            if(flag1==0 && flag2==0)
            {
                count=count+1;
                }
        }
        cout<<count;
}