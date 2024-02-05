#include <bits/stdc++.h>
using namespace std;

int _t;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 테스트 케이스의 수가 주어진다.
	cin >> _t;
	
	double price = 0.0;
	cout << fixed;
	cout.precision(2);
	
	for(int i = 0; i < _t; ++i)
	{
		// I-2. 각 줄에는 물건의 원래 가격이 소수점 둘째자리까지 주어진다.
		cin >> price;
			
		// O-1. 할인된 가격을 달러 단위로 출력한다.
		// 나누어지지 않을 때는 소수점 셋째 자리에서 반올림해서 둘째 자리까지 출력한다. 	
		cout << "$" << price * (0.8) << '\n';
	}
	
	return 0;
}