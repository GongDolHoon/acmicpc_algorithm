#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100
int _n;

// 1 <= A, B <= 100
int _a, _b;

int _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 학교의 수를 나타내는 정수 N이 주어진다.
	cin >> _n;
	
	while(_n--)
	{
		// I-2. 다음 N개의 줄에 각 학교의 학생 수와 배정된 사과 개수를 나타내는 두 개의 정수가 
		// 주어진다.	
		cin >> _a >> _b;
		
		_ret += _b - (_b / _a) * _a;
	}
	
	// O-1. 남은 사과의 총 개수를 나타내는 정수를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}