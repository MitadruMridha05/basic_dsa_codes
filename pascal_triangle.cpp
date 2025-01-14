#include<iostream>
#include<vector>
using namespace std;
int fact(int x)
{
    if(x==1 || x==0){
        return 1;
    }
    return x*fact(x-1);
}
int main(){
    vector<int> v;
    vector<vector<int>> w;
    int numRows;
    cout<<"enter the index"<<endl;
    cin>>numRows;
        //cout<<"k"<<endl;
    for(int i=0;i<numRows;i++)
    {
         for(int j=0;j<=i;j++)
        {
            v.push_back(fact(i)/(fact(i-j)*fact(j)));
            //cout<<"k"<<endl;
        }
        w.push_back(v);
    }
    for(int i:v)
    {
        return i;
    }
}