#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 50
int _n, _m;
int _ret;

const int _dy[] = {-1, 0, 1, 0};
const int _dx[] = {0, 1, 0, -1}; 

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 보물 지도의 세로의 크기와 가로의 크기가 빈 칸을 사이에 두고 주어진다.
	cin >> _n >> _m;
	vector<string> vs_map(_n);
	vector<pair<int, int>> vii_land;
	// I-2. 이어 L과 W로 표시된 보물지도가 아래 예와 같이 주어지며,
	// 각 문자 사이에는 빈 칸이 없다. 
	// L = 육지, W = 바다 
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs_map[i];
		for(int j = 0; j < _m; ++j)
		{
			if(vs_map[i][j] == 'L')
			{
				vii_land.push_back({i, j});
			}
		}
	}
	
	vector<int> vi_rets(vii_land.size());
	vector<vector<int>> vvi_distance(_n, vector<int>(_m));
	vector<vector<bool>> vvb_visited(_n, vector<bool>(_m, false));
	
	int ret;
	for(int i = 0; i < vii_land.size(); ++i)
	{
		queue<pair<int, int>> qii;
		ret = 0;
		qii.push(vii_land[i]);
		for(int i = 0; i < _n; ++i)
		{
			fill(vvi_distance[i].begin(), vvi_distance[i].end(), 0);
			fill(vvb_visited[i].begin(), vvb_visited[i].end(), false);
		}
		
		while(qii.empty() == false)
		{
			pair<int, int> node = qii.front();
			vvb_visited[node.first][node.second] = true;
			qii.pop();
			
			for(int i = 0; i < 4; ++i)
			{
				int ny = node.first + _dy[i];
				int nx = node.second + _dx[i];
				
				if(ny < 0 || nx < 0 || ny >= _n || nx >= _m)
				{
					continue;
				}
				
				if(vvi_distance[ny][nx] > 0 || vs_map[ny][nx] == 'W')
				{
					continue;
				}
				
				if(vvb_visited[ny][nx] == true)
				{
					continue;
				}
				
				vvi_distance[ny][nx] = vvi_distance[node.first][node.second] + 1;
				qii.push({ny, nx});
			}
		}
		
		for(int i = 0; i < _n; ++i)
		{
			for(int j = 0; j < _m; ++j)
			{
				if(vvi_distance[i][j] > ret)
				{
					ret = vvi_distance[i][j];
				}
			}
		}
		vi_rets[i] = ret;
	}
	
	_ret = *max_element(vi_rets.begin(), vi_rets.end());
	// O-1. 첫째 줄에 보물이 묻혀 있는 두 곳 사이를 최단 거리로 이동하는 시간을 출력한다.
	cout << _ret << '\n'; 
	
	return 0;
}