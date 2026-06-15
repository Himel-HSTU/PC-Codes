#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_magical(string n) {
	for (int i = 0; i < (int)n.size(); i++)
		if (n[i] != '1' && n[i] != '4')
			return false;
	if (n[0] == '4')
		return false;
	if (n.find("444") != n.npos)
		return false;
	return true;
}
int main() {
	string n;
	cin >> n;

	if (is_magical(n))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
/*
320A - Magic Numbers
string S;
    cin >> S;
    regex p("^(1|14|144)+$");
    if (regex_match(S, p))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
// C++ program to demonstrate working of regex_match()
#include <iostream>
#include <regex>
 
using namespace std;
int main()
{
    string a = "GeeksForGeeks";
 
    // Here b is an object of regex (regular expression)
    regex b("(Geek)(.*)"); // Geek followed by any character
 
    // regex_match function matches string a against regex b
    if ( regex_match(a, b) )
        cout << "String 'a' matches regular expression 'b' \n";
 
    // regex_match function for matching a range in string 
    // against regex b
    if ( regex_match(a.begin(), a.end(), b) )
        cout << "String 'a' matches with regular expression "
                "'b' in the range from 0 to string end\n";
 
    return 0;
}*/