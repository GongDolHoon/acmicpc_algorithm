#include <bits/stdc++.h>
using namespace std;

// 1 <= T <= 100
int _t;

// 4 <= V, E <= 100
int _v, _e;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에 자연수 T가 주어진다.
	cin >> _t;
	
	while(_t--)
	{
		// I-2. 다음 T 개의 줄에 자연수 V와 E가 공백을 사이에 두고 주어진다.
		// V와 E는 각각 꼭짓점의 개수와 모서리의 개수이다.
		cin >> _v >> _e;
		
		// O-1. 각 V와 E에 대해 볼록다면체의 면의 수를 한 줄에 하나씩 출력한다. 	
		cout << 2 - _v + _e << '\n';
	}

	return 0;
}