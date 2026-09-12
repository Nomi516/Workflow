#include <iostream>
#include <cstdint> // Required for fixed-width integer types like uint8_t and uint16_t
#include <iomanip> // For nice hex printing output

int main() {
    // 1. Define two 8-bit pieces of data (1 byte each)
    uint8_t highByte = 0xAB; // Binary: 10101011
    uint8_t lowByte  = 0xCD; // Binary: 11001101

    // 2. Convert and combine into a 16-bit integer
    // Cast to uint16_t first to prevent overflow/data loss during shifting
    uint16_t combined16 = (static_cast<uint16_t>(highByte) << 8) | lowByte;

    // Output the result
    std::cout << "High Byte: 0x" << std::hex << (int)highByte << "\n";
    std::cout << "Low Byte:  0x" << std::hex << (int)lowByte << "\n";
    std::cout << "Combined 16-bit Data: 0x" << std::hex << combined16 << "\n";

    return 0;
}

