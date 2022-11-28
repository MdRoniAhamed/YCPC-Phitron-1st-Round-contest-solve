
#include<bits/stdc++.h>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin>>a>>b;
    if(a>b)
    {
        printf("%d\n",a-b);
    }
    else
    {
        printf("%d\n",b-a);
    }
    return 0;
}
