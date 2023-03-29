#ifndef INVALIDINPUTEXCEPTION_H
#define INVALIDINPUTEXCEPTION_H
#include <exception>
#include <string>
using namespace std;

class invalidInputException : public exception
{
public:
    invalidInputException();
    invalidInputException(const string& message);
    virtual const char* what();
    ~invalidInputException();

private:
    string message;
};

#endif // INVALIDINPUTEXCEPTION_H
