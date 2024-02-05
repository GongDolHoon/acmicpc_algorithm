#include <bits/stdc++.h>
using namespace std;

// 1 <= t <= 100
int _t;
// 1 <= n <= 20
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 t가 주어진다.
	cin >> _t;
	
	// I-2. 모든 테스트 케이스는 두 줄로 이루어져 있다.
	// I-2-1. 첫째 줄에는 선영이가 방문할 상점의 수 n이 주어지며,
	// I-2-2. 둘째 줄에는 상점의 위치가 주어진다. 
	for(int i = 0; i < _t; ++i)
	{
		cin >> _n;
		int ret = 0;
		int min = INT_MAX;
		int max = INT_MIN;
		int temp;
		for(int j = 0; j < _n; ++j)
		{
			cin >> temp;
			
			if(temp > max)
			{
				max = temp;
			}
			
			if(temp < min)
			{
				min = temp;
			}
		}
		// O-1. 선영이가 가려고 했던 모든 상점을 방문하고 차로 돌아오기 위해 걸어야 하는
		// 거리의 최솟값을 출력한다. 
		
		cout << (max - min) * 2 << '\n';
	}
	
	return 0;
}