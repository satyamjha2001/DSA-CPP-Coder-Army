#include <iostream>
#include <string>
using namespace std;

void inputString(string &str);
void bubbleSort(string &str);
void printString(const string &str);

int main()
{
    string inputStr;

    cout << "Enter a string: ";
    inputString(inputStr);

    bubbleSort(inputStr);

    cout << "Your sorted string: ";
    printString(inputStr);

    return 0;
}

void inputString(string &str)
{
    getline(cin, str);
}

void bubbleSort(string &str)
{
    int size = str.length();

    for (int round = 0; round < size - 1; round++)
    {
        for (int j = 0; j < size - round - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                swap(str[j], str[j + 1]);
            }
        }
    }
}

void printString(const string &str)
{
    cout << str << endl;
}
