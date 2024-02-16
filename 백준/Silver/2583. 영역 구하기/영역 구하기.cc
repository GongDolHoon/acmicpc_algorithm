#include <bits/stdc++.h>
using namespace std;

// 1 <= M, N, K <= 100
int _m, _n, _k;
int _ldx, _ldy, _rux, _ruy;

int _ret_num;
vector<int> _ret_area;

int _dy[4] = {-1, 0, 1, 0};
int _dx[4] = {0, 1, 0, -1};

int _area;

vector<vector<bool>> _vvb_paper(101, vector<bool>(101, false));
vector<vector<bool>> _vvb_visited(101, vector<bool>(101, false));

bool cmp(const int x, const int y)
{
	return x < y;
}

void dfs(int y, int x)
{
	_vvb_visited[y][x] = true;
	_area++;
	for(int i = 0; i < 4; ++i)
	{
		int ny = y + _dy[i];
		int nx = x + _dx[i];
		
		if(ny < 0 || nx < 0 || ny >= _m || nx >= _n)
		{
			continue;
		}
		if(_vvb_visited[ny][nx] == true || _vvb_paper[ny][nx] == true)
		{
			continue;
		}
		
		dfs(ny, nx);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 M과 N, 그리고 K가 빈칸을 사이에 두고 차례대로 주어진다. 
	cin >> _m >> _n >> _k;
	
	// I-2. 둘째 줄부터 K개의 줄에는 한 줄에 하나씩 직사각형의 왼쪽 아래 꼭짓점의
	// x, y 좌표값과 오른쪽 위 꼭짓점의 x, y 좌표값이 빈 칸을 사이에 두고 차례대로 주어진다.
	// 모눈종이의 왼쪽 아래 꼭짓점의 좌표는 (0, 0)이고, 
	// 오른쪽 위 꼭짓점의 좌표는 (N, M)이다.
	// 입력되는 K개의 직사각형들이 모눈종이를 전체를 채우는 경우는 없다.
	for(int i = 0; i < _k; ++i)
	{
		cin >> _ldx >> _ldy >> _rux >> _ruy;
		
		for(int j = _ldy; j < _ruy; ++j)
		{
			for(int k = _ldx; k < _rux; ++k)
			{
				_vvb_paper[j][k] = true;
			}
		}
	}
	
	for(int i = 0; i < _m; ++i)
	{
		for(int j = 0; j < _n; ++j)
		{
			if(_vvb_visited[i][j] == true || _vvb_paper[i][j] == true)
			{
				continue;
			}
			_area = 0;	
			dfs(i, j);
			_ret_num++;
			_ret_area.push_back(_area);
		}
	}
	
	// O-1. 첫째 줄에 분리되어 나누어지는 영역의 개수를 출력한다.
	cout << _ret_num << '\n';
	// O-2. 둘째 줄에는 각 영역의 넓이를 오름차순으로 정렬하여 빈칸을 사이에 두고 출력한다. 
	sort(_ret_area.begin(), _ret_area.end(), cmp);
	
	for(int i = 0; i < _ret_area.size(); ++i)
	{
		cout << _ret_area[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}