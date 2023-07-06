
#include "io.h"

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


void task1()
{
    string x;
    getline(cin, x);
    cout<<x<<"\n";
    vector<string> values=StrSplit(x,' ');

    vector<int> values_int;
    for (auto i : values) 
    {
        values_int.push_back(stoi(i));  
    }
    int sum=0;
    for (auto i :values_int) 
    {
        sum=sum+i;
    }
    cout<<sum;
}