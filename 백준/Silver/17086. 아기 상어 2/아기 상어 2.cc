#include <bits/stdc++.h>
using namespace std;


// 2 <= N, M <= 50
int _n, _m;
int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 공간의 크기 N과 M이 주어진다.
	cin >> _n >> _m; 
	
	// I-2. 둘째 줄부터 N개의 줄에 공간의 상태가 주어지며,
	// 0 = 빈 칸, 1 = 아기 상어가 있는 칸
	vector<vector<int>> vvi_map(_n, vector<int>(_m));
	vector<vector<int>> vvi_ret(_n, vector<int>(_m, -1));
	queue<pair<int, int>> qii;
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> vvi_map[i][j];
			if(vvi_map[i][j] == 1)
			{
				vvi_ret[i][j] = 0;
				qii.push({i, j});
			}
		}
	} 

	int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
	int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};

	while(qii.empty() == false)
	{
		pair<int, int> node = qii.front();
		qii.pop();
		
		for(int i = 0; i < 8; ++i)
		{
			int nx = node.second + dx[i];
			int ny = node.first + dy[i];
			
			if(nx < 0 || ny < 0 || nx >= _m || ny >= _n)
			{
				continue;
			}
			
			if(vvi_map[ny][nx] == 1 || vvi_ret[ny][nx] > 0)
			{
				continue;
			}
			
			vvi_ret[ny][nx] = vvi_ret[node.first][node.second] + 1;
			qii.push({ny, nx});
		}
	}
	
	int max = -2;
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			if(max < vvi_ret[i][j])
			{
				max = vvi_ret[i][j];
			}
		}
	}
	
	_ret = max;
	 
	// O-1. 첫째 줄에 안전 거리의 최댓값을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}