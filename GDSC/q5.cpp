#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public: 
    int immediateSmaller(int arr[], int n, int x)
    {
        int smaller=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<x)
            {
                if((x-arr[i])<(x-smaller))
                {
                    smaller=arr[i];
                }
            }
        } 
        return smaller;  
    }
};
int main() 
{
	
	
	        int n;
        	cin >> n;
        	
        	int arr[n];
        	
        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}
        	
        	int x;
        	cin >> x;
        	Solution ob;
        	cout << ob.immediateSmaller(arr, n, x) << endl;
	
	
	return 0;
}