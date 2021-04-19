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
int height(int n){
    int h=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0) h*=2;
        if(i%2==0) h++;
    }
    return h;
}

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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<height(n)<<endl;
    }   




    return 0;

} 
