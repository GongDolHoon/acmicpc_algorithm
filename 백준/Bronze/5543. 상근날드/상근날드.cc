#include <bits/stdc++.h>
using namespace std;

int _a, _b, _c, _d, _e;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 총 다섯 줄이다.
	// I-1-1. 첫째 줄에는 상덕버거,
	// I-1-2. 둘째 줄에는 중덕버거,
	// I-1-3. 셋째 줄에는 하덕버거의 가격이 주어진다.
	// I-1-4. 넷째 줄에는 콜라의 가격,
	// I-1-5. 다섯째 줄에는 사이다의 가격이 주어진다.
	cin >> _a >> _b >> _c >> _d >> _e;
	
	int min_b = _a;
	int min_s = _d;
	
	if(min_b > _b)
	{
		min_b = _b;
	}
	
	if(min_b > _c)
	{
		min_b = _c;
	}
	
	if(min_s > _e)
	{
		min_s = _e;
	}
	
	// O-1. 첫째 줄에 가장 싼 세트 메뉴의 가격을 출력한다. 
	cout << min_b + min_s - 50 << '\n';
	
	return 0;
}