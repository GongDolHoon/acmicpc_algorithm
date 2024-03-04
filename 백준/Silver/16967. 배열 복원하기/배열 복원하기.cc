#include <bits/stdc++.h>
using namespace std;

// 2 <= H, W <= 300
// 1 <= X < H
// 1 <= Y < W
// 0 <= B_i,j <= 1000
int _h, _w, _x, _y;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 네 정수 H, W, X, Y가 주어진다.
	cin >> _h >> _w >> _x >> _y;
	// I-2. 둘째 줄부터 H + X개의 줄에 배열 B의 원소가 주어진다. 
	// 항상 배열 A가 존재하는 경우만 입력으로 주어진다. 
	vector<vector<int>> vvi_a(_h, vector<int>(_w));
	vector<vector<int>> vvi_b(_h + _x, vector<int>(_w + _y));
	for(int i = 0; i < _h + _x; ++i)
	{
		for(int j = 0; j < _w + _y; ++j)
		{
			cin >> vvi_b[i][j];
		}
	}
	
	for(int i = 0; i < _x; ++i)
	{
		for(int j = 0; j < _w; ++j)
		{
			vvi_a[i][j] = vvi_b[i][j];
		}
	}
	
	for(int i = _h - _x; i < _h; ++i)
	{
		for(int j = 0; j < _w; ++j)
		{
			vvi_a[i][j] = vvi_b[i + _x][j + _y];
		}
	}
	
	for(int i = _x; i < _h - _x; ++i)
	{
		for(int j = 0; j < _w; ++j)
		{
			if(j - _y < 0)
			{
				vvi_a[i][j] = vvi_b[i][j];
			}
			else
			{
				vvi_a[i][j] = vvi_b[i][j] - vvi_a[i - _x][j - _y];	
			}
		}
	}
	
	// O-1. 총 H개의 줄에 배열 A의 원소를 출력한다. 
	for(int i = 0; i < _h; ++i)
	{
		for(int j = 0; j < _w; ++j)
		{
			cout << vvi_a[i][j] << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}