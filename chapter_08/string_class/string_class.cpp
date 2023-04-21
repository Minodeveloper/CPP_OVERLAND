// string_class

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Minoshi";
    string lname = " mewmew908";
    string fullname = name + lname;
    fullname[0] = '-';
    cout << fullname << endl;
    cout << fullname[4] << endl;
    
}

