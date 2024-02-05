#include <bits/stdc++.h>
using namespace std;

// 1 <= w, h <= 1000
int _w, _h;

// 1 <= x <= w - 1
int _x;

// 1 <= y <= h - 1
int _y;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 x, y, w, h가 주어진다.
	cin >> _x >> _y >> _w >> _h;
	
	int min_x = min(_x, _w - _x);
	int min_y = min(_y, _h - _y);
	
	_ret = min(min_x, min_y);
	
	// O-1. 첫째 줄에 문제의 정답을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}