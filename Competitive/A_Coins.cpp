#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n;
        cin>>k;
        long long p = n%k;
        if(p%2 == 0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
}