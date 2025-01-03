#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;

        int op =0;
        while(x.length()<s.length()){
            x+=x;
            op++;
        }
        if(x.find(s)!=-1){
            cout<<op<<endl;
            continue;
        }
        x+=x;op++;
        if(x.find(s)!=-1){
            cout<<op<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
}