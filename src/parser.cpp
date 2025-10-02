#include <iostream>
#include "parser.h"
#include <string>

using std::string, std::cout, std::endl;
namespace StringUtils{
	void parseName(const string& fullName, string* firstName, string* lastName){
		size_t indexSpace = fullName.find(" ");
		for(size_t i = 0; i < fullName.size(); ++i){
			if(i < indexSpace){
				(*firstName)[i] = fullName[i];
			}
			else if(i > indexSpace){
				(*lastName)[i - indexSpace - 1] = fullName[i];
			}
		}
	}	
	
	string getUsername(const string& email){
		size_t indexAt = email.find('@');
		string username = email.substr(0, indexAt);
		return username;
	}
}
