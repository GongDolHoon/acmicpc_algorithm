#include <bits/stdc++.h>
using namespace std;

vector<int> _vi_a(10, 0);
vector<int> _vi_b(10, 0);

int _ret_a;
int _ret_b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 입력 파일은 두 개의 줄로 이루어진다.
	// I-1-1. 첫 번째 줄에는 A가 늘어놓은 카드의 숫자들이 빈칸을 사이에 두고 순서대로 주어진다.
	for(int i = 0; i < 10; ++i)
	{
		cin >> _vi_a[i];
	}
	// I-1-2. 두 번째 줄에는 B가 늘어놓은 카드의 숫자들이 빈칸을 사이에 두고 순서대로 주어진다.
	for(int i = 0; i < 10; ++i)
	{
		cin >> _vi_b[i];
	}
	
	for(int i = 0; i < 10; ++i)
	{
		if(_vi_a[i] > _vi_b[i])
		{
			_ret_a += 3;
		}
		else if(_vi_a[i] < _vi_b[i])
		{
			_ret_b += 3;
		}
		else
		{
			_ret_a++;
			_ret_b++;
		}
	}
	
	// O-1. 첫 번째 줄에는 게임이 끝난 후, A와 B가 받은 총 승점을 순서대로 빈칸을 사이에 두고
	// 출력한다.
	cout << _ret_a << ' ' << _ret_b << '\n';
	// O-2. 두 번째 줄에는 이긴 사람이 A인지 B인지 결정해서, 이긴 사람을 문자 A 또는 B로 출력
	// O-3. 만약 비기는 경우에는 문자 D를 출력한다. 
	if(_ret_a < _ret_b)
	{
		cout << "B\n";	
	}
	else if(_ret_a > _ret_b)
	{
		cout << "A\n";
	}
	else
	{
		for(int i = 9; i >= 0; --i)
		{
			if(_vi_a[i] < _vi_b[i])
			{
				cout << "B\n";
				return 0;
			}
			else if(_vi_a[i] > _vi_b[i])
			{
				cout << "A\n";
				return 0;
			}
		}
		cout << "D\n";
	}
	
	return 0;
}