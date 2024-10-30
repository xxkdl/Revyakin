#include <iostream>
#include <string>

bool isValidString(const std::string& str) {
    size_t atPos = str.find('@');
    if (atPos == std::string::npos) return false;

    if (str[0] != '$') return false;
    for (size_t i = 1; i < atPos; ++i) {
        if (!((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= '0' && str[i] <= '9'))) {
            return false;
        }
    }

    if (str[atPos + 1] != '$') return false;
    for (size_t i = atPos + 2; i < str.length(); ++i) {
        if (!((str[i] >= 'A' && str[i] <= 'F') || (str[i] >= '0' && str[i] <= '9'))) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter the chain: ";
    std::cin >> input;

    if (isValidString(input)) {
        std::cout << "Chain is correct." << std::endl;
    }
    else {
        std::cout << "Error! Chain is not correct." << std::endl;
    }

    return 0;
}
