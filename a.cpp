/*
Sabuj Jana / @greenindia
https://www.janasabuj.github.io
*/
#include <bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long int
#define double long double
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
#define endl "\n"
void print1d(const vector<int>& vec) {for (auto val : vec) {cout << val << " ";} cout << endl;}
void print2d(const vector<vector<int>>& vec) {for (auto row : vec) {for (auto val : row) {cout << val << " ";} cout << endl;}}
const int N = 1e5 + 7;
vi arr;
 
void solve() {
	int n;
	cin >> n;
	vi arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	// print1d(arr);
	int ans = 0;
	int prev_r = -1;
	for (int i = 0; i < n;) {
		int l = i;
		int r = upper_bound(arr.begin(), arr.end(), arr[l] + 2) - arr.begin();
		r--;
		// cout << "," << r << endl;
		int x = r - l + 1;
		int top = prev_r - l + 1;
		int sub = ((top * (top - 1) / 2) * (top - 2)) / 3;
		if (i == 0)
			sub = 0;
		if (x >= 3)
			ans += max(0LL, ((x * (x - 1) / 2) * (x - 2)) / 3 - sub);
		// cout << i << " " << ans << endl;
		int val = arr[l];
		while (arr[i] == val)
			i++;
		prev_r = r;
	}
 
	cout << ans << endl;
}
 
signed main() {
	crap;
 
	int tc = 1;
	// cin >> tc;
	for (int i = 0; i < tc; i++) {
		solve();
	}
 
	return 0;
}