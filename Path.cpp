#include<bits/stdc++.h>
using namespace std;
int T,n,a[200050],b[200050],ans[200050],dep[200050];
long long c[200050];
vector<int>v[200050];
void dfs(int x,int p,long long co)
{
	co+=a[x];
	dep[x]=dep[p]+1;
	c[dep[x]]=c[dep[x]-1]+b[x];
	for(int i=0;i<v[x].size();i++)dfs(v[x][i],x,co);
	ans[x]=upper_bound(c+1,c+dep[x]+1,co)-c-2;
}
int main()
{
	cin>>T;
	while(T--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)v[i].clear();
		for(int i=2;i<=n;i++)
		{
			int x;
			scanf("%d%d%d",&x,&a[i],&b[i]);
			v[x].push_back(i);
		}
		dfs(1,0,0);
		printf("%d",ans[2]);
		for(int i=3;i<=n;i++)printf(" %d",ans[i]);
		printf("\n");
	}
}
