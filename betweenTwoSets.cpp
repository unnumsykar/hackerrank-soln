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

    int n,m; 
    cin>>n>>m;
    int a[101],b[101];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int c=0;
    for(int k=1;k<=100;k++){
        int flag=1;
        for(int j=0;j<n;j++){
            if(k%a[j]!=0){
                flag=0;
                
            }
        }
        for(int j=0;j<m;j++){
            if(b[j]%k!=0){
                flag=0;
                
            }
        }
        if(flag==1){
            c++;
        }
    }
    cout<<c<<endl;



       




    return 0;

} 
