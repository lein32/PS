#include <iostream>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	while (T--) {
		int A, B;
		cin >> A >> B;
		cout << A + B << '\n';
	}
	return 0;
}