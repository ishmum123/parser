//#define _GLIBCXX_USE_CXX11_ABI 0
#include <string>
#include <vector>
#include <sstream>

using namespace std;

typedef vector<string> vs;

class Parser {
public:
	double getResult(string s);
	vs getWords(string s);
};

double Parser::getResult(string s) {
	return 0;
}

vs Parser::getWords(string s) {
	istringstream iss(s);
	vs v;
	string s1;
	while (getline(iss, s1, ' ')) v.push_back(s1);
	return v;
}
