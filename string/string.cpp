#include "string.h"
#include <cstring>
#include <cassert>

inline String::String()
{
    _size = 0;
    _string = 0;
}
inline String::String(const char *str)
{
    if( !str )
    {
        _size = 0;
        _string = 0;
    }else{
        _size = strlen(str);
        _string = new char[_size +1];
        strcpy( _string,str);
    }
}

inline String::String(const String &rhs)
{
    _size = rhs._size;
    if( !rhs._string )
        _string = 0;
    else{
        _string = new char [ _size + 1 ];
        strcpy( _string, rhs._string);
    }
}

bool String::operator ==(const String& rhs)
{
    if(_size != rhs.size())
        return false;
    return strcmp( _string, rhs._string )? false:true;

}
bool String::operator==(const char *s)
{
    return strcmp(_string, s)?false : true;
}

inline String& String::operator =(const char *s)
{
    if(!s){
        _size = 0;
        delete [] _string;
        _string = 0;
    }else{
        _size = strlen(s);
        _string = new char [_size +1];
        strcpy(_string,s);
    }
    return *this;
}
inline String& String::operator =(const String &rhs)
{
    if( this != rhs)
    {
        delete [] _string;
        _size = rhs._size;
        if(!rhs._string)
            _string = 0;
        else{
            _string = new char [_size +1 ];
            strcpy( _string,rhs._string);
        }
    }
    return *this;
}

inline char& String::operator [](int elem)
{
    assert(elem >= 0 && elem < _size);
    return _string[elem];
}
#include <iomanip>

inline istream& operator >>(istream &io, String &s)
{
    const int limit_string_size = 4096;
    char inBuf[limit_string_size];

    io>>setw(limit_string_size) >> inBuf;
    s = inBuf;
    return io;
}
inline ostream& operator <<(ostream& os,String &s)
{
    return os << s.c_str();
}

inline String::~String()
{
    delete [] _string;
}


