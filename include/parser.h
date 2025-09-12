#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <string>

using std::string;

namespace StringUtils{
	void parseName(const string& fullName, string* firstName, string* lastName);
	string getUsername(const string& email);
}

#endif

