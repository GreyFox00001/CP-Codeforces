#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int neteff =0;
        for(int i =0;i<n-1;i++){
            cin>>arr[i];
            neteff+=arr[i];
        }
        cout<<(0-neteff)<<endl;
    }
}