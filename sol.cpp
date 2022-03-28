//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

void perform_test() {
	string s;
	cin >> s;
	char c;
	cin >> c;
	bool checker = false;
	int n = s.size();
	for(int i = 0; i < n; i++) {
		if(s[i] == c) {
			// for every occurrence of c in s, check the number of characters
			// in its right and left side but NOT including c itself
			int first_half = i;
			int second_half = n - i - 1;
			if(first_half % 2 == 0 && second_half % 2 == 0) {
				checker = true;
				break;
			}
		}
	}
	cout << (checker ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
