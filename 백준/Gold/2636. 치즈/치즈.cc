#include <bits/stdc++.h>
using namespace std;

// 1 <= M, N <= 100
int _m, _n;

int _ret_time;
int _ret_num;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

vector<vector<int>> _vvb_area(100, vector<int>(100, 0));
vector<vector<bool>> _vvb_visited(100, vector<bool>(100, false));

bool isConsumed()
{
	bool trig = false;
	
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			if(_vvb_area[i][j] == 1)
			{
				trig = true;
				break;
			}
		}
		
		if(trig == true)
		{
			break;
		}
	}
	
	return (trig == false);
}

void consumeCheese(int y, int x)
{
	_vvb_visited[y][x] = true;
	
	for(int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny < 0 || nx < 0 || ny >= _n || nx >= _m || _vvb_visited[ny][nx] == true)
		{
			continue;
		}
		
		if(_vvb_area[ny][nx] == 0)
		{
			consumeCheese(ny, nx);
		}
		else if(_vvb_area[ny][nx] == 1)
		{
			_vvb_area[ny][nx] = 2;
		}
		else
		{
			continue;
		}
	}
	
	return;
}

int countCheese()
{
	int ret = 0;
	
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			if(_vvb_area[i][j] == 1)
			{
				ret++;
			}
		}
	}
	
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 사각형 모양 판의 세로와 가로의 길이가 양의 정수로 주어진다.
	cin >> _n >> _m;
	
	// I-2. 판의 각 가로줄의 모양이 윗 줄부터 차례로 둘째 줄부터 마지막 줄까지 주어진다.
	// 치즈가 없는 칸은 0, 치즈가 있는 칸은 1로 주어지며, 각 숫자 사이에는 빈칸이 하나씩 있다.
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _m; ++j)
		{
			cin >> _vvb_area[i][j];
		}
	}
	
	while(isConsumed() == false)
	{
		for(int i = 0; i < _n; ++i)
		{
			for(int j = 0; j < _m; ++j)
			{
				_vvb_visited[i][j] = false;
			}
		}
		
		_ret_num = countCheese();
		
		consumeCheese(0, 0);
		
		for(int i = 0; i < _n; ++i)
		{
			for(int j = 0; j < _m; ++j)
			{
				if(_vvb_area[i][j] == 2)
				{
					_vvb_area[i][j] = 0;
				}
			}
		}
		
		_ret_time++;
	}
	
	// O-1. 첫째 줄에는 치즈가 모두 녹아서 없어지는 데 걸리는 시간을 출력하고,
	cout << _ret_time << '\n';
	// O-2. 둘째 줄에는 모두 녹기 한 시간 전에 남아있는 치즈 조각이 놓여 있는 칸의 개수를 출력한다. 
	cout << _ret_num << '\n';
	
	return 0;
}