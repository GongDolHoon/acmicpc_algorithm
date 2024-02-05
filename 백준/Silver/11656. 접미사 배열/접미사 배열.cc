#include <bits/stdc++.h>
using namespace std;

// S는 알파벳 소문자로만 이루어져 있고, 길이는 1000보다 작거나 같다. 
string _s;

bool cmp(string a, string b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 문자열 S가 주어진다.
	cin >> _s;
	
	vector<string> vs(_s.size());
	
	for(int i = 0; i < _s.size(); ++i)
	{
		vs[i] = _s.substr(i, _s.size());	
	} 
	
	sort(vs.begin(), vs.end(), cmp);
	
	// O-1. 첫째 줄부터 S의 접미사를 사전순으로 한 줄에 하나씩 출력한다. 
	for(int i = 0; i < _s.size(); ++i)
	{
		cout << vs[i] << '\n';
	}
	
	return 0;
}