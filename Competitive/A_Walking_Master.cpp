#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        if(a==c && b==d){
            cout<<0<<endl;
            continue;
        }
        if(b>d || (c-a)>(d-b)){
            cout<<-1<<endl;
            continue;
        }else{
            int chngy =d-b;
            int chngx= c-a;
            cout<<(chngy-chngx)+chngy<<endl;
            continue;
        }
    }
}