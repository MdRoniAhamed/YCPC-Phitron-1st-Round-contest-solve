#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        int test;
        scanf("%d",&test);
        int count = 0;
        if(test == 0)
            printf("1\n");
        else
        {
            for(int i=0; test> count; i++ )
            {
                count = pow(2,i);
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
