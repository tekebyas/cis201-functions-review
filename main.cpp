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
int main()
{
    string s = "";

    cout << "Please input a string of A's (case does not matter):  ";
    cin >> s;

    int count = a_in_string(s);

    cout << "There are " << count << " A's in your string." << endl;

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
        if(s.at(i) == 'a' || s.at(i) == 'A')
        count++;
    }
    return count;
}
