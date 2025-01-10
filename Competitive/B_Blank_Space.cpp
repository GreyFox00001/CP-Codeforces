#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>a(n);
        int count=0;
        int maxi =0;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                count++;
                maxi=max(maxi,count);
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        cout<<maxi<<endl;
    }
}