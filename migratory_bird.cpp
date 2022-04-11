#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a_count=0,b_count=0,c_count=0,d_count=0,e_count=0,count=0,max=0;
   cin>>n;
   int a[n],b[1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<=n;j++)
    {
     switch (a[j])
     {
         case 1:
         a_count++;
         break;
         case 2:
         b_count++;
         break;
         case 3:
         c_count++;
         break;
         case 4:
         d_count++;
         break;
         case 5:
         e_count++;
         break;
     } 
 }
 if(max < a_count){
         max=a_count;
         //b[0]=max;
         b[1]=1;
     }
         if(max < b_count){
         max=b_count;
         //b[0]=max;
         b[1]=2;
     }
     if(max < c_count){
         max=c_count;
         //b[0]=max;
         b[1]=3;
     
     }
     if(max < d_count){
         max=d_count;
         //b[0]=max;
         b[1]=4;
     }
     if(max < e_count){
         max=e_count;
         //b[0]=max;
         b[1]=5;
     }
     cout<<b[1];
}