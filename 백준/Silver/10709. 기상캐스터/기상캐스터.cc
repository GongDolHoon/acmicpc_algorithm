#include <bits/stdc++.h>
using namespace std;

// 1 <= H <= 100, 1 <= W <= 100
int _h, _w;

vector<string> _vs_area(101);
vector<vector<int>> _vvs_ret(101,vector<int>(101, -1));
queue<pair<int, int>> _qii_cloud;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 1 + H 행으로 주어진다.
	// I-1-1. 첫 번째 행에는 정수 H, W가 공백을 사이에 두고 주어진다.
	// 이것은 JOI시가 H * W 개의 작은 구역으로 나뉘어 있다는 것을 의미한다.
	cin >> _h >> _w;
	// I-1-2. 이어진 H개의 행의 i번째 행에는 W 문자의 문자열이 주어진다.
	// W개의 문자 중 j번째 문자는 구역(i, j)에 지금 구름이 떠 있는지 아닌지를 나타낸다.
	// 구름이 있는 경우에는 영어 소문자 'c'가 구름이 없는 경우에는 문자 '.'가 주어진다.
	string tmp;
	for(int i = 0; i < _h; ++i)
	{
		cin >> tmp;
		_vs_area[i] = tmp;
	}
	
	for(int i = 0; i < _h; ++i)
	{
		for(int j = 0; j < _w; ++j)
		{
			if(_vs_area[i][j] == 'c')
			{
				_vvs_ret[i][j] = 0;
				_qii_cloud.push({i, j});
			}
		}
	}
	
	while(_qii_cloud.size())
	{
		int y = _qii_cloud.front().first;
		int x = _qii_cloud.front().second;
		_qii_cloud.pop();
		
		int ny = y + 0;
		int nx = x + 1;
		
		if(ny < 0 || nx < 0 || ny >= _h || nx >= _w)
		{
			continue;
		}
		
		if(_vvs_ret[ny][nx] == -1)
		{
			_vvs_ret[ny][nx] = _vvs_ret[y][x] + 1;
			_qii_cloud.push({ny, nx});
		}
	}
	
	// O-1. 출력은 H행으로, 각 행에는 공백으로 구분된 W 개의 정수를 출력한다.
	// 출력의 i번째 행 j번째 정수는 지금부터 몇 분 후에 처음으로 구역 (i, j)에 구름이 뜨는지
	// 를 표시한다.
	// 단, 처음부터 구역에 구름이 떠 있었던 경우에는 0을, 몇 분이 지나도 구름이 뜨지
	// 않는 경우에는 -1을 출력한다. 
	for(int i = 0; i < _h; ++i)
	{
		for(int j = 0; j < _w; ++j)
		{
			cout << _vvs_ret[i][j] << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}