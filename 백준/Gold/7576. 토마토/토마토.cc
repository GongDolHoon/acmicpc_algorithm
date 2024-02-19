#include <bits/stdc++.h>
using namespace std;

// 2 <= M, N <= 1,000
int _m, _n;
int _ret;

vector<vector<int>> _vvi_tomatoes(1001, vector<int>(1001, -1));
queue<pair<int, int>> _q_tomato;

int _dx[4] = {0, 1, 0, -1};
int _dy[4] = {-1, 0, 1, 0};

void ImplementBFS()
{
	while(_q_tomato.size())
	{
		int y = _q_tomato.front().first;
		int x = _q_tomato.front().second;
		_q_tomato.pop();
		
		for(int i = 0; i < 4; ++i)
		{
			int ny = y + _dy[i];
			int nx = x + _dx[i];
			
			if(ny < 0 || nx < 0 || ny >= _n || nx >= _m)
			{
				continue;
			}
			
			if(_vvi_tomatoes[ny][nx] == 0)
			{
				_vvi_tomatoes[ny][nx] = _vvi_tomatoes[y][x] + 1;
				_q_tomato.push({ny, nx});
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 줄에 상자의 크기를 나타내는 두 정수 M과 N이 주어진다.
	cin >> _m >> _n;
	// I-2. 둘째 줄부터는 하나의 상자에 저장된 토마토들의 정보가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> _vvi_tomatoes[i][j];
			if(_vvi_tomatoes[i][j] == 1)
			{
				_q_tomato.push({i, j});
			}
		}
	}
	
	ImplementBFS();
	
	// O-1. 여러분은 토마토가 모두 익을 때까지의 최소 날짜를 출력해야 한다.
	// 만약, 저장될 떄부터 모든 토마토가 익어있는 상태라면 0을 출력해야 하고,
	// 토마토가 모두 익지 못하는 상황이면 -1을 출력해야 한다. 
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			if(_vvi_tomatoes[i][j] == 0)
			{
				cout << "-1\n";
				return 0;
			}
			
			if(_ret < _vvi_tomatoes[i][j])
			{
				_ret = _vvi_tomatoes[i][j];
			}
		}
	}
	cout << _ret - 1 << '\n';
	
	return 0;
}