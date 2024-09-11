#include <iostream>

using namespace std;

int int_type = 7;
float float_type = 3.6;
double double_type = 3.1415;
bool bool_type = false;
char char_type = 'a';
string string_type = "this is a string";

int main()
{
    cout << "int_type is " << int_type << " and has the size of " << sizeof(int_type) << " bytes." << endl;
    cout << "float_type is " << float_type << " and has the size of " << sizeof(float_type) << " bytes." << endl;
    cout << "bool_type is " << bool_type << " and has the size of " << sizeof(bool_type) << " bytes." << endl;
    cout << "char_type is " << char_type << " and has the size of " << sizeof(char_type) << " bytes." << endl;
    cout << "string_type is \"" << string_type << "\" and has the size of " << sizeof(string_type) << " bytes." << endl;
    cout << "double_type is " << double_type << " and has the size of " << sizeof(double_type) << " bytes." << endl;

    return 0;
}