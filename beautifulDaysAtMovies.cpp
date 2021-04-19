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

int reverse(int x){
    int r = 0;
    while(x!=0){
        r*=10;
        r+=x%10;
        x/=10;
    }
    return r;
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

    int i,j,k,count=0;
    cin>>i>>j>>k;

    for(int p=i;p<=j;p++){
        
        if(abs(p-reverse(p)) % k==0){
            count++;
        }
    }

    cout<<count<<endl;   




    return 0;

} 
