#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if (arr[i]!=arr[i-1])
        {
            v.push_back(arr[i]);
        }

    }
    cout<<"the size of nums is: "<<v.size()<<endl<<"nums=[";
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"]";
    return 0;
}