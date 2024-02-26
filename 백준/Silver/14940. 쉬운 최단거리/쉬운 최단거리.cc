#include <bits/stdc++.h>
using namespace std;

// 2 <= n, m <= 1000
// n = 세로의 크기
// m = 가로의 크기 
int _n, _m;

vector<vector<int>> _vvi_map(1000, vector<int>(1000, 0));
vector<vector<bool>> _vvi_visited(1000, vector<bool>(1000, false));
pair<int, int> _dest;

int _dx[] = {0, 1, 0, -1};
int _dy[] = {-1, 0, 1, 0}; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 지도의 크기 n과 m이 주어진다.
	cin >> _n >> _m; 
	// I-2. 다음 n개의 줄에 m개의 숫자가 주어진다.
	// 0 = 갈 수 없는 땅
	// 1 = 갈 수 있는 땅
	// 2 = 목표 지점 
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> _vvi_map[i][j];
			if(_vvi_map[i][j] == 2)
			{
				_dest = {i, j};
			}
		}
	} 
	
	vector<vector<int>> vvi_ret(_n, vector<int>(_m, -1));
	queue<pair<int, int>> qii_node;
	qii_node.push(_dest);
	_vvi_visited[_dest.first][_dest.second] = true;
	vvi_ret[_dest.first][_dest.second] = 0;
	while(qii_node.empty() == false)
	{
		pair<int, int> pos = qii_node.front();
		qii_node.pop();
		for(int i = 0; i < 4; ++i)
		{
			int ny = pos.first + _dy[i];
			int nx = pos.second + _dx[i];
			
			if(ny < 0 || nx < 0 || ny >= _n || nx >= _m ||
				_vvi_visited[ny][nx] == true ||
				_vvi_map[ny][nx] == 0)
			{
					continue;
			}
			
			vvi_ret[ny][nx] = vvi_ret[pos.first][pos.second] + 1;
			_vvi_visited[ny][nx] = true;
			qii_node.push({ny, nx});
		}
	}
	
	// O-1. 각 지점에서 목표지점까지의 거리를 출력한다.
	// 원래 갈 수 없는 땅의 위치는 0을 출력,
	// 원래 갈 수 있는 땅인 부분 중 도달할 수 없는 위치는 -1을 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			if(vvi_ret[i][j] == -1)
			{
				if(_vvi_map[i][j] == 0)
				{
					cout << "0 ";
				}
				else
				{
					cout << "-1 ";
				}
			}
			else
			{
				cout << vvi_ret[i][j] << ' ';
			}
		}
		cout << '\n';
	}
	
	return 0;
}