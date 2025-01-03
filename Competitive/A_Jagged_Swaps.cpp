#include<bits/stdc++.h>
using namespace std;
bool checkeql(vector<int>a,vector<int>b){
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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>sorted = arr;
        sort(sorted.begin(),sorted.end());
        for(int i =1;i<n-1;i++){
            if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
                swap(arr[i],arr[i+1]);
            }
        }
        if(checkeql(arr,sorted)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}