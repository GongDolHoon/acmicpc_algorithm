#include <bits/stdc++.h>
using namespace std;

// 1 <= A < B < C <= 100
int _a, _b, _c;
vector<int> _vi(3, 0);

bool cmp(const int a, const int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 세 수 A, B, C가 주어진다.
	// 하지만, 순서는 A, B, C가 아닐 수도 있다.
	for(int i = 0; i < 3; ++i)
	{
		cin >> _vi[i];
	}
	
	sort(_vi.begin(), _vi.end(), cmp);
	
	string s;
	// I-2. 둘째 줄에는 A, B, C로 이루어진 세 글자가 주어지며, 이 순서대로 출력하면 된다.
	cin >> s;
	
	// O-1. 주어진 세 수를 주어진 출력 순서대로 출력하면 된다. 
	for(int i = 0; i < 3; ++i)
	{
		switch(s[i])
		{
		case 'A':
			cout << _vi[0] << ' ';
			break;
		case 'B':
			cout << _vi[1] << ' ';
			break;
		case 'C':
			cout << _vi[2] << ' ';
			break;
		default:
			break;
		}
	}
	cout << '\n';
	
	return 0;
}