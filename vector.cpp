#include<iostream>
#include<vector>

using namespace std;

int main()
{

	vector<int> v; //static alloc
	vector<int> *vp = new vector<int>();

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	int m = v.size();
	cout<<m;
	cout<<v[0]<<endl;
	cout<<v[1];
	return 0;
}
