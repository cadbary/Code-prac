#include<bits/stdc++.h>
using namespace std;
int main()
{
//    //int main() {
//   int i = 5;
//   while (i--) {
//     cout << i << "\n";
    
//   }
//   return 0;
//}

    int s,t,a,b,m,n,x,ac=0,oc=0;
    cin>>s>>t>>a>>b>>m>>n>>x;

    while(m--)
    {
        cin>>x;
        if(a+x>=s && a+x <= t) ac++;
    }

    while(n--)
    {
        cin>>x;
        if(b+x>=s && b+x <= t) oc++;
    }

    cout<<ac<<oc;

    return 0;
}