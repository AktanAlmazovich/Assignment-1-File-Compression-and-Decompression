# Run-Length Encoding (RLE) Compression and Decompression

## Overview
This project implements a simple C++ program to perform Run-Length Encoding (RLE) compression and decompression. RLE is a basic form of data compression where consecutive data elements that are the same are replaced with a count and a single instance of the element.

## Compression Algorithm
The compression algorithm works by scanning the input text and replacing consecutive identical characters with a count of the repeated character and the character itself. For example, the string "AAAABBBCCDAA" would be compressed to "4A3B2C1D2A".

## Decompression Algorithm
The decompression algorithm works by reversing the compression process. It reads the compressed text, interprets the count and character pairs, and reconstructs the original text by repeating each character the specified number of times.

## Major Functions
- `compress(text)`: This function takes a string `text` as input and returns the compressed version of the text using the RLE algorithm.
- `decompress(compressed)`: This function takes a compressed string `compressed` as input and returns the decompressed version of the text.

## Implementation Details
- The program reads the input text from a file named `input.txt`.
- After compression, the compressed text is saved to a file named `compressed.txt`.
- For decompression, the program reads the compressed text from `compressed.txt` and writes the decompressed text to a file named `decompressed.txt`.
- Both compression and decompression programs assume that the input text is ASCII encoded.

## Usage
### Compression
1. Ensure that you have a text file named `input.txt` containing the text you want to compress.
2. Run the compression program: `compress.cpp`
3. The compressed text will be saved to `compressed.txt`.

### Decompression
1. Ensure that you have the compressed text in a file named `compressed.txt`.
2. Run the decompression program: `decompress.cpp`
4. The decompressed text will be saved to `decompressed.txt`.

## Author
Created by Aktan Zhusupbekov

