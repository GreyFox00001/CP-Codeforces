#include<bits/stdc++.h>
using  namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        cin>>a;
        cin>>b;
        if(n == 1 && a==1 && b==1){cout<<"Yes"<<endl;continue;}
        if(n%2==0){
            if(a == b)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else{
            if(a != b)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}