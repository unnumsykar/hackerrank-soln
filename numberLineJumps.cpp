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
   

 //   c_p_c();
    IOS;

    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    if(v1>v2){
        while(x1<=x2){
            if(x1==x2){
                cout<<"YES"<<endl;
                return 0;
            }
            x1+=v1;
            x2+=v2;
        }
    }
    if(v2>v1){
        while(x2<=x1){
            if(x1==x2){
                cout<<"YES"<<endl;
                return 0;
            }
            x1+=v1;
            x2+=v2;
        }
    }
    if(v1==v2){
        if(x1==x2){
            cout<<"YES"<<endl;
        }
    }
    cout<<"NO"<<endl;
    return 0;



    return 0;

} 
