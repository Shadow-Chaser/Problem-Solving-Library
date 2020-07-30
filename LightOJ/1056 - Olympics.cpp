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
#define MAX(a,b)               (a>b? a:b)
#define MIN(a,b)               (a<b? a:b)
#define circle_area(r)         (pi*r*r)
#define triangle_area(b,h)     (0.5*b*h)
#define trapezium_area(a,b,h)  (0.5(a+b)*h)
#define ellipse_area(a,b)      (pi*a*b)
#define sector_area(r,angle)   (0.5*r*r*angle)
#define to_radian(degree)      ((pi/180)*degree)
#define to_degree(radian)      ((180/pi)*radian)
#define sqr(a)                 ((a)*(a))
#define SORT(x)                sort(x.begin(),x.end())
#define SetPrint(a,x)          cout<<fixed<<setprecision(x)<<a<<endl
#define READ(x)                freopen(x,"r",stdin)
#define show(vec)              for (auto it = vec.begin(); it != vec.end(); it++)cout << *it << " ";
#define YES                    printf("YES\n")
#define NO                     printf("NO\n")
#define Yes                    printf("Yes\n")
#define No                     printf("No\n")
 
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro END-*-*-*-*-*-*-*--*-*-*-*-*/
 
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Template Start-*-*-*-*-*-*--*-*-*-*-*/
 
//template <class T> T isPrime(T n){if(n<=1)return 0;for(long long i=2;i*i<=n; i++)if(n%i==0)return 0;return 1;}
//template <class T> T bigmod(T X, T n, T M) {if (n==0) return 1;if (n%2) return ((X%M) * bigmod(X,n-1,M)) %M;else {long long int d = bigmod(X,n/2, M);return ((d%M) * (d%M))%M;}}
 
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Template END-*-*-*-*-*-*-*--*-*-*-*-*/
 
using namespace std;
 
int main()
{
    Faster_IO
 
    int tc;
    cin >> tc;
 
    for(int i=1; i<=tc ;i++)
    {
        char ch = ':';
        double a, b, diag,r, val, angle ,s, aans, bans, x;
        cin >> a >> ch >> b;
 
        diag = sqrt(sqr(a) + sqr(b));
        r = diag/2.0;
        val = (sqr(r) + sqr(r) -  sqr(b))/(2.0*sqr(r));
        angle =  acos(val);
        s = r*angle*1.00000;
 
        x =  400.0/(2.0*a + 2.0*s);
        aans = a*x*1.000;
        bans = b*x*1.000;
        cout << "Case " << i << ": " <<fixed<<setprecision(8)<<aans << fixed<<setprecision(8)<< " " << bans<< endl;
 
    }
 
 
 
 
 
    return 0;
}
