#include <iostream>
using namespace std;

void say(string s);
int main()
{


    cout << "Greetings!\n";
    cout << "Hello World!\n";
    say("hi");


    return 0;
}

void say(string s)
{
    cout << s << endl;
}