#include<bits/stdc++.h>
using namespace std;
bool checksorted(vector<int>a,vector<int>b){
    for(int i =0;i<a.size();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>sorted = arr;
        sort(sorted.begin(),sorted.end());
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        if(k==1){
            if(checksorted(arr,sorted)){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        cout<<"YES"<<endl;
        continue;
    }
}