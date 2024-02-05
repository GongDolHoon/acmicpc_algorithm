#include <bits/stdc++.h>
using namespace std;

// 0 < n < 1000
int _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 n이 주어진다.
	cin >> _n;
	
	// I-2. 다음 줄부터 한 줄에 한 개씩 목록에 들어있는 수가 주어진다.
	// 목록은 0으로 끝난다. 
	// 0 < tmp < 10,000
	int tmp;
	
	while(true)
	{
		cin >> tmp;
		if(tmp == 0)
		{
			return 0;
		}
		
		if(tmp % _n == 0)
		{
			cout << tmp << " is a multiple of " << _n << ".\n";
		}
		else
		{
			cout << tmp << " is NOT a multiple of " << _n << ".\n";
		}
	}
	
	// O-1. 목록에 있는 수가 n의 배수인지 아닌지를 구한 뒤 예제 출력처럼 출력한다. 
	
	return 0;
}