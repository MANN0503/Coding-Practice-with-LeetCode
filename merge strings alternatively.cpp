#include<bits/stdc++.h>
using namespace std;
string merge(string s1, string s2)
{
	string result = "";
	for (int i = 0; i < s1.length() ||
					i < s2.length(); i++)
	{
		if (i < s1.length())
			result += s1[i];
		
		if (i < s2.length())
			result += s2[i];	
	}
	return result;				
}

int main()
{
	string s1;
	cout << "Type your string: ";
	cin >> s1;
	
	string s2;
	cout << "Type your second string: ";
	cin >> s2;
	
	cout << merge(s1, s2);
	
	return 0;
}
