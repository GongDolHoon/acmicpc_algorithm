#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 50
int _n;
int _d;
int _ret;
int _root;

vector<int> _vi_adj[51];

void ImplementDFS(int node)
{	
	if(_vi_adj[node].size() == 0)
	{
		_ret++;
		return;
	}
	
	for(int i = 0; i < _vi_adj[node].size(); ++i)
	{
		ImplementDFS(_vi_adj[node][i]);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 트리의 노드의 개수 N이 주어진다. 
	cin >> _n;
	
	// I-2. 둘째 줄에는 0번 노드부터 N-1번 노드까지 각 노드의 부모가 주어진다.
	// 부모가 없다면 (루트)-1이 주어진다. 
	int tmp;
	for(int i = 0; i < _n; ++i)
	{
		cin >> tmp;
		if(tmp == -1)
		{
			_root = i;
		}
		else
		{
			_vi_adj[tmp].push_back(i);	
		}
	}
	 
	// I-3. 셋째 줄에는 지울 노드의 번호가 주어진다. 
	cin >> _d;
	if(_d == _root)
	{
		cout << "0\n";
		return 0;
	}
	
	// S-1. 노드를 트리에서 지운다.
	for(int i = 0; i < 51; ++i)
	{
		for(int j = 0; j < _vi_adj[i].size(); ++j)
		{
			if(_vi_adj[i][j] == _d)
			{
				_vi_adj[i].erase(_vi_adj[i].begin() + j);
			}
		}
	}
	
	_vi_adj[_d].clear();
	
	// S-2. DFS 알고리듬을 통해 리프 노드를 추가한다. 
	ImplementDFS(_root);
	
	// O-1. 첫째 줄에 입력으로 주어진 트리에서 입력으로 주어진 노드를 지웠을 때,
	// 리프 노드의 개수를 출력한다.
	cout << _ret << '\n'; 
	
	return 0;
}