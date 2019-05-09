// Class splitstring which adds method split()

// Use the following class with the split function to aid in splitting a csv string 


#include <string>
#include <vector>
#include <iostream>
using namespace std;


class splitstring : public string {
    vector<string> flds;
public:
    splitstring(const char *s) : string(s) { };
    vector<string>& split(char delim, int rep=0);
};

// split: receives a char delimiter; returns a vector of strings
// By default ignores repeated delimiters, unless argument rep == 1.
vector<string>& splitstring::split(char delim, int rep) {
    if (!flds.empty()) flds.clear();  // empty vector if necessary
    string work = data();
    string buf = "";
    int i = 0;
    while (i < work.length()) {
        if (work[i] != delim)
            buf += work[i];
        else if (rep == 1) {
            flds.push_back(buf);
            buf = "";
        } else if (buf.length() > 0) {
            flds.push_back(buf);
            buf = "";
        }
        i++;
    }
    if (!buf.empty())
        flds.push_back(buf);
    return flds;
}


main()
{
    // we define a string
    splitstring s("1,John,Doe,4");
    cout << s << endl;

    // splits and displays the vector of strings
    vector<string> flds = s.split(',');
    for (int i = 0; i < flds.size(); i++)
        cout << i << " => " << flds[i] << endl;

    

}
