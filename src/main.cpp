#include <fstream>
#include <iostream>

int main() {
    constexpr const char* output_path = "test.csv";

    std::ofstream output(output_path, std::ios::out | std::ios::trunc);
    if (!output.is_open()) {
        std::cerr << "Failed to open " << output_path << " for writing.\n";
        return 1;
    }

    output << "test" << ",3333";
    if (!output) {
        std::cerr << "Failed to write to " << output_path << ".\n";
        return 1;
    }

    output.close();
    if (!output) {
        std::cerr << "Failed to close " << output_path << ".\n";
        return 1;
    }

    std::cout << "Wrote test to " << output_path << ".\n";
    return 0;
}
