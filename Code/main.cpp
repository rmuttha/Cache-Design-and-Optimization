#include <iostream>
#include <cmath>

class Cache {
public:
    int cacheSize;        // Total cache size (in bytes)
    int blockSize;        // Block size (in bytes)
    int associativity;    // Associativity level (1 for direct-mapped, N for N-way set associative)
    int numSets;          // Number of sets in the cache
    
    Cache(int cSize, int bSize, int assoc) {
        cacheSize = cSize;
        blockSize = bSize;
        associativity = assoc;
        numSets = cacheSize / (blockSize * associativity);  // Calculate the number of sets
        
        std::cout << "Cache Parameters Defined:" << std::endl;
        std::cout << "Cache Size: " << cacheSize << " bytes" << std::endl;
        std::cout << "Block Size: " << blockSize << " bytes" << std::endl;
        std::cout << "Associativity: " << associativity << std::endl;
        std::cout << "Number of Sets: " << numSets << std::endl;
    }
};

int main() {
    // Define cache parameters
    int cacheSize = 1024;        // Example: 1024 bytes cache
    int blockSize = 16;          // Example: 16 bytes per block
    int associativity = 4;       // Example: 4-way set associative
    
    Cache cache(cacheSize, blockSize, associativity);
    
    return 0;
}
