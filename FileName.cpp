#include<iostream>
#include<string>
using namespace std;
char digital[] = {
	'0','1','2','3','4','5','6','7','8','9' };
char operate[] = {
	'+','-','*','/'
};
int main() {
	string s;
	std::cout << "input s" << endl;
	cin >> s;
	string a;
	for (size_t i = 0; i < s.size(); i++) {
		int flag = 0;
		for (int j = 0; j < 10; j++) {
			if (s[i] == digital[j]) {
				a.push_back(s[i]);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			for (int j = 0; j < 4; j++) {
				if (s[i] == operate[j]) {
					if (a.size() < 2) {
						std::cout << "the string is wrong" << endl;
						return 0;
					}
					else {
						if (s[i] == '+') {
							int b;
							b = (a[a.size() - 1] - '0') + (a[a.size() - 2] - '0');
							a.pop_back();
							a.pop_back();
							a.push_back(b+'0');
						}
						if (s[i] == '-') {
							int b;
							b = (a[a.size() - 2] - '0') - (a[a.size() - 1] - '0');
							a.pop_back();
							a.pop_back();
							a.push_back(b + '0');
						}
						if (s[i] == '*') {
							int b;
							b = (a[a.size() - 1] - '0') * (a[a.size() - 2] - '0');
							a.pop_back();
							a.pop_back();
							a.push_back(b + '0');
						}
						if (s[i] == '/') {
							int b;
							if (a[a.size() - 1] == '0') {
								std::cout << "³ýÊýÎªÁã" << endl;
								return 0;
							}
							b = (a[a.size() - 2] - '0') / (a[a.size() - 1] - '0');
							a.pop_back();
							a.pop_back();
							a.push_back(b + '0');
						}
					}
				}
		}
		
		}
		
	}
	std::cout << "output the result" << endl;
	std::cout << a << endl;
	return 0;
}