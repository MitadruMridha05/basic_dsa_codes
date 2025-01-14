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
int main()
{
    int rowIndex;
    cout<<"enter the index"<<endl;
    cin>>rowIndex;
    //cout<<"k"<<endl;
    vector<int> v;
    //cout<<"k"<<endl;
    for(int i=0;i<rowIndex;i++)
    {
        v.push_back(fact(rowIndex)/(fact(rowIndex-i)*fact(i)));
        //cout<<"k"<<endl;
    }
   //cout<<"k"<<endl;
   for(int i:v)
    {
      cout<<i<<" ";
    }
}
