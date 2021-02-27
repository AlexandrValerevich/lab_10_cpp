#include <vector>
#include <algorithm>
#include <clocale>
#include <ctime>
#include <iostream>

#define DEBUG

using namespace std;


int main() {
	setlocale(0, "");
	srand((int)time(NULL));
	vector<int> integer_v;

	for (int i=0; i < 20; i++)
		integer_v.push_back(rand()%100);

#ifdef DEBUG
	cout << "--------SOURCE ARRAY--------" << endl;
	for (const auto &it : integer_v) 
		cout << it << endl;
	cout << endl;
#endif // DEBUG
	
	sort(integer_v.begin(), integer_v.end(), [](int a, int b) {
		return a % 2 < b % 2;
		});
#ifdef DEBUG
	cout << "--------FINAL_ARRAY--------" << endl;
	for (const auto& it : integer_v)
		cout << it << endl;
	cout << endl;
#endif // DEBUG

	return 0;
}