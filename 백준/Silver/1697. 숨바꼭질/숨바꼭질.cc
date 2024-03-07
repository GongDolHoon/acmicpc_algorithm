#include <bits/stdc++.h>
using namespace std;

// 0 <= N, K <= 100,000
int _n, _k;
int _ret;

const int _dx[] = {-1, 1, 2};

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다.
	 cin >> _n >> _k;
	 
	 queue<pair<int, int>> qii;
	 vector<int> vi_visited(100001, false);
	 qii.push({_n, 0});
	 vi_visited[_n] = true;
	 
	 while(qii.empty() == false)
	 {
	 	pair<int, int> node = qii.front();
	 	qii.pop();
	 	int nx = 0;
	 	
	 	if(node.first == _k)
	 	{
	 		_ret = node.second;	
	 		break;
		}
	 	
	 	for(int i = 0; i < 3; ++i)
	 	{	
	 		if(i == 2)
	 		{
	 			nx = node.first * _dx[i];
			}
			else
			{
				nx = node.first + _dx[i];
			}
			
			if(nx < 0 || nx > 100000)
			{
				continue;
			}
			
			if(vi_visited[nx] ==  true)
			{
				continue;
			}
			
			qii.push({nx, node.second + 1});
			vi_visited[nx] = true;
		}
	 }
	 
	 // O-1. 수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.
	 cout << _ret << '\n'; 
	
	return 0;
}