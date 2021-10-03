#include<iostream>
#include<vector>
using namespace std;
bool isMonotonic(vector<int>& nums) 
{
    int n=nums.size();
    int mx=nums[0],min=nums[0];
    int flag;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]>nums[i+1])
        {
            flag=0;
            break;
        }
        else if(nums[i]<nums[i+1])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1])
            {
                return 0;
            }
        }
    }
    else 
    {
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return 0;
            }
        }   
    }
    return 1;
}
int main()
{
    vector <int> nums;
    int n,val,target;
    cout<<"Enter the size of vector\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    bool b=isMonotonic(nums);
    if(b==1)
    cout<<"TRUE"<<endl;
    else
    cout<<"FALSE"<<endl;
    return 0;
}