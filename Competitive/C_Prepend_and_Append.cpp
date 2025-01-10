#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long l=0;
        long r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                l++;
                r--;
            }
            else{
                break;
            }
        }
        cout<<r-l+1<<endl;
    }
}
