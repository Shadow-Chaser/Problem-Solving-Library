/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector <long long> vll;
typedef pair<int, int> pii;
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro Start-*-*-*-*-*-*-*--*-*-*-*-*/
#define Faster_IO              ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F                      first
#define S                      second
#define pb                     push_back
#define MP                     make_pair
#define sf                     scanf
#define pf                     printf
#define PI                     (2*acos(0))
#define to_radian(degree)      ((pi/180)*degree)
#define to_degree(radian)      ((180/pi)*radian)
#define SQ(a)                  (a)*(a)
#define SORT(x)                sort(x.begin(),x.end())
#define rSORT(x)               sort(x.rbegin(),x.rend())
#define SetPrint(a,x)          cout<<fixed<<setprecision(x)<<a<<endl
#define show(vec)              for (int i=0; i<vec.size(); i++)cout << vec[i] << " ";
#define lines                  cout <<"\n" <<"---------------" << "\n";
#define YES                    printf("YES\n")
#define NO                     printf("NO\n")
#define Yes                    printf("Yes\n")
#define No                     printf("No\n")
#define tc(t)                  int t; cin >> t; while(t--)
#define lcm(a,b)               ((a / __gcd(a,b) ) * b)
#define gcd(a,b)               __gcd(a,b)
#define all(vec)               vec.begin(), vec.end()
#define SUM(vec)               accumulate(vec.begin(), vec.end(), 0)
#define gcin(str)              getline(cin, str)
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro END-*-*-*-*-*-*-*--*-*-*-*-*/

///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Moves Start-*-*-*-*-*-*--*-*-*-*-*/
//const int  fx[]={+1,-1,+0,+0};  //Four Side
//const int  fy[]={+0,+0,+1,-1};  //Four Side

//const int   fx[]={+0,+0,+1,-1,-1,+1,-1,+1};  //Eight Side
//const int   fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  //Eight Side

//const int   fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int   fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

//const int   fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int   fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Moves End-*-*-*-*-*-*--*-*-*-*-*/

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
	Faster_IO
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	ll x, y, n, z;
	tc(t)
	{
		cin >> x >> y >> n;
		cout << moduexp(x, y, n) << "\n";
	}




	return 0;
}