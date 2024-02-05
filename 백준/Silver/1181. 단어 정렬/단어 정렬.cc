#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 20,000
int _n; 

bool cmp(string a, string b)
{
	if(a.size() == b.size())
	{
		return a < b;
	}
	return a.size() < b.size();
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 단어의 개수 N이 주어진다.
	cin >> _n;
	
	vector<string> vs(_n);
	for(int i = 0; i < _n; ++i)
	{
		// I-2. 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다.
		cin >> vs[i];
	}
	
	sort(vs.begin(), vs.end(), cmp);
	
	vs.erase(unique(vs.begin(), vs.end()), vs.end());
	
	// O-1. 조건에 따라 정렬하여 단어들을 출력한다. 
	for(int i = 0; i < vs.size(); ++i)
	{
		cout << vs[i] << '\n';
	}
	
	return 0;
}