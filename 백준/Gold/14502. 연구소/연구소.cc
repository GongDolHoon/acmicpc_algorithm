#include <bits/stdc++.h>
using namespace std;

// 3 <= N, M <= 8
int _n, _m; 
int _ret;

int _dy[4] = {-1, 0, 1, 0};
int _dx[4] = {0, 1, 0, -1};

vector<vector<int>> _vvi_original_area(9, vector<int>(9, 1));
vector<vector<int>> _vvi_temp_area(9, vector<int>(9, 1));
vector<vector<bool>> _vvb_visited(9, vector<bool>(9, false));

vector<int> _vi_safe_areas;

vector<pair<int, int>> _vii_empty_space;
vector<pair<int, int>> _vii_virus_space;

void dfs(int y, int x)
{
	_vvb_visited[y][x] = true;
	
	for(int i = 0; i < 4; ++i)
	{
		int ny = y + _dy[i];
		int nx = x + _dx[i];
		
		if(ny < 0 || nx < 0 || ny >= _n || nx >= _m)
		{
			continue;
		}
		
		if(_vvb_visited[ny][nx] == false && _vvi_temp_area[ny][nx] == 0)
		{
			_vvi_temp_area[ny][nx] = 2;
			dfs(ny, nx);
		}
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 지도의 세로 크기 N과 가로 크기 M이 주어진다.
	cin >> _n >> _m;
		
	// I-2. 둘째 줄부터 N개의 줄에 지도의 모양이 주어진다. 
	// 0은 빈 칸, 1은 벽, 2는 바이러스가 있는 위치이다.
	// 2의 개수는 2보다 크거나 같고, 10보다 작거나 같은 자연수이다.
	// 빈 칸의 개수는 3개 이상이다.
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> _vvi_original_area[i][j];
			
			if(_vvi_original_area[i][j] == 0)
			{
				_vii_empty_space.push_back({i, j});
			}
			
			if(_vvi_original_area[i][j] == 2)
			{
				_vii_virus_space.push_back({i, j});
			}
		}
	}
	
	// S-1. 브루트 포스 - 무작위로 3 칸에 1을 배치함
	for(int i = 0; i < _vii_empty_space.size() - 2; ++i)
	{
		for(int j = i + 1; j < _vii_empty_space.size() - 1; ++j)
		{
			for(int k = j + 1; k < _vii_empty_space.size(); ++k)
			{
				int safe_area = 0;
				
				for(int l = 0; l < _n; ++l)
				{
					for(int m = 0; m < _m; ++m)
					{
						_vvi_temp_area[l][m] = _vvi_original_area[l][m];
						_vvb_visited[l][m] = false;
					}
				}
				
				_vvi_temp_area[_vii_empty_space[i].first][_vii_empty_space[i].second] = 1;
				_vvi_temp_area[_vii_empty_space[j].first][_vii_empty_space[j].second] = 1;
				_vvi_temp_area[_vii_empty_space[k].first][_vii_empty_space[k].second] = 1;
				
				// S-2. DFS 알고리듬을 통해 바이러스를 퍼트림
				for(int l = 0; l < _vii_virus_space.size(); ++l)
				{
					dfs(_vii_virus_space[l].first, _vii_virus_space[l].second);
				}
				
				// S-3. 카운팅 후 컨테이너에 추가 
				for(int l = 0; l < _n; ++l)
				{
					for(int m = 0; m < _m; ++m)
					{
						if(_vvi_temp_area[l][m] == 0)
						{
							safe_area++;
						}
					}
				}
				
				_vi_safe_areas.push_back(safe_area);
			}
		}
	}
	
	_ret = *max_element(_vi_safe_areas.begin(), _vi_safe_areas.end());
	
	// O-1. 첫째 줄에 얻을 수 있는 안전 영역의 최대 크기를 출력한다. 
	cout << _ret << '\n';
		
	return 0;
}