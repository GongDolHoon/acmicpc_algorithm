#include <bits/stdc++.h>
using namespace std;

vector<int> _vi_a(10, 0);
vector<int> _vi_b(10, 0); 

int _ret_a;
int _ret_b;
int _ret_d;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫 번째 줄에는 A가 제시한 카드의 숫자 10개가 라운드 순서대로 주어지고
	for(int i = 0; i < 10; ++i)
	{
		cin >> _vi_a[i];
	}
	
	// I-2. 두 번째 줄에는 B가 제시한 카드의 숫자 10개가 라운드 순서대로 주어진다.
	for(int i = 0; i < 10; ++i)
	{
		cin >> _vi_b[i];
	}
	
	for(int i = 0; i < 10; ++i)
	{
		if(_vi_a[i] < _vi_b[i])
		{
			_ret_b++;
		}
		else if(_vi_a[i] > _vi_b[i])
		{
			_ret_a++;
		}
	}
	
	// O-1. 게임의 승패가 결정되는 경우 승리한 사람을 출력하고, 비기는 경우에는 D를 출력한다. 
	if(_ret_b < _ret_a)
	{
		cout << "A\n";
	}
	else if(_ret_b > _ret_a)
	{
		cout << "B\n";
	}
	else
	{
		cout << "D\n";
	}
	
	return 0;
}