#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char> >arr(10, vector<char>(10));
        int score =0;
        for(int i=0;i<10;i++){
            for(int j =0;j<10;j++){
                cin>>arr[i][j];
                char c = arr[i][j];
                if((c == 'X')&&((i==0 && (j==0||j==1||j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9))||(i==9 && (j==0||j==1||j==2||j==3||j==4||j==5||j==6||j==7||j==8||j==9))||(j==0 && (i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9))||(j==9 && (i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9)))){
                    score=score+1;
                }
                if((c == 'X')&&((i==1 && (j==1||j==2||j==3||j==4||j==5||j==6||j==7||j==8))||(i==8 && (j==1||j==2||j==3||j==4||j==5||j==6||j==7||j==8))||(j==1 && (i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8))||(j==8 && (i==1||i==2||i==3||i==4||i==5||i==6||i==7||i==8)))){
                    score=score+2;
                }
                if((c == 'X')&&((i==2 && (j==2||j==3||j==4||j==5||j==6||j==7))||(i==7 && (j==2||j==3||j==4||j==5||j==6||j==7))||(j==2 && (i==2||i==3||i==4||i==5||i==6||i==7))||(j==7 && (i==2||i==3||i==4||i==5||i==6||i==7)))){
                    score=score+3;
                }
                if((c == 'X')&&((i==3 && (j==3||j==4||j==5||j==6))||(i==6 && (j==3||j==4||j==5||j==6))||(j==3 && (i==3||i==4||i==5||i==6))||(j==6 && (i==3||i==4||i==5||i==6)))){
                    score=score+4;
                }
                if((c == 'X')&&((i==4 && (j==4||j==5))||(i==5 && (j==4||j==5))||(j==4 && (i==4||i==5))||(j==5 && (i==4||i==5)))){
                    score=score+5;
                }
            }
        }
        cout<<score<<endl;
    }
}