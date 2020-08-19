#include <bits/stdc++.h>
#include <vector>

using namespace std;

void zeronone(int no, int &zero, int &one)
{
	//cout << "initial FUNCTION: " << zero << "-" << one << endl;

	while (no)
	{
		(no % 2 == 0) ? zero++ : one++;
		no /= 2;
	}
}

int main()
{
	int n, m;
	vector<int> v;
	vector<pair<int, int>> zno;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		v.push_back(m);
	}

	for (int i = 0; i < v.size(); i++)
	{
		int zero = 0;
		int one = 0;
		zeronone(v[i], zero, one);
		pair<int, int> p;
		p.first = zero;
		p.second = one;
		zno.push_back(p);
		}

	return 0;
}