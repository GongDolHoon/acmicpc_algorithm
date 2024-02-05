#include <bits/stdc++.h>
using namespace std;

// 0 < n < 1,000,000
int _n; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int i = 1;
	
	while(true)
	{
		// I-1. 입력은 여러 개의 테스트 케이스로 이루어져 있다.
		// 각 테스트 케이스는 한 줄로 이루어져 있고, n0으로 이루어져 있다.
		cin>> _n;
		// I-2. 입력의 마지막 줄에는 0이 하나 주어진다.
		if(_n == 0)
		{
			return 0;
		}
	
		int n1 = _n * 3;
		int n2;
		
		if(n1 % 2 == 0)
		{
			cout << i++ << ". even ";
			n2 = n1 / 2;
		}
		else
		{
			cout << i++ << ". odd ";
			n2 = (n1 + 1) / 2;
		}
		
		int n3 = 3 * n2;
		int n4 = n3 / 9;
		
		// O-1. 각 테스트 케이스에 대해서, 케이스 번호를 출력하고, n1이 짝수라면 'even', 홀수라면 'odd'를 출력하고,
		// n4를 출력한다. 	
		cout << n4 << '\n';
	}
	
	return 0;
}