#include <iostream>
#include <string>
#include <vector>
#include "Parser.h"

using namespace std;

int main() {
	Parser *p = new Parser();
	for (const auto &s : p->getWords("Hello World!")) cout<<s<<endl;
	delete p;
	return 0;
}
