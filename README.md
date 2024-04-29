# Assignment-1-File-Compression-and-Decompression

# Run-Length Encoding (RLE) Compression Program

## Overview
This C++ program demonstrates a simple implementation of Run-Length Encoding (RLE) compression. RLE is a basic form of data compression where consecutive data elements that are the same are replaced with a count and a single instance of the element.

## Features
- Reads input text from `input.txt` file.
- Compresses the input text using the RLE algorithm.
- Writes the compressed text to `compressed.txt` file.
- Decompression program is available to decompress the compressed text.

## Usage
1. Make sure you have a text file named `input.txt` containing the text you want to compress.
2. Compile the program using a C++ compiler:
    ```
    g++ compress.cpp -o compress
    ```
3. Run the program:
    ```
    ./compress
    ```
4. The compressed text will be saved to a file named `compressed.txt`.

## Decompression
To decompress the compressed text:
1. Make sure you have the compressed text in a file named `compressed.txt`.
2. Compile the decompression program using a C++ compiler:
    ```
    g++ decompress.cpp -o decompress
    ```
3. Run the decompression program:
    ```
    ./decompress
    ```
4. The decompressed text will be saved to a file named `decompressed.txt`.

## Notes
- Both the compression and decompression programs assume that the input text is ASCII encoded.
- Ensure that the input text file (`input.txt`) is in the same directory as the program.
- The compressed text will be saved to a file named `compressed.txt`.
- The decompressed text will be saved to a file named `decompressed.txt`.

## Author
Created by [Your Name]

