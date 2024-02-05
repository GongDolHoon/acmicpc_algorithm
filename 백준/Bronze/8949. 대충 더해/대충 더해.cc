#include <bits/stdc++.h>
using namespace std;

// 1 <= A, B <= 1,000,000
string _a, _b;

string _ret;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 두 정수 A, B가 공백을 두고 주어진다.
	cin >> _a >> _b;
	
	int size_a = _a.size();
	int size_b = _b.size();
	int size_min = min(size_a, size_b);
	
	size_a--;
	size_b--;
	
	for(int i = 0; i < size_min; ++i)
	{
		int tmp = (_a[size_a--] - '0') + (_b[size_b--] - '0');
		_ret.insert(0, to_string(tmp));
	}
	
	if(size_a == -1)\
	{
		_ret.insert(0, _b.substr(0, size_b + 1));
	}
	else if(size_b == -1)
	{
		_ret.insert(0, _a.substr(0, size_a + 1));
	}
	
	// O-1. 희주 방식대로 더한 결과를 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}