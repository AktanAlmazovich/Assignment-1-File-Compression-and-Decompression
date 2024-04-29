#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string decompress(const string& compressed) {
    string decompressed = "";
    for (int i = 0; i < compressed.length(); i += 2) {
        int count = compressed[i] - '0'; // Convert char to integer
        char character = compressed[i + 1];
        for (int j = 0; j < count; ++j) {
            decompressed += character;
        }
    }
    return decompressed;
}

int main() {
    ifstream inputFile("compressed.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open compressed.txt\n";
        return 1;
    }

    string compressedText((istreambuf_iterator<char>(inputFile)),
                                (istreambuf_iterator<char>()));
    inputFile.close();

    string decompressedText = decompress(compressedText);

    ofstream outputFile("decompressed.txt");
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to open decompressed.txt for writing\n";
        return 1;
    }

    outputFile << decompressedText;
    outputFile.close();

    cout << "Text decompressed and saved to: decompressed.txt\n";

    return 0;
}
