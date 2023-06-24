// Q1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

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
    int i=0;
    int j=v.size()-1;
    int target;
    cin>>target;
    while(i<j)
    {
        if(v[i]+v[j]>target)
        j--;
        else if(v[i]+v[j]<target)
        i++;
        else
        {
            cout<<"Target Found"<<endl;
            cout<<"Location is "<<i<<" "<<j<<endl;
            cout<<v[i]<<" "<<v[j]<<endl;
            break;
        }
        cout<<"Bye"<<endl;
    }
}
