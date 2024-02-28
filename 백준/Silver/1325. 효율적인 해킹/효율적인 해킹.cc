#include <bits/stdc++.h>
using namespace std;

// N < 10,000
// M < 100,000
int _n, _m;
int _a, _b;

int dfs(int node, vector<bool>& visited, vector<vector<int>>& adj)
{
	visited[node] = true;
	int ret = 1;
	
	for(int i = 0; i < adj[node].size(); ++i)
	{
		if(visited[adj[node][i]] == true)
		{
			continue;
		}
		
		ret += dfs(adj[node][i], visited, adj);
	}
	
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N과 M이 들어온다.
	cin >> _n >> _m; 
	
	vector<vector<int>> vvi_adj(_n + 1);
	vector<int> vi_ret(_n + 1);
	
	// I-2. 둘째 줄부터 M개의 줄에 신뢰하는 관계가 A B와 같은 형식으로 들어온다.
	for(int i = 0; i < _m; ++i)
	{
		cin >> _a >> _b;
		
		vvi_adj[_b].push_back(_a);
	} 
	
	vector<bool> vb_visited(_n + 1, false);
	
	for(int i = 1; i <= _n; ++i)
	{
		fill(vb_visited.begin(), vb_visited.end(), false);
		vi_ret[i] = dfs(i, vb_visited, vvi_adj);
	}
	
	int max = *max_element(vi_ret.begin(), vi_ret.end());
	// O-1 첫째 줄에, 김지민이 한 번에 가장 많은 컴퓨터를 해킹할 수 있는 컴퓨터의
	// 번호를 오름차순으로 출력한다. 
	for(int i = 1; i <= _n; ++i)
	{
		if(max == vi_ret[i])
	    {
		  cout << i << ' ';
		}
	}
	cout << '\n';
	
	return 0;
}