
#include "ifTask.h"

void task3()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    const vector<string> myStrNums={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if ((n>=1)&&(n<=9)) 
    {
        cout<<myStrNums[n];
    }
    else {
        cout<<"Greater than 9";
    }
    

    
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
