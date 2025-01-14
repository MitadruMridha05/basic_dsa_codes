#include<iostream> 
#include<vector>
using namespace std;
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        if(n>1){
            return x*myPow(x,n-1);
        }
        if(n<0){
            return myPow(x,n+1)/x;
        }
    }
    int main()
    {
        cout<<myPow(2,10);
    }