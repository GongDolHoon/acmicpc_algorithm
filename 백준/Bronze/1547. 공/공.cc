#include <bits/stdc++.h>
using namespace std;

// 1 <= M <= 50
int _m;

// 1 <= X, Y <= 3
int _x, _y;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 컵의 위치를 바꾼 횟수 M이 주어진다.
	cin >> _m;
	
	vector<int> vi(3, 0);
	vi[0] = 1;
	
	for(int i = 0; i < _m; ++i)
	{
		// I-2. 둘째 줄부터 M개의 줄에는 컵의 위치를 바꾼 방법 X와 Y가 주어진다.	
		cin >> _x >> _y;
		
		int tmp = vi[_x-1];
		vi[_x-1] = vi[_y-1];
		vi[_y-1] = tmp;
	}
	
	// O-1. 첫째 줄에 공이 들어있는 컵의 번호를 출력한다.
	// 공이 사라져서 컵 밑에 없는 경우에는 -1을 출력한다. 
	for(int i = 0; i < 3; ++i)
	{
		if(vi[i] == 1)
		{
			cout << i + 1 << '\n';
			break;
		}
	}
	
	return 0;
}