#include <bits/stdc++.h>
using namespace std;

// 1 <= n <= 10,000
int _n; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 여러 개의 테스트 케이스로 이루어져 있다.
	// 각 테스트 케이스는 한 줄로 이루어져 있고, n이 주어진다.
	while(cin >> _n)
	{
		int ret = 1;
		long long i = 1;
		while(i % _n != 0)
		{
			i = i * 10 + 1;
			i %= _n;
			ret++;
		}
		// O-1. 각 자릿수가 모두 1로만 이루어진 n의 배수 중 가장 작은 수의 자리수를 출력한다. 
		cout << ret << '\n';
	}
	
	return 0;
}