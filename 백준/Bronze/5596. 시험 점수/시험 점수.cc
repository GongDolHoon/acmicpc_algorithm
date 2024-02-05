#include <bits/stdc++.h>
using namespace std;

int _s;
int _t; 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력은 두 줄로 이루어져 있다.
	// I-1-1. 첫 번째 줄에는 순서대로 민국이의 정보, 수학, 과학, 영어 점수가 있으며,
	int score = 0;
	for(int i = 0; i < 4; ++i)
	{
		cin >> score;
		_s += score;
	}
	// 공백으로 구분되어 있다.
	// I-1-2. 두 번째 줄에는 마찬가지로 순서대로 만세의 정보, 수학, 과학, 영어 점수가 있고,
	// 공백으로 구분되어져 있다.
	for(int i = 0; i < 4; ++i)
	{
		cin >> score;
		_t += score;
	}
	
	// O-1. 문제에서 요구하는 정답을 출력한다. 
	if(_s < _t)
	{
		cout << _t << '\n';
	}
	else
	{
		cout << _s << '\n';
	}
	
	return 0;
}