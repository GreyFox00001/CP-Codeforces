#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int a = abs(arr[i]);
        smallest = min(a,smallest);
    }
    cout<<smallest<<endl;
}