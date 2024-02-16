#include <bits/stdc++.h>
using namespace std;

int _t;

// 1 <= M, N <= 50
int _m, _n;

// 1 <= K <= 2,500
int _k;

// 0 <= X <= M-1
// 0 <= Y <= N-1
int _x, _y;

int _ret;

vector<vector<bool>> _vvb_area(50, vector<bool>(50, false));
vector<vector<bool>> _vvb_visited(50, vector<bool>(50, false));

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void implementDFS(int y, int x)
{
	_vvb_visited[y][x] = true;
	
	for(int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny < 0 || nx < 0 || ny >= _n || nx >= _m)
		{
			continue;
		}
		
		if(_vvb_visited[ny][nx] == false && _vvb_area[ny][nx] == true)
		{
			implementDFS(ny, nx);
		}
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다.
	cin >> _t;
	
	// I-2. 그 다음 줄부터 각각의 테스트 케이스에 대해 첫째 줄에는 배추에 심은 배추밭의 가로길이 M과
	// 세로길이 N, 그리고 배추가 심어져 있는 위치의 개수 K가 주어진다.
	for(int i = 0; i < _t; ++i)
	{
		_ret = 0;
		
		cin >> _m >> _n >> _k;
		
		for(int j = 0; j < _n; ++j)
		{
			for(int k = 0; k < _m; ++k)
			{
				_vvb_area[j][k] = false;
				_vvb_visited[j][k] = false;
			}
		}
		
		// I-3. 그 다음 K줄에는 배추의 위치 X, Y가 주어진다.
		// 두 배추의 위치가 같은 경우는 없다.
		for(int j = 0; j < _k; ++j)
		{
			cin >> _x >> _y;
			
			_vvb_area[_y][_x] = true;
		}
		
		for(int j = 0; j < _n; ++j)
		{
			for(int k = 0; k < _m; ++k)
			{
				if(_vvb_visited[j][k] == true || _vvb_area[j][k] == false)
				{
					continue;
				}
				
				implementDFS(j, k);
				_ret++;
			}
		}
		// O-1. 각 테스트 케이스에 대해 필요한 최소의 배추흰지렁이 마리 수를 출력한다. 	
		cout << _ret << '\n';
	}
	
	return 0;
}