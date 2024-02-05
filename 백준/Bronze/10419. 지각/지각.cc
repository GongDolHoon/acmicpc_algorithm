#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 100
int _t;

// 1 <= d <= 10,000
int _d;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 창영이가 궁금한 경우의 수 T가 첫 번째 줄에 주어지고,
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 이어서 T개의 줄에 수업시간 d가 차례대로 주어진다.
		cin >> _d;
		
		for(int j = 0; j < _d; ++j)
		{
			// O-1. 수업시간에 따른 교수님이 지각할 수 있는 최대 시간 t를 정수로 구해서 출력한다. 	
			if(pow(j + 1, 2) + (j + 1) > _d)
			{
				cout << j << '\n';
				break;
			}
		}
	}
	
	return 0;
}