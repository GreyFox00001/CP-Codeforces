#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        vector<int>arr(n);
        int occ=0;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k){
                occ++;
            }
        }
        if(occ>=1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}