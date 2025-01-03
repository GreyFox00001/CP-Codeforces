#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int count1=0,count11=0;
        for(int i =0;i<n;i++){
            cin>>v[i];
            if(v[i]==1){
                count1++;
            }
            if(v[i]==-1){
                count11++;
            }
        }
        if(count1>=count11){
            if(count11%2 == 0){
                cout<<0<<endl;
            }else{
                cout<<count11%2<<endl;
            }
        }else{
            if(n/2 % 2 !=0){
                cout<<(count11-n/2)+1<<endl;
                continue;
            }
            cout<<(count11-n/2)<<endl;
        }
    }
}