#include <bits/stdc++.h>
using namespace std;

// 2 <= N, M <= 100
int _n, _m;
int _ret;

vector<string> _vs_maze;

vector<vector<int>> _vvb_visited(101, vector<int>(101, 0));

int _dy[4] = {-1, 0, 1, 0};
int _dx[4] = {0, 1, 0, -1};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 두 정수 N과 M이 주어진다.
	cin >> _n >> _m;
	// I-2. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다.
	// 각각의 수들은 붙어서 입력으로 주어진다.
	string tmp;
	for(int i = 0; i < _n; ++i)
	{
		cin >> tmp;
		_vs_maze.push_back(tmp);
	}
	
	queue<pair<int, int>> q;
	q.push({0, 0});
	_vvb_visited[0][0] = 1;
	
	while(q.size())
	{
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		
		for(int i = 0; i < 4; ++i)
		{
			int nx = x + _dx[i];
			int ny = y + _dy[i];
			
			if(nx < 0 || ny < 0 || nx >= _m || ny >= _n)
			{
				continue;
			}
			if(_vvb_visited[ny][nx] != 0)
			{
				continue;
			}
			if(_vs_maze[ny][nx] == '0')
			{
				continue;
			}
			
			_vvb_visited[ny][nx] = _vvb_visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
	
	_ret = _vvb_visited[_n - 1][_m - 1];
	
	// O-1. 첫째 줄에 지나야 하는 최소의 칸 수를 출력한다.
	// 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다. 
	cout << _ret << '\n';
	
	return 0;
}