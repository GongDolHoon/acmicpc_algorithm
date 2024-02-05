#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b)
{
	return a > b;
}

string _n;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 정렬하려고 하는 수 N이 주어진다. 
	// N은 1,000,000,000보다 작거나 같은 자연수이다.
	cin >> _n;
	
	sort(_n.begin(), _n.end(), cmp);
	
	// O-1. 첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
	cout << _n << '\n';
	
	return 0;
}