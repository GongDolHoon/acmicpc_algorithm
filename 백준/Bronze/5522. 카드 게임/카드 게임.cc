#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. i번째 줄에는 정수 A_i가 적혀있다.
	// 이것은 i번째 게임에서의 JOI군의 점수를 나타낸다.
	int _ret = 0;
	int tmp;
	
	for(int i = 0; i < 5; ++i)
	{
		cin >> tmp;
		
		_ret += tmp;	
	}
	
	// O-1. JOI군의 총점을 한 줄로 출력하라. 
	cout << _ret << '\n';
	
	return 0;
}