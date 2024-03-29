#ifndef LABA_2_FUNCTIONFORMAP_H
#define LABA_2_FUNCTIONFORMAP_H

template <typename T> T multiply(T a, T b){
    return a * b;
}

template <> std::string multiply(std::string a, std::string b){
    return a + b;
}

template <typename T> T division(T a, T b){
    return a / b;
}

template <> std::string division(std::string a, std::string b){
    return a + b;
}

template <typename T> T addition(T a, T b){
    return a + b;
}

template <> std::string addition(std::string a, std::string b){
    return a + b;
}

template <typename T> T subtraction(T a, T b){
    return a - b;
}

template <> std::string subtraction(std::string a, std::string b){
    return a + b;
}

#endif //LABA_2_FUNCTIONFORMAP_H
