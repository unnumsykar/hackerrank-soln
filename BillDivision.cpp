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

    int n,k,a,sum=0,b;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>a;
        if(i!=k) sum+=a;
    }
    cin>>b;

    if(sum/2==b) cout<<"Bon Appetit"<<endl;
    else cout<<b-sum/2<<endl;   




    return 0;

} 
