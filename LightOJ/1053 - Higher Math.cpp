#include <bits/stdc++.h>
 #define pi  2*acos(0.0)
 using namespace std;
 
 
int main() {
    int t,s[3];
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        for(int i=0; i<3;i++)
            cin >> s[i];
           
       
       sort(s, s+3, greater<int>());
       
       if((s[0] * s[0]) == (s[1] * s[1]) + (s[2] * s[2]))
            cout <<"Case "<<i<<": "<<"yes"<<endl;
       else
            cout <<"Case "<<i<<": "<<"no"<<endl;
    }
   
   
   
   
   
   
    return 0;
}
