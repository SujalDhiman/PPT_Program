#include<iostream>
#include<vector>
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
    int val;
    cin>>val;
    int countWithoutVal=0;
    for(int i=0;i<size;i++)
    {
        if(v[i]!=val)
        countWithoutVal++;
    }
    cout<<"Values without val "<<countWithoutVal<<endl;
    for(int i=0;i<=size-1;i++)
    {
        if(v[i]==val)
        swap(v[i],v[i+1]);
    }
    for(int i=countWithoutVal;i<size;i++)
    {
        v[i]=0;
    }
    for(int i=0;i<size;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}