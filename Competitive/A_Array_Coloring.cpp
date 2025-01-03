#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int a=0;
        bool yes =0;
        for(int i =0;i<n;i++){
            a+=arr[i];
            sum -=arr[i];
            if(sum%2 == a%2){
                cout<<"YES"<<endl;
                yes = 1;
                break;
            }
        }
        if(yes == 0){
            cout<<"NO"<<endl;
        }
    }
}