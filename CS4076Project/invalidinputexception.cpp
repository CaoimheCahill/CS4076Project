#include "invalidinputexception.h"

invalidInputException::invalidInputException(){}
invalidInputException::invalidInputException(const string& message) : message(message){}

const char* invalidInputException::what() {
    return message.c_str();
}
