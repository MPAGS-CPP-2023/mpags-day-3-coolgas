//! Unit Tests for MPAGSCipher CaesarCipher interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"
#include "CipherMode.hpp"

#include <vector>

TEST_CASE("Encryption works fine", "[encryption]") {
    const std::vector<char> alphabet = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    CaesarCipher cipher_k5 =  CaesarCipher("5", alphabet);
    CipherMode mode {CipherMode::Encrypt};

    REQUIRE( cipher_k5.applyCipher("HELLOWORLD", mode) == "MJQQTBTWQI" );
}

TEST_CASE("Decryption works find", "[decryption]") {
    const std::vector<char> alphabet = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };

    CaesarCipher cipher_k5 =  CaesarCipher("5", alphabet);
    CipherMode mode {CipherMode::Decrypt};

    REQUIRE( cipher_k5.applyCipher("MJQQTBTWQI", mode) == "HELLOWORLD" );
}