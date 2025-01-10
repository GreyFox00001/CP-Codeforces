#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxind=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]== n){
                maxind =i;
            }
        }
        if(maxind == n-1){
            reverse(arr.begin(), arr.end());
        }
        swap(arr[maxind],arr[n-1]);
        for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

}