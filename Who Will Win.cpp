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
        printf("Draw");
    return 0;
}

