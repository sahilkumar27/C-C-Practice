#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    int res=INT_MIN;
    int curr=INT_MAX;
    cin>>n>>m;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            res = max(res,arr[i][j]);
        }
    }


 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            curr = min(curr,arr[i][j]);
        }
    }

    cout<<"maximun element are : "<<res<<endl;
    cout<<"minimum element are : "<<curr<<endl;
   

    return 0;

    
    
}