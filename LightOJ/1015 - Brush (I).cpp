#include <bits/stdc++.h>
 using namespace std;
 
int main() {
    int t, n, d;
    cin >> t;
   
    for(int i=1; i<=t; i++)
    {
        cin >> n;
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            cin >> d;
            if(d>0)
                ans+=d;
        }
         
       cout << "Case "<<i<<": "<<ans<<endl;
    }
   
   
   
   
   
   
   
    return 0;
}
