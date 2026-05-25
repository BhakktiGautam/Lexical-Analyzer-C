# Lexical Analyzer in C

This project is a basic Lexical Analyzer (Lexer) developed in C language. It scans source code input character-by-character and converts it into meaningful tokens such as keywords, identifiers, numbers, operators, and special symbols.

The project demonstrates fundamental concepts of Compiler Design including tokenization, lexical scanning, token classification, and multi-character operator handling.

## Features
- Keyword detection
- Identifier detection
- Number recognition
- Single-character operators
- Multi-character operators (`==`, `!=`, `<=`, `>=`, `++`, `--`)
- Special symbol recognition
- Character-by-character lexical scanning

## Technologies Used
- C Programming
- String Handling
- Character Processing
- Compiler Design Fundamentals

## Example Input

int total = 50;

if(total >= 10)
{
    total++;
}
Keyword: int
Identifier: total
Operator : =
Number: 50
Special Symbol : ;

Keyword: if
Special Symbol : (
Identifier: total
Operator : >=
Number: 10
Special Symbol : )

Special Symbol : {
Identifier: total
Operator : ++
Special Symbol : ;
Special Symbol : }

#**Concepts Learned**
Lexical Analysis
Tokenization
Parsing Fundamentals
String Manipulation in C
Compiler Front-End Basics
Future Improvements
File handling support
Comment detection
String literal recognition
Floating-point number support
Symbol table implementation
Error handling
