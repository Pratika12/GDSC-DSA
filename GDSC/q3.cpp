#include<iostream>
#include<vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) 
{
    vector<int> ans(2,-1);
    int n=nums.size();
    int flag=0,mx=-1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
            if(flag==0)
            {
                ans[0]=i;
                flag=1;
            }
            mx=i;
        }
    }
    ans[1]=mx;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector <int> nums,ans;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    int target;
    cin>>target;
    ans=searchRange(nums,target); 
    for(int i=0;i<2;i++)
    {
        cout<<ans[i];
    }
    return 0;
}