#ifndef LABA_2_ERROR_CPP
#define LABA_2_ERROR_CPP
#include "Error.h"

const char *ERROR[] = {"1", "2","3","4","5","6"};

Error::Error(std::string _error)
    :error(std::move(_error))
    {
    };

std::string Error::getError(){
        return error.c_str();
};

#endif //LABA_2_ERROR_CPP






