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

    int n, k;
    cin>>n>>k;
    int a[101];

    int ans=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
         ans = *max_element(a,a+n);
    }
    if(ans<=k){
        cout<<"0"<<endl;
    }
    else{
        cout<<(ans-k)<<endl;
    }



    return 0;

} 
