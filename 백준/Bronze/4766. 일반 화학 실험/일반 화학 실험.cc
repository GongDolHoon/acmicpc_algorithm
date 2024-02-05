#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cout << fixed;
	cout.precision(2);
	
	double temp = 0.0;
	double prev = -20.0;
	
	while(true)
	{
		// I-1. 입력은 동혁이가 측정한 혼합물의 온도가 순서대로 주어진다.
		cin >> temp;
		// I-2. 마지막 측정 후에는 999가 주어진다. 동혁이는 온도를 적어도 2번 측정했다. 
		if(temp == 999)
		{
			return 0;
		}
		
		// O-1. 입력으로 주어진 각 온도와 이전 온도와의 차이를 출력한다.
		// 첫 번째 측정할 온도는 이전 온도가 없으니 출력할 필요가 없다.
		// 차이는 항상 소수점 둘째자리까지 출력한다. 	
		if(prev == -20.0)
		{
			prev = temp;
			continue;
		}
		else
		{
			cout << temp - prev << '\n';
			prev = temp;
		}
	}
	
	return 0;
}