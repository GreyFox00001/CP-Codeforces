#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=1;i<n-1;i++){
            if(s[i]=='.'){
                if(s[i-1]!='#'&&s[i+1]!='#'){
                cnt+=2;
                s[i-1]='#';
                s[i+1]='#';
            }
            if((s[i-1]=='#'&&s[i+1]=='.')){
                cnt+=1;
                s[i+1]='#';
            }
            if((s[i-1]=='.'&&s[i+1]=='#')){
                cnt+=1;
                s[i-1]='#';
            }
            }
        }
        cout<<cnt<<endl;
    }
}