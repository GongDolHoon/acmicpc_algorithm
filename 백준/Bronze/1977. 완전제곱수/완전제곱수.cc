#include <bits/stdc++.h>
using namespace std;

// 1 <= M <= N <= 10,000
int _m;
int _n; 

int _ret_sum;
int _ret_min;

bool trigger = false;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	// I-1. 첫째 줄에 M이, 둘째 줄에 N이 주어진다.
	cin >> _m >> _n;
	
	int i = 1;
	while(i * i <= _n)
	{
		if(i * i < _m)
		{
			i++;
			continue;
		}
		else
		{
			_ret_sum += i * i;
			
			if(!trigger)
			{
				trigger = true;
				_ret_min = i * i;
			}
			i++;
		}
	}
	
	// O-1. M이상 N이하의 자연수 중 완전제곱수인 것을 모두 찾아 첫째 줄에 그 합을,
	// O-2. 둘째 줄에 그 중 최솟값을 출력한다.
	// O-3. 단, M이상 N이하의 자연수 중 완전제곱수가 없을 경우 첫째 줄에 -1을 출력한다. 
	if(_ret_min == 0)
	{
		cout << "-1\n";
		return 0;
	}
	
	cout << _ret_sum << '\n';
	cout << _ret_min << '\n';
	
	return 0;
}