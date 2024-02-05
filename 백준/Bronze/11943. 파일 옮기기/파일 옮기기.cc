#include <bits/stdc++.h>
using namespace std;

// 0 <= A, B, C, D <= 1000
int _a, _b, _c, _d;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 첫 번째 바구니에 있는 사과와 오렌지의 수 A, B가 주어진다.
	cin >> _a >> _b;
	
	// I-2. 두 번째 줄에는 두 번째 바구니에 있는 사과와 오렌지의 수 C, D가 주어진다.
	cin >> _c >> _d;
	
	_ret = min(_a + _d, _b + _c);
	
	// O-1. 사과와 오렌지를 옮기는 최소 횟수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}