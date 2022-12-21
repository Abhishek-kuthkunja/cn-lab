#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,source,min=999,u;
    cout<<"enter the number of nodes";
    cin>>n;
    int cost[n+1][n+1];
    cout<<"entre the cost matrix";
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            cin>>cost[i][j];
        }
    }
    cout<<"enter the source node";
    cin>>source;
    int visited[n+1];
    for(int i=1;i<n+1;i++)
    {
        visited[i]=0;
    }
    visited[source]=1;
    int distance[n+1];
    for(int i=1;i<n+1;i++)
    {
        distance[i]=cost[source][i];
    }
    distance[source]=0;

    for(int i=2;i<n+1;i++)
    {
        min=999;
        for(int j=1;j<n+1;j++)
        {
            if(!visited[j])
            {
                if(distance[j]<min)
                {
                    min=distance[j];
                    u=j;
                }
            }
        }
        visited[u]=1;

    for(int w=1;w<n+1;w++)
    {
        if(cost[u][w]!=999 && !visited[w])
        {
            if(distance[w]>distance[u]+cost[u][w])
            {
                distance[w]=distance[u]+cost[u][w];
            }
        }
    }
    }
    for(int i=1;i<=n;i++)
		if(i!=source)
		printf("\nshortest path from %d to %d is %d",source,i,distance[i]);

}