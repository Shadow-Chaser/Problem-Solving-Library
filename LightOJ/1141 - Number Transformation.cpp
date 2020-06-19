#include<bits/stdc++.h>
using namespace std;
int prime[1001];
int c=0;
int cost[1001];
int visited[1001];
void seive(int i)
{
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0)
            prime[i]=1;
    }
}
 
void BFS(int n,int m)
{
 
    int j;
    queue < int > q;
    q.push(n);
    cost[n]=0;
    visited[n]=1;
 
    while(!q.empty())
    {
        int x;
        x=q.front();
        if(x==m)
            c=1;
        q.pop();
        for(j=2;j<=(x/2);j++)
        {
            if(x%j==0)
            {
                if(prime[j]==0)
                {
                    if((x+j)<=m && !visited[x+j])
                    {
                        q.push(x+j);
                        cost[x+j]=cost[x]+1;
                        visited[x+j]=1;
                    }
                }
            }
        }
    }
 
}
int main()
{
    int i,t;
    for(i=2;i<=1000;i++)
    {
        seive(i);
    }
 
    cin >> t;
    for(i=1;i<=t;i++)
    {
        c=0;
        int n,m,ans,cou=0;
        cin >> n >> m;
 
        BFS(n,m);
 
 
        if(c==1)
        {
            cout << "Case " << i << ": " << cost[m] << endl;
        }
 
        else
            cout << "Case " << i << ": " << -1 << endl;
 
 
 
    }
 
 
    return 0;
}