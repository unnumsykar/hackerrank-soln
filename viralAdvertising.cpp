/**
 *  author:   unnum_sykar
 *  Todo  :   "Make it work, make it right, make it Fast." 
**/

#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e5 + 5;

void c_p_c(){
#ifndef ONLINE_JUDGE
    // for writing input to input.txt
    freopen("input.txt","r", stdin);
    // for getting output from output.txt
    freopen("output.txt","w",stdout);
#endif 
}    
int32_t main()
{
   

//    c_p_c();
    IOS;

    int n,ans=2,k=2;
    cin>>n;

    for(int i=2;i<=n;i++){
        k*=3;
        k = k/2;
        ans+=k;

   }

    cout<<ans<<endl;  





    return 0;

} 
