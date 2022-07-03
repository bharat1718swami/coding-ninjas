#include <iostream>

using namespace std;

void subsequences(string input, string output)
{

    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    subsequences(input.substr(1), output);
    subsequences(input.substr(1), output + input[0]);
}

int main()
{
    string input, output = "";               // given string and output use for print
    cout << "enter a string\n";
    // cin >> input;

    // for considering spaces in string
    getline(cin, input);

    subsequences(input, output);

    return 0;
}