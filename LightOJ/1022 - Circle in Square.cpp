#include <bits/stdc++.h>
 #define pi  2*acos(0.0)
 using namespace std;
 
 
int main() {
    int t;
    double r,s, c, ans;
    cin >> t;
   
    for(int i=1; i<=t;i++)
    {
       
       
        cin >> r;
       
        double ans = (4*r*r) - (pi*r*r) + 0.000000001;
       
       
       
       
        cout << "Case "<<i<<": "<<setprecision(2)<<fixed<<ans<<endl;
    }
   
 
   
   
    return 0;
}
