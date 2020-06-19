#include<bits/stdc++.h>

typedef long long ll;
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro Start-*-*-*-*-*-*-*--*-*-*-*-*/

#define Faster_IO              ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F                      first
#define S                      second
#define pb                     push_back
#define MP                     make_pair
#define sf                     scanf
#define pf                     printf
#define pi                     (2*acos(0))
#define to_radian(degree)      ((pi/180)*degree)
#define to_degree(radian)      ((180/pi)*radian)
#define SQ(a)                  (a)*(a)
#define SORT(x)                sort(x.begin(),x.end())
#define SetPrint(a,x)          cout<<fixed<<setprecision(x)<<a<<endl
#define show(vec)              for(ll i=0; i<vec.size(); i++)cout << vec[i] << " ";
#define YES                    printf("YES\n")
#define NO                     printf("NO\n")
#define Yes                    printf("Yes\n")
#define No                     printf("No\n")
#define tc(n)                  int n; cin >> n; while(n--)
#define lcm(a,b)               ((a / __gcd(a,b) ) * b)
#define gcd(a,b)               __gcd(a,b)
#define all(vec)               vec.begin(), vec.end()
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro END-*-*-*-*-*-*-*--*-*-*-*-*/

///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Template Start-*-*-*-*-*-*--*-*-*-*-*/

//template <class T> T isPrime(T n){if(n<=1)return 0;for(long long i=2;i*i<=n; i++)if(n%i==0)return 0;return 1;}
//template <class T> T bigmod(T X, T n, T M) {if (n==0) return 1;if (n%2) return ((X%M) * bigmod(X,n-1,M)) %M;else {long long int d = bigmod(X,n/2, M);return ((d%M) * (d%M))%M;}}

///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Template END-*-*-*-*-*-*-*--*-*-*-*-*/
using namespace std;

int main()
{
    Faster_IO
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif


    int n , x;

    cin >> n >> x;
    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        if((x%i)==0 and (x/i)<=n)
            cnt++;
    }

    cout <<cnt <<"\n";


   return 0;
}

