#include<bits/stdc++.h>
using namespace std;
 
long long reverse(long long num)
{
    long long reversed = 0;
    while(num)
    {
        reversed = reversed*10+num%10;
        num = num/10;
    }
    return reversed;
}
int main()
{
    long long t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << reverse(reverse(a) + reverse(b)) << "\n";
    }
 
 
    return 0;
}
