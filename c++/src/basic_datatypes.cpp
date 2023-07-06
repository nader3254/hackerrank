
#include "basic_datatypes.h"



vector<string> StrSplit(string input,char delimeter)
{
    vector<string> strings;
    istringstream f(input);
    string s;    
    while (getline(f, s, delimeter)) {
       // cout << s << endl;
        strings.push_back(s);
    }
    return strings;

}


void task2()
{
    string x;
    getline(cin,x);
    vector<string> op=StrSplit(x,' ');
    for (auto i : op)
    {
        cout<<i<<"/n";
    }
    

}