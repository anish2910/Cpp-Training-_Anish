
#include <bits/stdc++.h>
using namespace std;

map<vector<int>, int> vis;


void CheckVisited(vector<int> data)
{
	if (vis.find(data) != vis.end()) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}


int main()
{

	vector<int> data_1{ 10, 20, 30, 40 };
	vector<int> data_2{ 5, 10, 15 };
	vector<int> data_3{ 1, 3, 5, 7, 9, 11, 13 };

	vis[data_1] = 1;
	vis[data_2] = 1;
	vis[data_3] = 1;


	vector<int> check_1 = { 5, 10, 15 };
	vector<int> check_2 = { 2, 4, 6, 8, 10, 12 };

	CheckVisited(check_1);
	CheckVisited(check_2);

	return 0;
}
