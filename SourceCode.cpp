#include <iostream>

void GambarKotakASCII(int width, int height) {
    if (width < 2 || height < 2) {
        std::cout << "Ukuran kotak terlalu kecil." << std::endl;
        return;
    }

    // batasAtas
    std::cout << "+";
    for (int i = 0; i < width - 2; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    // barisTengah
    for (int i = 0; i < height - 2; ++i) {
        std::cout << "|";
        for (int j = 0; j < width - 2; ++j) {
            std::cout << " ";
        }
        std::cout << "|" << std::endl;
    }

    // batasBawah
    std::cout << "+";
    for (int i = 0; i < width - 2; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}

int main() {
    GambarKotakASCII(50, 10);
    return 0;
}