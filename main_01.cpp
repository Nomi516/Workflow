#include <iostream>
#include <cstdint> // Required for fixed-width integers like uint8_t and uint16_t
#include <iomanip>

int main() {
    // --- Method 1: Combining two 8-bit numbers into one 16-bit number ---
    uint8_t highByte = 0xAB; // High 8 bits (Most Significant Byte)
    uint8_t lowByte  = 0xCD; // Low 8 bits (Least Significant Byte)

    // Shift highByte left by 8 positions, then combine it with lowByte
    uint16_t combined16 = ((uint16_t)highByte << 8) | lowByte;


    // --- Method 2: Extending a single 8-bit value to a 16-bit type ---
    uint8_t singleByte = 0x5F;
    
    // Explicit type casting ensures safe zero-extension to 16 bits
    uint16_t extended16 = (uint16_t)singleByte;


    // --- Output results ---
    std::cout << std::hex << std::uppercase;
    std::cout << "Method 1 (Combined): 0x" << combined16 << " (Expected: 0xABCD)\n";
    std::cout << "Method 2 (Extended): 0x" << extended16 << " (Expected: 0x005F)\n";

    return 0;
}

