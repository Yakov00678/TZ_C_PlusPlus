#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Replace(string Str);

int main()
{
	string Str = "0";

	cout << "Enter text: ";
	getline(cin, Str);

	Str = Replace(Str);

	cout << Str << endl;

}

string Replace(string Str)
{
	char Comparison = '0';
	string С = "";

	int n = size(Str);

	transform(Str.begin(), Str.end(), Str.begin(), tolower);

	char* End = new char[n];

	for (int i = 0; i < n; i++)
	{
		End[i] = '(';
	}


	for (int i = 0; i < n; i++)
	{
		char Comparison = Str[i];
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (Comparison == Str[j])
				{
					End[i] = ')';
					break;
				}
			}

		}

	}

	for (int i = 0; i < n; i++)
	{
		С += End[i];
	}

	return С;
}