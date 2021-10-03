#include<iostream>
#include<vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) 
{
    vector <int> index;
    unordered_map <int,int> um;  //key,index
    int n=nums.size();
    int key;
    for(int i=0;i<n;i++)
    {
        key=target-nums[i];
        if(um.find(key)!=um.end())
        {
            index.push_back(i);
            index.push_back(um[key]);
            for(int i=0;i<2;i++)
            index[i];
            return index;
        }
        else
        {
            um[nums[i]]=i;
        }
    }
    return index;   
}
int main()
{
    vector <int> nums,ans;
    int n,val,target;
    cout<<"Enter the size of vector\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    cout<<"Enter the target sum\n";
    cin>>target;
    ans=twoSum(nums,target);
    if(ans.size()==2)
    {
        cout<<"sum = target when we add elements at index "<<ans[0]<<" "<<ans[1]<<endl;
    }
    else
    {
    cout<<"None of the elements have sum equal to target"<<endl;
    }
    return 0;
}