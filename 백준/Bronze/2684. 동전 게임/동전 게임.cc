#include <bits/stdc++.h>
using namespace std;

// 1 <= P <= 1,000
int _p; 

string _s;

int _ret_ttt;
int _ret_tth;
int _ret_tht;
int _ret_thh;
int _ret_htt;
int _ret_hth;
int _ret_hht;
int _ret_hhh;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 테스트 케이스의 개수 P가 주어진다.
	cin >> _p;
	
	for(int i = 0; i < _p; ++i)
	{
		// I-2. 각 테스트 케이스는 한 줄로 이루어져 있고, 동전을 40개 던진 결과가 주어진다.
		// 이때, 앞면은 H로, 뒷면은 T로 표현한다.
		cin >> _s;
		
		_ret_ttt = 0;
		_ret_tth = 0;
		_ret_tht = 0;
		_ret_thh = 0;
		_ret_htt = 0;
		_ret_hth = 0;
		_ret_hht = 0;
		_ret_hhh = 0;
		
		for(int j = 0; j < _s.size() - 2; ++j)
		{
			if(_s.substr(j, 3) == "TTT")
			{
				_ret_ttt++;
			}
			else if(_s.substr(j, 3) == "TTH")
			{
				_ret_tth++;
			}
			else if(_s.substr(j, 3) == "THT")
			{
				_ret_tht++;
			}
			else if(_s.substr(j, 3) == "THH")
			{
				_ret_thh++;
			}
			else if(_s.substr(j, 3) == "HTT")
			{
				_ret_htt++;
			}
			else if(_s.substr(j, 3) == "HTH")
			{
				_ret_hth++;
			}
			else if(_s.substr(j, 3) == "HHT")
			{
				_ret_hht++;
			}
			else if(_s.substr(j, 3) == "HHH")
			{
				_ret_hhh++;
			}
		} 	
		// O-1. 각 테스트 케이스마다 3-동전수열이 몇 번 나타났는지를 출력한다.
		// 뒤뒤뒤, 뒤뒤앞, 뒤앞뒤, 뒤앞앞, 앞뒤뒤, 앞뒤앞, 앞앞뒤, 앞앞앞 순서대로 공백으로
		// 구분해서 출력한다
		cout << _ret_ttt << ' ' << _ret_tth << ' ' << _ret_tht << ' ' << _ret_thh				<< ' ' << _ret_htt << ' ' << _ret_hth << ' ' << _ret_hht << ' ' 
			<< _ret_hhh << '\n';
	}
	
	return 0;
}