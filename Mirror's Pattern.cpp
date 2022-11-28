#include<bits/stdc++.h>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    if(n==1)
    {
        printf("%d\n",n);
        return 0;
    }
    for (int i=1; i<=n; i++)
        printf("%d",i);

    printf("\n");
    for (int i=2,j=n-1; i<n; i++,j--)
    {
        printf("%d",i);
        for(int k=1; k<n-1; k++)
            printf(" ");
        printf("%d\n",j);

    }
    for (int i=n; i>=1; i--)
        printf("%d",i);
    return 0;
}
