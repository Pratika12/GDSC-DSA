#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    scanf("%d",&A[i]);
    while(t--)
    {
        for(int i=0;i<n/2;i++)
        {
            int temp=A[i];
            A[i]=A[n-i-1];
            A[n-i-1]=temp;
        }
    }
    for(int i=0;i<n;i++)
    printf("%d ",A[i]);
	return 0;
}