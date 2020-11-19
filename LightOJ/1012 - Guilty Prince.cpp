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
const int  fx[] = { +1, -1, +0, +0}; //Four Side
const int  fy[] = { +0, +0, +1, -1}; //Four Side

//const int   fx[]={+0,+0,+1,-1,-1,+1,-1,+1};  //Eight Side
//const int   fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  //Eight Side

//const int   fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int   fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

//const int   fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int   fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Moves End-*-*-*-*-*-*--*-*-*-*-*/

const int mx = 25;
int col, row, u, v, cnt;
bool vis[mx][mx];
char g[mx][mx];

bool valid(int x, int y)
{
	if (x >= 0 && x < row && y >= 0 && y < col && g[x][y] == '.' && vis[x][y] == false )
	{
		return true;
	}

	return false;
}

void dfs(int u, int v)
{
	vis[u][v] = true;
	cnt++;
	for (int i = 0; i < 4; i++)
	{
		int uu = u + fx[i];
		int vv = v + fy[i];
		if (valid(uu, vv))
		{
			dfs(uu, vv);
		}
	}
}



int main()
{
	Faster_IO
#ifndef ONLINE_JUDGE
	freopen("Input.txt", "r", stdin);
	freopen("Output.txt", "w", stdout);
#endif

	int t; cin >> t;
	for (int k = 1; k <= t; k++)
	{
		cin >> col >> row;
		for (int i = 0; i < row ; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> g[i][j];
				if (g[i][j] == '@')
					u = i, v = j;

			}
		}
		cnt = 0;
		dfs(u, v);
		cout << "Case " << k << ": " << cnt << "\n";

		memset(vis, 0, sizeof(vis));


	}



	return 0;
}