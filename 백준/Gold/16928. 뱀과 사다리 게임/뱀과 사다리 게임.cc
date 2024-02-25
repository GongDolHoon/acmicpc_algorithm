#include <bits/stdc++.h>
using namespace std;

// 1 <= N, M <= 15
int _n, _m;

// x < y
// x번 칸에 도착하면, y번 칸으로 이동한다는 의미이다. 
int _x, _y;

// u > v
// u번 칸에 도착하면, v번 칸으로 이동한다는 의미이다. 
int _u, _v;

int _ret;

vector<vector<int>> _vvi_adj(101);
vector<int> _vi_count(101, 0);
vector<bool> _vi_map(101, 0);

void RollADice()
{
	queue<int> q;
	q.push(1);
	
	while(q.empty() == false)
	{
		int player = q.front();
		q.pop();
		
		for(int i = 1; i <= 6; ++i)
		{
			if(player + i == 100)
			{
				_ret = _vi_count[player] + 1;
				return;
			}
			
			if(_vi_map[player + i] == true)
			{
				if(_vi_count[_vvi_adj[player+i][0]] == 0 || 
					(_vi_count[_vvi_adj[player + i][0]] > _vi_count[player] + 1))
				{
					q.push(_vvi_adj[player + i][0]);
					_vi_count[_vvi_adj[player + i][0]] = _vi_count[player] + 1;	
				}
			}
			else
			{
				if(_vi_count[player + i] == 0 || (_vi_count[player + i] > _vi_count[player] + 1))
				{
					q.push(player + i);
					_vi_count[player + i] = _vi_count[player] + 1;
				}
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 게임판에 있는 사다리의 수 N과 뱀의 수 M이 주어진다.
	cin >> _n >> _m; 
	
	// I-2. 둘째 줄부터 N개의 줄에는 사다리의 정보를 의미하는 x,y가 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> _x >> _y;	
		_vi_map[_x] = true;
		_vvi_adj[_x].push_back(_y);
	} 
	
	// I-3. 다음 M개의 줄에는 뱀의 정보를 의미하는 u,v가 주어진다.
	for(int i = 0; i < _m; ++i)
	{
		cin >> _u >> _v;
		_vi_map[_u] = true;
		_vvi_adj[_u].push_back(_v);
	}
	
	RollADice();
	
	// O-1. 100번 칸에 도착하기 위해 주사위를 최소 몇 번 굴려야 하는지 출력한다.
	cout << _ret << '\n'; 
	
	return 0;
}