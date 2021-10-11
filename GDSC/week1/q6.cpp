#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
    unordered_set<int> us;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int key=nums[i];
            if(us.find(key)==us.end())
            {
                ans.push_back(key);
                us.insert(key);
            }   
        }
        for(int i=0;i<ans.size();i++)
        {
            nums[i]=ans[i];
        }
        for(int i=ans.size();i<nums.size();i++)
        {
            nums[i]=-1;
        }
        return (ans.size());
    }
};
int main()
{
	
	
	int n;
    cin >> n;
    int ele;
    vector <int>nums;
    for(int i = 0;i<n;i++)
    {
     	cin >>ele;
         nums.push_back(ele);
    }
    Solution ob;
    int m=ob.removeDuplicates(nums);
    cout <<m<<endl;
    for(int i = 0;i<m;i++)
    {
     	cout<<nums[i]<<endl;
    }
    return 0;
}