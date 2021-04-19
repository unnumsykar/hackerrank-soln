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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int n_3=0;

        while(n%3!=0){
            n-=5;
            n_3++;
        }
        if(n<0){
            cout<<"-1"<<endl;
        }
        else{
            while(n!=0){
                cout<<"555";
                n-=3;
            }
            for(int i=0;i<n_3;i++){
                cout<<"33333";
            }
            cout<<endl;
        }
    }

       




    return 0;

} 
