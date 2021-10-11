#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int sum1=0,sum2=0;
        int i=0;
        for(int i=0;i<n;i++)
        {
            sum2+=nums[i];    
        }
        for(int i=0;i<n;i++)
        {
            sum2=sum2-nums[i];
            if(sum1==sum2)
            {
                return i;
            }
            else
            {
                sum1+=nums[i];   
            }
        }
        return -1;    
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
    int m=ob.pivotIndex(nums);
    cout<<m<<endl;
    return 0;
}