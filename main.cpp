/*
    Name: Teke Byas
    Email: tekeb6687@student.vvc.edu
    Date of Creation: Tuesday, October 16, 2018
    Description:
*/
#include<iostream>
#include<string>

using namespace std;

int a_in_string(string s);
bool is_a(char c);

int main()
{
    string s = "";

    cout << endl; // white space

    cout << "Please input a string of A's (case does not matter):  ";
    getline(cin,s);

    int count = a_in_string(s);

    cout << endl; // white space

    cout << "There are " << count << " A's in your string." << endl;

    cout << endl; // white space

    return 0;
}

/*
    Will count how many A's or a's are in a string
    @param s the string the user entered
    @return how many A's or a's were found
*/
int a_in_string(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(is_a(s.at(i)))
            count++;
    }
    return count;
}

/*
    Will check if the character received is the character expected
    @param c a single character to be checked
    @return true or false based on the state of the character
*/
bool is_a(char c)
{
    if(c == 'a' || c == 'A')
        return true;
    return false;
}
