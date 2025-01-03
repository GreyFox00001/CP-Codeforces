#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        cin>>x;
        vector<int>station(n);
        for(int i =0;i<n;i++){
            cin>>station[i];
        }
        vector<int>route(x+1,0);
        for(int i =0;i<n;i++){
            route[station[i]]=1;
        }
        int tank = 0;
        int consume=0;
        int maxconsume=0;
        for(int i=1;i<route.size();i++){
            consume++;
            tank = -consume;
            maxconsume=max(maxconsume,consume);
            if(route[i]==1){
                consume=0;
                tank = 0;
            }
        }
        for(int i =route.size()-2;i>=0;i--){
            consume++;
            tank = -consume;
            maxconsume=max(maxconsume,consume);
            if(route[i]==1){
                consume=0;
                tank = 0;
            }
        }
        cout<<maxconsume<<endl;
    }
}