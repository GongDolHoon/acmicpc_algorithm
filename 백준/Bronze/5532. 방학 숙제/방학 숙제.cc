#include <bits/stdc++.h>
using namespace std;

// 2 <= L <= 40
int _l;
// 1 <= A, B <= 1000
int _a, _b;
// 1 <= C, D <= 100
int _c, _d;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 한 줄에 하나씩 총 다섯 줄에 걸쳐 L, A, B, C, D가 주어진다.
	cin >> _l >> _a >> _b >> _c >> _d;
	
	int korean = (int)(ceil(_a / (double)_c));
	int mathematics = (int)(ceil(_b / (double)_d));
	
	_ret = _l - max(korean, mathematics);
	
	// O-1. 첫째 줄에 상근이가 놀 수 있는 날의 최댓값을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}