#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        vector<long long>a(n);
        long long xorr=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            xorr = xorr^a[i];
        }
        if(xorr ==0)cout<<0<<endl;
        else if(n%2==0){
            cout<<-1<<endl;
        }else{
            cout<<xorr<<endl;
        }
    }
}