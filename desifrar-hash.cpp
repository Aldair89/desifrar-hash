#include <iostream>
#include <string>
#include <cryptopp/sha.h>
#include <cryptopp/hex.h>
//para que funcione deves instalar cript++
std::string CalculateSHA256(const std::string& input)
{
    CryptoPP::SHA256 hash;
    std::string digest;

    CryptoPP::StringSource(input, true,
        new CryptoPP::HashFilter(hash,
            new CryptoPP::HexEncoder(
                new CryptoPP::StringSink(digest))));

    return digest;
}

bool CheckHashMatch(const std::string& input, const std::string& targetHash)
{
    std::string hash = CalculateSHA256(input);
    return (hash == targetHash);
}

int main()
{
    std::string targetHash = "5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8"; // Hash objetivo

    // Intentar descifrar el hash por fuerza bruta
    for (int i = 0; i <= 9999; ++i)
    {
        std::string input = std::to_string(i);
        if (CheckHashMatch(input, targetHash))
        {
            std::cout << "¡Hash descifrado! El valor original es: " << input << std::endl;
            return 0;
        }
    }

    std::cout << "No se encontró ninguna coincidencia para el hash objetivo." << std::endl;
    return 0;
}
