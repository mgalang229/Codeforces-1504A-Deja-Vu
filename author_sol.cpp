#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		bool checker = true;
		// check if the characters in the string are all 'a'
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] != 'a') {
				checker = false;
				break;
			}
		}
		// there is only one possible case wherein the answer would be "NO"
		// and that is if all the letters are 'a'
		if (checker) {
			cout << "NO\n";
			continue;
		}
		// otherwise, it will always be true
		auto CheckPalindrome = [&](string temp) {
			for (int i = 0; i < (int) temp.size() / 2; i++) {
				if (temp[i] != temp[(int) temp.size() - 1 - i]) {
					return false;
				}
			}
			return true;
		};
		// check if it becomes a palindrome if you concatenate 'a' in the first position
		if (!CheckPalindrome('a' + s)) {
			// if it is not a palindrome, then print "YES" together with the new string
			// wherein the letter 'a' is in the beginning
			cout << "YES\n" << ('a' + s);
		} else {
			// otherwise, print "YES" together with the new stringg wherein
			// the letter 'a' is in the last
			cout << "YES\n" << (s + 'a');
		}
		cout << '\n';
	}
	return 0;
}
