#include <iostream>
#include <string>

std::string runLengthEncode(const std::string& input) {
    std::string result;

    for (size_t i = 0; i < input.length(); ++i) {
        char currentChar = input[i];
        size_t count = 1;
        while (i + 1 < input.length() && input[i] == input[i + 1]) {
            ++count;
            ++i;
        }

        result += currentChar + std::to_string(count);
    }

    return result;
}

int main() {
    std::string original = "AAAABBBCCDAA";
    std::string encoded = runLengthEncode(original);

    std::cout << "Original: " << original << std::endl;
    std::cout << "Encoded:  " << encoded << std::endl;

    return 0;
}