#include <iostream>
#include<algorithm>
using namespace std;
void rotate(int ar[],int n,int d)
{
    if(d<=n)
    {
        reverse(ar,ar+d);
        reverse(ar+d,ar+n);
        reverse(ar,ar+n);
    }
    else
    {
        d=d%n;
        reverse(ar,ar+d);
        reverse(ar+d,ar+n);
        reverse(ar,ar+n);
    }
}
int main()
{
    int ar[]={1,2,3,4,5};
    int d;
    int n=sizeof(ar)/sizeof(int);
    cout<<"Enter the number of rotations"<<endl;
    cin>>d;
    rotate(ar,n,d);
    for(int i:ar)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}