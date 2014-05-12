#ifndef STRING_H
#define STRING_H

#include <iostream>


using namespace std;
class String;
istream& operator>>(istream&, String& );
ostream& operator<<(ostream&, const String& );


class String
{
public:
    String();
    String(const char* str);
    String(const String& );

    ~String();

    String& operator=(const String& );
    String& operator=(const char* );

    bool operator==(const String& );
    bool operator==(const char* );

    char& operator[](int);

    int size(){return _size; }
    char *c_str(){return _string; }

private:
    int _size;
    char *_string;
};

#endif // STRING_H
