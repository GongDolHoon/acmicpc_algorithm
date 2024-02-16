#include <bits/stdc++.h>
using namespace std;

// 2 <= N <= 100
int _n;
int _area[101][101];
bool _visited[101][101];

vector<int> _vi;
int _ret;

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x, int thresh)
{
	_visited[y][x] = true;
	
	for(int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if(ny < 0 || nx < 0 || ny >= _n || nx >= _n)
		{
			continue;
		}
		if((_visited[ny][nx] == false) && _area[ny][nx] > thresh)
		{
			dfs(ny, nx, thresh);
		}
	}
	
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에는 어떤 지역을 나타내는 2차원 배열의 행과 열의 개수를 나타내는 수 
	// N이 입력된다. 
	cin >> _n;
	
	int max = 0;
	// I-2. 둘째 줄부터 N개의 각 줄에는 2차원 배열의 첫 번째 행부터
	// N번째 행까지 순서대로 한 행씩 높이 정보가 입력된다.
	// 높이는 1 이상 100 이하의 정수이다.
	for(int i = 0; i < _n; ++i)
	{
		for(int j = 0; j < _n; ++j)
		{
			cin >> _area[i][j];
			
			if(max < _area[i][j])
			{
				max = _area[i][j];
			}
		}
	}
	
	for(int i = 0; i < max; ++i)
	{
		int safe = 0;
		
		for(int j = 0; j < _n; ++j)
		{
			for(int k = 0; k < _n; ++k)
			{
				_visited[j][k] = false;		
			}
		}
		
		for(int j = 0; j < _n; ++j)
		{
			for(int k = 0; k < _n; ++k)
			{
				if((_visited[j][k] == false) && (_area[j][k] > i))
				{
					dfs(j, k, i);
					safe++;	
				}
			}
		}
		
		_vi.push_back(safe);
	}
	
	_ret = *(max_element(_vi.begin(), _vi.end()));
	// O-1. 첫째 줄에 장마철에 물에 잠기지 않는 안전한 영역의 최대 개수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}