#include <bits/stdc++.h>
using namespace std;

// 0 <= N, K <= 100,000
int _n, _k;
const int _dy[] = {-1, 1, 2};

vector<bool> _vb_visited(200003, false);

int _ret;
vector<int> _vi_ret;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어짐
	cin >> _n >> _k;
	
	if(_k < _n)
	{
		cout << _n - _k << '\n';
		for(int i = _n; i >= _k; --i)
		{
			cout << i << ' ';
		}
		return 0;
	}
	
	queue<pair<int, vector<int>>> qpivi;
	qpivi.push({_n, vector<int>(1, _n)});
	_vb_visited[_n] = true;
	
	while(qpivi.empty() == false)
	{
		pair<int, vector<int>> node = qpivi.front();
		qpivi.pop();
		if(node.first == _k)
		{
			_ret = node.second.size() - 1;
			_vi_ret = node.second;
			goto ret;
		}
		
		for(int i = 0; i < 3; ++i)
		{
			int ny = node.first;
			if(i == 2)
			{
				ny *= _dy[i];
			}
			else
			{
				ny += _dy[i];
			}
			
			if(ny < 0 || ny > 200002 || _vb_visited[ny] == true)
			{
				continue;
			}
			if(ny > _k * 2)
			{
				continue;
			}
			
			vector<int> vi = node.second;
			vi.push_back(ny);
			qpivi.push({ny, vi});
			_vb_visited[ny] = true;
		}
	}
ret:
	// O-1. 첫째 줄에 수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.
	cout << _ret << '\n';
	// O-2. 둘째 줄에 어떻게 이동해야 하는지 공백으로 구분해 출력한다.	
	for(int i = 0; i < _vi_ret.size(); ++i)
	{
		cout << _vi_ret[i] << ' ';
	}
	cout << '\n';
	
	return 0;
}