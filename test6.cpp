#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>v;
    for(int i=0;i<size;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    int f=0;
    for(int i=0;i<size-1;i++)
    {
        if(v[i]==v[i+1])
        {
            f=1;
            break;
        }
    }
    if(f)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
}