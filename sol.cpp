#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// if 'n' is less than or equal to 2, then the answer will always be equal to 1
		long long ans = 1;
		if (n > 2) {
			// otherwise, we need to use the formula for finding sum of first 'n - 2' multiples
			// of 2 ((n - 2) was used because {1, 0} should be the first 2 elements of the array)
			ans += (2 * ((n - 2) * (n - 2 + 1) / 2));
		}
		cout << ans << '\n';
	}
	return 0;
}
