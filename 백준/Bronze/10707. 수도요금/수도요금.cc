#include <bits/stdc++.h>
using namespace std;

int _ret;

int _p;
int _a, _b, _c, _d;

int _ret_x;
int _ret_y;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 5줄이고 한 줄에 하나씩 정수가 입력된다.
	// I-1-1. 첫 번째 줄에는 X사의 1리터당 요금 A가 입력된다.
	cin >> _a;
	// I-1-2. 두 번째 줄에는 Y사의 기본요금 B가 입력된다.
	cin >> _b;
	// I-1-3. 세 번째 줄에는 Y사의 요금이 기본요금이 되는 사용량의 상한 C가 입력된다.
	cin >> _c;
	// I-1-4. 네 번째 줄에는 1리터당 추가요금 D가 입력된다.
	cin >> _d;
	// I-1-5. 다섯 번째 줄에는 JOI군의 집에서 사용하는 한 달간 수도의 양 P가 입력된다.
	cin >> _p;
	
	int _ret_x = _p * _a;
	int _ret_y = _b;
	
	if(_p - _c > 0)
	{
		_ret_y += (_p - _c) * _d;
	}
	
	// O-1. JOI군의 집에서 지불하는 한 달간 수도요금을 첫째 줄에 출력한다.
	cout << (_ret_x > _ret_y ? _ret_y : _ret_x) << '\n';
	
	return 0;
}