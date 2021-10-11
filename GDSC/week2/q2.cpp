#include<iostream>
#include<climits>
using namespace std;
int max_sum_of_subarrays(int ar[],int n)
{
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
        maxsum=max(maxsum,sum);
        if(sum<0)
        sum=0;
    }
    return maxsum;
}
int main()
{
    int ar[]={-1,-3,-4,-6};
    int n=sizeof(ar)/sizeof(n);
    int sum=max_sum_of_subarrays(ar,n);
    cout<<"Maximum Sum\t"<<sum<<endl;
    return 0;
}