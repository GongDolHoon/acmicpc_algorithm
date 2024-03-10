#include <bits/stdc++.h>
using namespace std;

int _ret;
int _n, _m;

const int _dy[] = {-1, 0, 1, 0};
const int _dx[] = {0, 1, 0, -1};

struct Node
{
	int _y;
	int _x;
	int _distance;
	bool _hasDrill;
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 N, M이 주어진다.
	cin >> _n >> _m;
	vector<string> vs_map(_n);
	vector<vector<vector<bool>>> vvvb_visited(_n, vector<vector<bool>>(_m, vector<bool>(2, false)));
	// I-2. 다음 N개의 줄에 M개의 숫자로 맵이 주어진다.
	// (1, 1)과 (N, M)은 항상 0이라고 가정하자.
	// 0 = 이동할 수 있는 곳
	// 1 = 이동할 수 없는 벽이 있는 곳 
	for(int i = 0; i < _n; ++i)
	{
		cin >> vs_map[i];
	}
	
	queue<Node> qn;
	qn.push({0, 0, 1, true});
	vvvb_visited[0][0][1] = true; 
	
	while(qn.empty() == false)
	{
		Node node = qn.front();
		qn.pop();
		
		if(node._y == _n-1 && node._x == _m-1)
		{
			_ret = node._distance;
			break;
		}
		
		for(int i = 0; i < 4; ++i)
		{
			int ny = node._y + _dy[i];
			int nx = node._x + _dx[i];
			
			if(nx < 0 || ny < 0 || nx >= _m || ny >= _n)
			{
				continue;
			}
			
			if(vvvb_visited[ny][nx][node._hasDrill] == true)
			{
				continue;
			}
			
			if(node._hasDrill == true)
			{
				if(vs_map[ny][nx] == '0')
				{
					vvvb_visited[ny][nx][1] = true;
					qn.push({ny, nx, node._distance + 1, true});
				}
				else
				{
					vvvb_visited[ny][nx][0] = true;
					qn.push({ny, nx, node._distance + 1, false});
				}
			}
			else
			{	
				if(vs_map[ny][nx] == '0')
				{
					vvvb_visited[ny][nx][0] = true;
					qn.push({ny, nx, node._distance + 1, false});
				}
			}
		}
	}
	
	 
	// O-1. 첫째 줄에 최단 거리를 출력한다.
	// 불가능할 때는 -1을 출력한다.
	if(_ret == 0)
	{
		cout << "-1\n";	
	}
	else
	{
		cout << _ret << '\n'; 	
	}
	
	return 0;
}