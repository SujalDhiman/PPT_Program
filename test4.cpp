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
    vector<int>ans;
    int carry=0;
    int sum=0;
    int inc=1;
    for(int i=size-1;i>=0;i--)
    {
        sum=carry+v[i]+inc;
        if(sum>9)
        {
            carry=sum/10;
            ans.push_back(sum%10);
        }
        else
        {
            carry=0;
            ans.push_back(sum);
        }
        inc=0;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}
