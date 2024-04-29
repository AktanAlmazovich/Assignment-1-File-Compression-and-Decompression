#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string compress(const string& text) {
    string compressed = "";
    int count = 1;
    for (int i = 1; i < text.length(); ++i) {
        if (text[i] == text[i - 1]) {
            count++;
        } else {
            compressed += to_string(count) + text[i - 1];
            count = 1;
        }
    }
    compressed += to_string(count) + text[text.length() - 1];
    return compressed;
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open input.txt\n";
        return 1;
    }

    string originalText((istreambuf_iterator<char>(inputFile)),
                        (istreambuf_iterator<char>()));
    inputFile.close();

    string compressedText = compress(originalText);

    ofstream outputFile("compressed.txt");
    if (!outputFile.is_open()) {
        cerr << "Error: Unable to open compressed.txt for writing\n";
        return 1;
    }

    outputFile << compressedText;
    outputFile.close();

    cout << "Text compressed and saved to: compressed.txt\n";

    return 0;
}
