#include <bits/stdc++.h>
using namespace std;

// 0 < a, b, c, d < 59 * 60 + 59
int _a, _b, _c, _d;

int _x;
int _y;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 총 4줄이며, 한 줄에 하나씩 양의 정수가 적혀있다.
	// I-1-1. 첫 번째 줄에 집에서 학교까지의 이동 시간을 나타내는 초가 주어진다.
	cin >> _a;
	
	// I-1-2. 두 번째 줄에 학교에서 PC방까지의 이동 시간을 나타내는 초가 주어진다.
	cin >> _b;
	
	// I-1-3. 세 번째 줄에 PC방에서 학원까지의 이동 시간을 나타내는 초가 주어진다.
	cin >> _c;
	
	// I-1-4. 네 번째 줄에 학원에서 집까지의 이동시간을 나타내는 초가 주어진다.
	cin >> _d;
	
	int ret = _a + _b + _c + _d;
	_x = ret / 60;
	_y = ret % 60;
	
	// O-1. 총 이동시간 x분 y초를 출력한다. 첫 번째 줄에 x를
	cout << _x << '\n';
	
	// O-2. 두 번째 줄에 y를 출력한다. 
	cout << _y << '\n';
	
	return 0;
}