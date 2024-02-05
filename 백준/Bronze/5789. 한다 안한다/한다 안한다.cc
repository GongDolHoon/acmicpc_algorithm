#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 1,000
int _n;
// 0과 1로 이루어진 문자열이 주어진다. 문자열의 길이는 항상 짝수이고, 1000보다 작다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 N이 주어진다. 
	cin >> _n;
	
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있으며, 0과 1로 이루어진 문자열이 주어진다.	
		cin >> _s;
		
		// O-1. 각 테스트 케이스에 대해서 상근이가 내린 결정이 한다이면 Do-it을, 안한다이면 Do-it-Not을 출력한다.
		if(_s[_s.size() / 2 - 1] == _s[_s.size() / 2])
		{
			cout << "Do-it\n";
		}
		else
		{
			cout << "Do-it-Not\n";
		}
	}
	 
	return 0;
}