#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find('a', pos)) != -1)
	{
		pos++;
		if (((s[pos - 1] == 'a' || s[pos - 1] == 'b' || s[pos - 1] == 'c')) && ((s[pos] == 'a' || s[pos] == 'b' || s[pos] == 'c'))
			&& ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c')))
			k++;
	}
	pos = 0;

	while ((pos = s.find('b', pos)) != -1)

	{
		pos ++;
		if (((s[pos - 1] == 'a' || s[pos - 1] == 'b' || s[pos - 1] == 'c')) && ((s[pos] == 'a' || s[pos] == 'b' || s[pos] == 'c'))
			&& ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c')))
			k++;
	}

	pos = 0;

	while ((pos = s.find('c', pos)) != -1)

	{
		pos++;
		if (((s[pos - 1] == 'a' || s[pos - 1] == 'b' || s[pos - 1] == 'c')) && ((s[pos] == 'a' || s[pos] == 'b' || s[pos] == 'c'))
			&& ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c')))
			k++;
	}

	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('a', pos)) != -1)
	{
		if ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c'))
			if ((s[pos + 2] == 'a' || s[pos + 2] == 'b' || s[pos + 2] == 'c'))
				s.replace(pos, 3, "**");

		while ((pos = s.find('b', pos)) != -1)
		{
			if ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c'))
				if ((s[pos + 2] == 'a' || s[pos + 2] == 'b' || s[pos + 2] == 'c'))
					s.replace(pos, 3, "**");

			while ((pos = s.find('c', pos)) != -1)
			{
				if ((s[pos + 1] == 'a' || s[pos + 1] == 'b' || s[pos + 1] == 'c'))
					if ((s[pos + 2] == 'a' || s[pos + 2] == 'b' || s[pos + 2] == 'c'))
						s.replace(pos, 3, "**");
			}
		}

	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of 'a', 'b', 'c'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
		return 0;
}