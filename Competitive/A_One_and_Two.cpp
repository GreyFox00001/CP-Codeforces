#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int count2=0;
        for(int i =0;i<n;i++){
            if(a[i]==2){
                count2++;
            }
        }
        if(count2 == 0){
            cout<<1<<endl;
            continue;
        }
        if(count2%2==0){
        int two = 0;
        for(int i =0;i<n;i++){
            if(a[i]==2){
                two++;
                if(two == count2-two){
                cout<<i+1<<endl;
                break;
                }
            }
        }
        }
        else{
            cout<<-1<<endl;
        }
    }
}