#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include "CipherMode.hpp"

#include <string>
#include <vector>

class CaesarCipher
{
public:
    explicit CaesarCipher(const std::size_t key, const std::vector<char> alphabet);
    explicit CaesarCipher(const std::string key, const std::vector<char> alphabet);
    std::string applyCipher(const std::string& inputText, CipherMode& mode);
private:
    std::size_t key_{0};
    const std::vector<char> alphabet_;
    const std::size_t alphabetSize_ {alphabet_.size()};
};

#endif

