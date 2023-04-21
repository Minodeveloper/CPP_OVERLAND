// string_c

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[200];
    char age[23];
    char address[500];

    cout << "Enter your name: " << endl;
    cin.getline(str, 100);
    cout << "Enter your age: " << endl;
    cin.getline(age, 200);

    strcpy(address, "Muah name is ");
    strcat(address, str);
    strcat(address, "\n");
    strcat(address,"I amh ");
    strcat(address, age);
    strcat(address, " years old.\n");



    cout << endl;
    cout << address << endl << strlen(address) << " characters" << endl;
}

