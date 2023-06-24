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
    int target;
    cin>>target;
    int b=0;
    int e=size-1;
    int f=0;
    while(b<=e)
    {
        int mid=b+(e-b)/2;
        if(v[mid]==target)
        {
            cout<<"Target Found at "<<mid<<endl;
            f=1;
            break;
        }
        else if(v[mid]>target)
        e=mid-1;
        else
        b=mid+1;
    }
    if(f==0)
    cout<<"Correct Postiton "<<b;
}