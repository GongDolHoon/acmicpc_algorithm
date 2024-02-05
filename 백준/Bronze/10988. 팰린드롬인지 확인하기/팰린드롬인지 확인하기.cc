#include <bits/stdc++.h>
using namespace std;

// 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다. 
string _s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어가 주어진다. 
	cin >> _s;
	
	string rev_s = _s;
	reverse(rev_s.begin(), rev_s.end());
	
	// O-1. 첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다. 
	if(rev_s == _s)
	{
		cout << "1\n";
	}
	else
	{
		cout << "0\n";
	}
	
	return 0;
}