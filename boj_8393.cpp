#include <iostream>
using namespace std;

int main()
{
	int n, total = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		total += i;
	cout << total;
	return 0;
}