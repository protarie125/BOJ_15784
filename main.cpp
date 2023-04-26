#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, a, b;
	cin >> n >> a >> b;
	--a;
	--b;

	auto mat = vvi(n, vi(n));
	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < n; ++j) {
			cin >> mat[i][j];
		}
	}

	auto mx = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		if (mx < mat[i][b]) {
			mx = mat[i][b];
		}
	}
	for (auto j = 0; j < n; ++j) {
		if (mx < mat[a][j]) {
			mx = mat[a][j];
		}
	}

	cout << (mx == mat[a][b] ? "HAPPY" : "ANGRY");

	return 0;
}