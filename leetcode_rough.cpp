#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    int n;
    int k;
    cin>>m;
    cin>>n;
    cin>>k;
       int p=1;
        int q=1;
        vector<long long int> v;
        for(int i=1;i<=m*n;i++){
            if(i==q*n){
                v.push_back((long long int)(p*q));
                q++;
                p=1;
            }
            else{
                v.push_back((long long int)(p*q));
                p++;
            }
            if(i==k+1){
                break;
            }
        }
        sort(v.begin(),v.end());
        for(int i:v){
            cout<<i<<" ";
        }
        return 0;
}