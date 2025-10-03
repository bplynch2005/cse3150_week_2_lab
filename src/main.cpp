#include <iostream>
#include "parser.h"
#include <string>

using StringUtils::parseName, StringUtils::getUsername;
using std::string, std::cout, std::cin, std::endl, std::getline;


int main(){
	string tmpName;

	cout<< "Enter Name:" << endl;
	getline(cin, tmpName);
	const string fullName = tmpName;
	size_t indexSpace = tmpName.find(" ");
	string* firstName = new string(indexSpace+1, '\0');
	string* lastName = new string(fullName.size()-indexSpace, '\0');
	parseName(fullName, firstName, lastName);
	

	string tmpEmail;
	string userName;

	cout<< "Enter Username:"<< endl;
	getline(cin, tmpEmail);
	const string email = tmpEmail;
	userName = getUsername(email);
	
	cout << "FirstName:" << *firstName << endl;
	cout << "LastName:" << *lastName << endl;
	cout << "UserName:" << userName << endl;

	delete firstName; firstName = nullptr;
	delete lastName; lastName = nullptr;

	return 0;
}
