# Morse Code Converter

A simple C++ program to convert text to Morse code and decode Morse code back to text.

## Features
- Converts English text to Morse code.
- Decodes Morse code back to English.
- Supports standard Morse code mappings.
- User-friendly console-based interface.

## How It Works
1. The program initializes a mapping of letters and numbers to their corresponding Morse code.
2. It provides functions to:
   - Encode text into Morse code.
   - Decode Morse code back into text.
3. Users input text or Morse code, and the program processes the input accordingly.

## Usage
1. Compile the program using a C++ compiler:
   ```sh
   g++ morse_converter.cpp -o morse_converter
   ```
2. Run the executable:
   ```sh
   ./morse_converter
   ```
3. Follow on-screen instructions to enter text or Morse code.

## Example
### Encoding:
**Input:** `HELLO`

**Output:** `.... . .-.. .-.. ---`

### Decoding:
**Input:** `.... . .-.. .-.. ---`

**Output:** `HELLO`

## Requirements
- C++ Compiler (GCC, Clang, MSVC, etc.)

## Future Enhancements
- Add support for punctuation marks.
- Improve error handling for invalid Morse code inputs.
- Implement a GUI version.

## License
This project is open-source and available under the MIT License.



