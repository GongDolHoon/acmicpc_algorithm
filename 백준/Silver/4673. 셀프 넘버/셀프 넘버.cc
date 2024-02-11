#include <bits/stdc++.h>
using namespace std;

int _thresh = 10001;
vector<bool> _vb(_thresh, false); 

int get_not_selfnum(int n)
{
	int ret = n;
	
	while(n != 0)
	{
		ret += n % 10;
		n /= 10;
	}
	
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// I-1. 입력은 없다.
	for(int i = 1; i < _thresh; ++i)
	{
		while(true)
		{
			int nself = get_not_selfnum(i);
			if(nself >= _thresh)
			{
				break;
			}
			
			if(_vb[nself] == true)
			{
				break;
			}	
			else
			{
				_vb[nself] = true;
			}
		}
	}
	
	// O-1. 10,000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 증가하는 순서로 출력한다. 
	for(int i = 1; i < _thresh; ++i)
	{
		if(_vb[i] == false)
		{
			cout << i << '\n';
		}
	}
	
	return 0;
}