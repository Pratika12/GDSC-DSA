#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> leader(int a[],int n)
{
        vector <int> ans;
        int mx=a[n-1];
        ans.push_back(mx);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=mx)
            {
                ans.push_back(a[i]);
                mx=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
int main()
{
    vector <int>ans;
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements\n";
    int ele;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ans=leader(a,n);
    if(ans.size()>0)
    {
        cout<<"Leaders of array are\n";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;  
    }
    else
    {
        cout<<"None of the elements ar leader\n";
    }
    return 0;
}