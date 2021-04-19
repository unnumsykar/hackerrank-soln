
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

void countAppleAndOrange(int marr,int m,int narr,int n,int a,int b,int s,int t){
    int applecount=0;
    for(int i=0;i<m;i++){
        cin>>marr;
        if(a+marr>=s && a+marr<=t) applecount++;
    }

    int orangecount=0;
    for(int i=0;i<n;i++){
        cin>>narr;
        if(b+narr>=s && b+narr<=t) orangecount++;
    }
    
    cout<<applecount<<endl<<orangecount<<endl;


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
   

 //   c_p_c();
    IOS;

    int s,t,a,b,m,n,marr,narr;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    

    countAppleAndOrange(marr,m,narr,n,a,b,s,t);

       




    return 0;

} 
