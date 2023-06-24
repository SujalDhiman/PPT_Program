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
    int mis=-1,dup=-1;
    for(int i=0;i<size;i++)
    {
        if(v[i]!=i+1)
        {
            mis=i+1;
            dup=v[i];
            break;
        }
    }
    cout<<dup<<" "<<mis<<endl;
}