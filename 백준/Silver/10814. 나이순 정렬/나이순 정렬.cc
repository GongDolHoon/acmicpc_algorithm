#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 100,000
int _n;

bool cmp(pair<int, string> a, pair<int, string> b)
{
	return get<0>(a) < get<0>(b);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 온라인 저지 회원의 수 N이 주어진다.
	cin >> _n;
	vector<pair<int, string>> vii_member(_n);
	int age;
	string name;
	// I-2. 둘째 줄부터 N개의 줄에는 각 회원의 나이와 이름이 공백으로 구분되어 주어진다.
	for(int i = 0; i < _n; ++i)
	{
		cin >> age >> name;
		vii_member[i] = {age, name};
	}
	
	stable_sort(vii_member.begin(), vii_member.end(), cmp);
	// O-1. 첫째 줄부터 총 N개의 줄에 걸쳐 온라인 저지 회원의 나이 순,
	// 나이가 같으면 가입한 순으로 한 줄에 한명씩 나이와 이름을 공백으로 구분해 출력한다. 
	for(int i = 0; i < _n; ++i)
	{
		cout << vii_member[i].first << ' ' << vii_member[i].second << '\n';
	}
	
	return 0;
}