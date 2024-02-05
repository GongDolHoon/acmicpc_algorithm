#include <bits/stdc++.h>
using namespace std;

int _t;
// 0 < a, b, c, d, e 
int _a, _b, _c, _d, _e;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cout << fixed;
	cout.precision(2);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수가 주어진다. 
	cin >> _t;
	
	for(int i = 0; i < _t; ++i)
	{
		double ret = 0;
		// I-2. 각 테스트 케이스는 음이 아닌 정수 다섯 개로 이루어져 있다.
		// I-2-1. A: 필요한 블래스터 라이플의 개수
		// I-2-2. B: 필요한 시각 센서의 개수
		// I-2-3. C: 필요한 청각 센서의 개수
		// I-2-4. D: 필요한 팔의 수
		// I-2-5. E: 필요한 다리의 수
		cin >> _a >> _b >> _c >> _d >> _e;
	
		ret = _a * 350.34 + _b * 230.9 + _c * 190.55 + _d * 125.30 + _e * 180.9;
		
		// O-1. 각 테스트 케이스마다, 입력으로 주어진 부품을 모두 구매하는데 필요한 비용을 소수점 둘째 자리까지 출력한다.
		// 달러 표시도 출력해야 한다. 	
		cout << '$' << ret << '\n';
	}
	
	
	return 0;
}