#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if((a+b+c)%2 == 0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }
    }
}