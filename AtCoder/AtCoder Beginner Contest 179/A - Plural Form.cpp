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

int main()
{
	Faster_IO
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif


	string s;
	cin >> s;
	if (s[s.size() - 1] == 's')
		s += "es";
	else
		s += "s";

	cout << s << "\n";



	return 0;

}
