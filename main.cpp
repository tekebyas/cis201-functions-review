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
int upper_a(string s);
int lower_a(string s);

int main()
{
    string s = "";

    cout << endl; // white space
    cout << "Please input a string of A's (case does not matter):  ";
    cin >> s;

    // sets each count
    int count_all = a_in_string(s);
    int count_upper = upper_a(s);
    int count_lower = lower_a(s);

    cout << endl; // white space

    cout << "There are "
         << count_upper
         << " A's and "
         << count_lower
         << " a's in your string."
         << endl
         << "There are "
         << count_all
         << " A's in total."
         << endl;

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
        if(s.at(i) == 'a' || s.at(i) == 'A')
        count++;
    }
    return count;
}

/*
    Will only count A's
    @param s the string the user entered
    @return only how many A's there are
*/
int upper_a(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == 'A')
        count++;
    }
    return count;
}

/*
    Will only count a's
    @param s the string the user entered
    @return only how many a's there are
*/
int lower_a(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == 'a')
        count++;
    }
    return count;
}
