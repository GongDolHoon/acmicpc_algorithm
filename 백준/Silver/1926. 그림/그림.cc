#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 500
// 1 <= m <= 500
int _n, _m;
int _ret_num;
int _area;
int _ret_max_area;

const int _dy[] = {-1, 0, 1, 0};
const int _dx[] = {0, 1, 0, -1};

void dfs(int y, int x, vector<vector<int>>& map, vector<vector<bool>>& visited)
{
	_area++;
	visited[y][x] = true;
	
	for(int i = 0; i < 4; ++i)
	{
		int ny = y + _dy[i];
		int nx = x + _dx[i];
		
		if(ny < 0 || nx < 0 || ny >= _n || nx >= _m)
		{
			continue;
		}
		
		if(visited[ny][nx] == true || map[ny][nx] == 0)
		{
			continue;
		}
		
		dfs(ny, nx, map, visited);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 도화지의 세로 크기 n과 가로 크기 m이 차례로 주어진다. 
	cin >> _n >> _m;
	vector<vector<int>> vvi_map(_n, vector<int>(_m, -1));
	vector<vector<bool>> vvb_visited(_n, vector<bool>(_m, false));
	vector<pair<int, int>> vpii_pictures;
	// I-2. 두 번째 줄부터 n+1 줄까지 그림의 정보가 주어진다.
	// 0 = 색칠 안 된 부분
	// 1 = 색칠이 된 부분 
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> vvi_map[i][j];			
			if(vvi_map[i][j] == 1)
			{
				vpii_pictures.push_back({i, j});
			}
		}	
	} 
	
	for(int i = 0; i < vpii_pictures.size(); ++i)
	{
		pair<int, int> node = vpii_pictures[i];
		if(vvb_visited[node.first][node.second] == true)
		{
			continue;
		}
		_area = 0;	
		dfs(node.first, node.second, vvi_map, vvb_visited);
		
		_ret_num++;
		_ret_max_area = max(_area, _ret_max_area);
	}
	
	// O-1. 첫째 줄에는 그림의 개수, 
	cout << _ret_num << '\n';
	// O-2. 둘째 줄에는 그 중 가장 넓은 그림의 넓이를 출력하라.
	// 단, 그림이 하나도 없는 경우에 가장 넓은 그림의 넓이는 0이다. 
	cout << _ret_max_area << '\n';
	
	return 0;
}