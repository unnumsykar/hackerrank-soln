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
   

    //c_p_c();
    IOS;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
    //using bubble sort algorithm   
    int countemp=0;
   
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                countemp++;
            }
        }
        if(countemp==0){
            break;
        }
    }
    


   cout<<"Array is sorted in"<<" "<<countemp<<" "<<"swaps."<<endl;
   cout<<"First Element:"<<" "<<arr[0]<<endl;
   cout<<"Last Element:"<<" "<<arr[n-1]<<endl;







    return 0;

} 
