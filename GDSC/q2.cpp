#include<iostream>
#include<unordered_map>
using namespace std;
int firstRepeated(int *arr, int n) 
{
    unordered_map  <int,int> um; 
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        if(um.find(key)!=um.end())
        {
            auto temp=um.find(key);
            return temp->second;
        }
        else
        {
            um.insert(make_pair(arr[i],i));
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans=firstRepeated(arr,n);
    cout<<"Index of First repeated elements is "<<ans<<endl;
    return 0;
}