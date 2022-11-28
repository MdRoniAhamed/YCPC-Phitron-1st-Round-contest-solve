#include<bits/stdc++.h>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    while(cin>>s)
    {
        string st = string(s.rbegin(),s.rend());
        int len = s.length();
        int count = 0;
        for (int i=0; i<len; i++)
        {
            if(st[i]!=s[i])
                count ++;
        }

        printf("%d\n",count/2);

    }
    return 0;

}
