#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin>>a>>b;
    if(a>b)
        printf("Argentina");
    else if(b>a)
        printf("Brazil");
    else
    {
        while(true)
        {
            string c,d;
            cin>>c>>d;
            a=0,b=0;
            for(int i=0; i<= 4; i++)
            {
                if(c[i]=='1')
                    a++;
            }
            for(int i=0; i<= 4; i++)
            {
                if(d[i]=='1')
                    b++;
            }
            if(a>b)
            {
                printf("Argentina");
                break;
            }
            else if(b>a)
            {
                printf("Brazil");
                break;
            }
        }
    }
    return 0;
}
