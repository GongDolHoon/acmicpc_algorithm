#include <bits/stdc++.h>
using namespace std;

// 0 < x, y < 1001
int _x;
int _y;

int _ret;

int rev(int n)
{
	int rev;
	
	string s = to_string(n);
	reverse(s.begin(), s.end());
	
	rev = stoi(s);
	
	return rev;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 수 X와 Y가 주어진다.
	cin >> _x >> _y;
	
	_ret = rev(rev(_x) + rev(_y));
	
	// O-1. 첫째 줄에 문제의 정답을 출력한다. 
	cout << _ret << '\n';
	
	return 0;
}