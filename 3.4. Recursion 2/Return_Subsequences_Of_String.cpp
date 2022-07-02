#include<iostream>

using namespace std;

int subsequences(string input, string output[])
{

    // base condition
    if (input.empty())
    {
        output[0] = "";
        return 1;
    }

    // function call giving substring of input to subsequences to give all posible subsequences in output
    int size_of_output = subsequences(input.substr(1), output);

    // adding input string 1st element to all output array strings
    for (int i = 0; i < size_of_output; i++)
    {
        output[i + size_of_output] = input[0] + output[i];
    }

    return 2 * size_of_output; // return 2x size of output bcz in every function call size increases by 2
}

int main()
{
    string *output = new string[1000]; // string array of subsequences
    string input;                      // given string
    cout << "enter a string\n";
    // cin >> input;

    // for considering spaces in string
    getline(cin, input);

    int Size_of_output = subsequences(input, output); // function call and it return number of subsequences

    // print subsequences strings
    for (int i = 0; i < Size_of_output; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}