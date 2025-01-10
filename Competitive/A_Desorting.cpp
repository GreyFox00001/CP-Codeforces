#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
    long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i =0;i<n;i++){
            cin>>a[i];
        }
        long long oper = INT_MAX;
        for(long long i =0;i<n-1;i++){
            if(a[i]>a[i+1]){
                oper =0;
                break;
            }else{
                long long op = ((a[i+1]-a[i])/2)+1;
                oper = min(oper,op);
            }
        }
        cout<<oper<<endl;
    }
}
