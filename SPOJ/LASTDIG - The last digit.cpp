#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

long long moduexp(long long a, long long n, long long p)
{
	long long res = 1;
	while (n)
	{
		if (n % 2)
			res = (res * a) % p , n--;
		else
			a = (a * a) % p, n /= 2;
	}

	return res;
}

int main()
{
	ll t, a, b, p;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		p = 10;
		cout << moduexp(a, b, p) << "\n";

	}

	return 0;
}