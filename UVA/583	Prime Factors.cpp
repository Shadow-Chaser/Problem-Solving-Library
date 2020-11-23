#include<bits/stdc++.h>
using namespace std;
#define Max 1000055
bool prime_check[Max+1];
vector <int> prime_list;
void sieve()
{
    memset(prime_check, true, sizeof(prime_check));
    int sq = sqrt(Max);
    for(int i=2; i*i<=Max; i++)
    {
        if(prime_check[i])
        {
            prime_list.push_back(i);
            for(int j=i*i; j<=Max; j+=i)
                prime_check[j] = false;
        }
    }
    for(int i=sq+1; i<=Max; i++)
    {
        if(prime_check[i])
            prime_list.push_back(i);
    }
}

vector <long long> prime_factors;

void factorize_prime(long long n)
{
    for(int i=0; i<prime_list.size();i++)
    {
        while(n % prime_list[i] == 0)
        {
            n /= prime_list[i];
            prime_factors.push_back(prime_list[i]);
        }
        if(n==1) break;
    }
    if(n>1)prime_factors.push_back(n);
}

int main()
{
    long long g;
    sieve();
    while(cin >> g && g!=0)
    {
        long long k = abs(g);
        factorize_prime(k);
        if(g<0)
        {
            cout <<g << " = ";
            cout << "-1 x ";
            for(int i=0; i<prime_factors.size()-1;i++)
                cout << prime_factors[i] << " x ";

            cout << prime_factors[prime_factors.size()-1] << "\n";
        }
        else
        {
            cout << g << " = ";
            for(int i=0; i<prime_factors.size()-1;i++)
                cout << prime_factors[i] << " x ";

            cout << prime_factors[prime_factors.size()-1] << "\n";
        }
        prime_factors.clear();
        //prime_list.clear();
    }

    return 0;
}
