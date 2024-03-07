#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000
// 1 <= M <= 10,000
int _n, _m, _v;

bool cmp(const int a, const int b)
{
	return a < b;
}

void dfs(int node, vector<bool>& visited, vector<vector<int>>& adj)
{
	cout << node << ' ';
	visited[node] = true;
	
	for(int i = 0; i < adj[node].size(); ++i)
	{
		int dest = adj[node][i];
		if(visited[dest] == true)
		{
			continue;
		}
		
		dfs(dest, visited, adj);
	}
}

void bfs(int node, vector<bool>& visited, vector<vector<int>>& adj)
{
	queue<int> qi;
	qi.push(node);
	visited[node] = true;
	while(qi.empty() == false)
	{
		int cur = qi.front();
		qi.pop();
		cout << cur << ' ';
		for(int i = 0; i < adj[cur].size(); ++i)
		{
			int dest = adj[cur][i];
			if(visited[dest] == true)
			{
				continue;
			}
			
			qi.push(dest);
			visited[dest] = true;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정점의 개수 N, 간선의 개수 M, 탐색을 시작할 정점의 번호 V가 주어진다. 
	cin >> _n >> _m >> _v;
	vector<bool> vb_visited(_n + 1, false);
	vector<vector<int>> vvi_adj(_n + 1);
	// I-2. 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다.
	// 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 
	// 입력으로 주어지는 간선은 양방향이다.  
	int a, b;
	for(int i = 0; i < _m; ++i)
	{
		cin >> a >> b;
		vvi_adj[a].push_back(b);
		vvi_adj[b].push_back(a);
	} 
	
	// O-1. 첫째 줄에 DFS를 수행한 결과,
	for(int i = 0; i < vvi_adj.size(); ++i)
	{
		sort(vvi_adj[i].begin(), vvi_adj[i].end(), cmp);	
	}
	
	dfs(_v, vb_visited, vvi_adj);
	
	fill(vb_visited.begin(), vb_visited.end(), false);
	cout << '\n';
	// O-2. 그 다음 줄에는 BFS를 수행한 결과를 출력한다. 
	// V부터 방문된 점을 순서대로 출력하면 된다.  
	bfs(_v, vb_visited, vvi_adj);
	
	return 0;
}