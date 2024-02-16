#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

int _dx[4] = {0, 1, 0, -1};
int _dy[4] = {-1, 0, 1, 0};

int _ret_no;
int _ret_yes;

vector<vector<bool>> _vvb_visited_origin(105, vector<bool>(105, false));
vector<vector<bool>> _vvb_visited_discomfort(105, vector<bool>(105, false));
vector<string> _vs_origin(105);
char _vs_discomfort[105][105];

void ImplementDFS(int y, int x, char color, bool isOrigin)
{
	if(isOrigin == true)
	{
		_vvb_visited_origin[y][x] = true;
	}
	else
	{
		_vvb_visited_discomfort[y][x] = true;
	}
	
	for(int i = 0; i < 4; ++i)
	{
		int nx = x + _dx[i];
		int ny = y + _dy[i];
		
		if(ny < 0 || nx < 0 || ny >= _n || nx >= _n)
		{
			continue;
		}
		
		if(isOrigin == true)
		{
			if(_vvb_visited_origin[ny][nx] == true || _vs_origin[ny][nx] != color)
			{
				continue;
			}
			
			ImplementDFS(ny, nx, color, true);
		}
		else
		{
			if(_vvb_visited_discomfort[ny][nx] == true || _vs_discomfort[ny][nx] != color)
			{
				continue;
			}	
			
			ImplementDFS(ny, nx, color, false);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N이 주어진다.
	cin >> _n;
	// I-2. 둘째 줄부터 N개 줄에는 그림이 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> _vs_origin[i];
	}
	
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _n; ++j)
		{
			if(_vs_origin[i][j] == 'R')
			{
				_vs_discomfort[i][j] = 'G';
			}
			else
			{
				_vs_discomfort[i][j] = _vs_origin[i][j];
			}
		}
	}
	
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _n; ++j)
		{
			if(_vvb_visited_origin[i][j] == true)
			{
				continue;
			}
			
			if(_vs_origin[i][j] == 'R')
			{
				ImplementDFS(i, j, 'R', true);	
			}
			else if(_vs_origin[i][j] == 'G')
			{
				ImplementDFS(i, j, 'G', true);	
			}
			else
			{
				ImplementDFS(i, j, 'B', true);	
			}
			_ret_no++;
		}
	}
	
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _n; ++j)
		{
			if(_vvb_visited_discomfort[i][j] == true)
			{
				continue;
			}
			
			if(_vs_discomfort[i][j] == 'G')
			{
				ImplementDFS(i, j, 'G', false);
			}
			else
			{
				ImplementDFS(i, j, 'B', false);
			}
			_ret_yes++;
		}
	}
	
	// O-1. 적록색약이 아닌 사람이 봤을 때의 구역의 개수와 
	// 적록색약인 사람이 봤을 때의 구역의 수를 공백으로 구분해 출력한다. 
	cout << _ret_no << ' ' << _ret_yes << '\n';
	
	return 0;
}