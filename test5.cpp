#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int n; // size of array1
   int m; // size of array2
   cin>>n;
   cin>>m;
   int a1[n];
   for(int i=0;i<n;i++)
   {
      cin>>a1[i];
   }
   int b1[m];
   for(int i=0;i<m;i++)
   {
      cin>>b1[i];
   }
   int i=0;int j=0;
   while(j<m)
   {
       if(a1[i]<=b1[j] && a1[i]!=0)
       i++;
       else if(a1[i]==0)
       {
          a1[i]=b1[j];
          i++;
          j++;
       }
       else
       {
          int last=a1[n-1];
          for(int k=n-1;k>i;k--)
          a1[k]=a1[k-1];
          a1[i]=last;
          a1[i]=b1[j];
          i++;
          j++;
       }
   }
   for(int i=0;i<n;i++)
   cout<<a1[i]<<" ";
}

   