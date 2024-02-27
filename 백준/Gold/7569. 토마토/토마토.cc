#include <bits/stdc++.h>
using namespace std;

// M = 상자의 가로 칸의 수 
// N = 상자의 세로 칸의 수
// H = 상자의 높이 수
// 2 <= M, N <= 100
// 1 <= H <= 100 
int _m, _n, _h;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// 첫 줄에는 상자의 크기를 나타내는 두 정수 M, N과 쌓아올려지는 상자의 수를 나타내는 H가 주어진다.
	cin >> _m >> _n >> _h; 
	vector<vector<int>> vvi_tomato(_n * _h, vector<int>(_m, -1));
	vector<vector<int>> vvi_ret(_n * _h, vector<int>(_m, -1));
	vector<pair<int, int>> vii_already;
	// 둘째 줄부터는 가장 밑의 상자부터 가장 위의 상자까지에 저장된 토마토들의 정보가 주어진다.
	// 1 = 익은 토마토
	// 0 = 익지 않은 토마토
	// -1 = 토마토가 들어있지 않음 
	for(int i = 0; i < _n * _h; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> vvi_tomato[i][j];
			if(vvi_tomato[i][j] == 1)
			{
				vii_already.push_back({i, j});
			}
		}
	} 
	
	queue<pair<int, int>> qii;
	for(int i = 0; i < vii_already.size(); ++i)
	{
		qii.push(vii_already[i]);
		vvi_ret[vii_already[i].first][vii_already[i].second] = 0;
	}
	
	int dy[] = {-1, 0, 1, 0, -_n, _n};
	int dx[] = {0, 1, 0, -1, 0, 0};
	
	while(qii.empty() == false)
	{
		pair<int, int> pos = qii.front();
		qii.pop();
		
		for(int i = 0; i < 6; ++i)
		{	
			if(i == 0 && pos.first % _n == 0)
			{
				continue;
			}
			
			if(i == 2 && pos.first % _n == _n - 1)
			{
				continue;
			}
			
			int ny = pos.first + dy[i];
			int nx = pos.second + dx[i];
			
			if(ny < 0 || nx < 0 || ny >= _n * _h || nx >= _m
				|| vvi_tomato[ny][nx] != 0
				|| vvi_ret[ny][nx] != -1)
			{
				continue;		
			}
			
			qii.push({ny, nx});
			vvi_ret[ny][nx] = vvi_ret[pos.first][pos.second] + 1;
		}
	}
	
	int max = -1;
	bool trig = false;
	
	for(int i = 0; i < _n * _h; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			if(max < vvi_ret[i][j])
			{
				max = vvi_ret[i][j];
			}		
			
			if(vvi_ret[i][j] == -1 && vvi_tomato[i][j] == 0)
			{
				trig = true;
			}
		}
	}
	
	int ret = max;
	// O-1. 여러분은 토마토가 모두 익을 때까지 최소 며칠이 걸리는지를 계산해서 출력해야 한다. 
	// 만약, 저장될 때까지 모든 토마토가 익어있는 상태라면 0을 출력해야 하고, 모두 익지 못하는 상황이면
	// -1을 출력해야 한다.  
	if(trig == true)
	{
		cout << "-1\n";
	}
	else
	{
		cout << ret << '\n';	
	}
	
	return 0;
}