#include <bits/stdc++.h>
using namespace std;

vector<int> _viw(10, 0);
vector<int> _vik(10, 0);

bool cmp(int a, int b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 20 행으로 구성된다. 
	// 1 번째 줄부터 10 번째 줄에는 W 대학의 각 참가자의 점수를 나타내는 정수가 
	// 11 번째 줄부터 20 번째 줄에는 K 대학의 각 참가자의 점수를 나타내는 정수가 적혀있다. 이 정수는 모두 0 이상 100 이하이다.
	for(int i = 0; i < 10; ++i)
	{
		cin >> _viw[i];
	}
	
	for(int i = 0; i < 10; ++i)
	{
		cin >> _vik[i];
	}
	
	sort(_viw.begin(), _viw.end(), cmp);
	sort(_vik.begin(), _vik.end(), cmp);
	
	int ret_w = _viw[7] + _viw[8] + _viw[9];
	int ret_k = _vik[7] + _vik[8] + _vik[9];
	// O-1. W 대학 점수와 K 대학의 점수를 순서대로 공백으로 구분하여 출력하라.
	cout << ret_w << ' ' << ret_k << '\n';
	
	return 0;
}