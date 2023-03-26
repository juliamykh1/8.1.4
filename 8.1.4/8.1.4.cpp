#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

int countAppearences(string* source, const char* match)
{
    int count = 0;

    string::size_type i = source->find(match);

    while (i != string::npos)
    {
        ++count;
        i = source->find(match, i + strlen(match));
    }

    return count;
}

string* replace(string* source, const char* match, const char* replacer)
{
    const int matchLen = strlen(match);
    const int timesToReplace = countAppearences(source, match);

    for (int i = 0; i < timesToReplace; i++)
        source->replace(source->find(match), matchLen, replacer);

    return source;
}

int main()
{
    string str;

    cout << "Enter string:" << endl;
    cin >> str;

    const int numberOfPluses = countAppearences(&str, "+");
    const int numberOfMinuses = countAppearences(&str, "-");
    const int numberOfEquals = countAppearences(&str, "=");

    cout << endl;
    cout << "Number of pluses: " << numberOfPluses << endl;
    cout << "Number of minuses: " << numberOfMinuses << endl;
    cout << "Number of equals: " << numberOfEquals << endl;

    cout << endl;

    replace(&str, "++", "***");
    replace(&str, "--", "***");
    replace(&str, "==", "***");

    cout << str << endl;

    return 0;
}
