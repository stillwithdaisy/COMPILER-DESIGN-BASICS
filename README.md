# COMPILER-DESIGN-BASICS

*COMPANY* : CODTECH IT SOLUTIONS

*NAME* : DEBOPRIYA DAS

*INTERN ID* : CT04DL590

*DOMAIN* : C PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : NEELA SANTHOSH KUMAR

## Simple Lexical Analyzer in C
This project is a basic implementation of a Lexical Analyzer using the C programming language. It reads a source code file and performs lexical analysis by identifying and classifying tokens into three main categories: keywords, operators, and identifiers. The project was developed and executed using Visual Studio Code, leveraging the C/C++ extension and Sharp C compiler setup to compile and run the code efficiently.

Lexical analysis is the first phase in the compilation process. It involves reading the source code character by character and grouping sequences of characters into meaningful symbols, known as tokens. These tokens serve as the input for the syntax analysis stage in a compiler. In this project, the lexical analyzer reads from a file containing simple C code and outputs the recognized tokens with their classifications.

The analyzer identifies keywords, which are predefined reserved words in C like int, float, if, else, etc. These words have special meaning in the language and cannot be used for naming variables or functions. A comparison is made against a predefined list of C keywords to check if a given word is a keyword.

The program also detects operators. These include arithmetic (+, -, *, /), relational (==, !=, <, >), and assignment (=) operators. The analyzer processes characters to determine if they match any valid operator symbols and also checks for compound operators like == or != by looking ahead to the next character when necessary.

Any word that is not a keyword and starts with an alphabetic character or underscore is considered an identifier. Identifiers typically represent variable names, function names, or user-defined symbols. The program checks for valid characters in an identifier and confirms that it doesn't match a keyword before classifying it accordingly.

To implement this functionality, basic C libraries such as stdio.h, string.h, and ctype.h are used. The program uses file input/output operations to read the source file and string manipulation functions to process and analyze each token. A buffer stores sequences of characters until a delimiter (such as a space or operator) is encountered, at which point the buffer is analyzed and classified.

The project was developed in Visual Studio Code, a lightweight and powerful code editor. The C/C++ extension and Sharp C compiler provided the necessary tools to compile and execute the program directly within the editor, streamlining the development process.

This lexical analyzer project demonstrates a fundamental understanding of compiler design and low-level text processing in C. Although simple in its current form, it lays the groundwork for more advanced compiler features like symbol table creation, error detection, and syntax analysis. Future improvements could include the identification of constants, delimiters, and string literals, as well as support for comments and better handling of numeric tokens.

In summary, this project showcases a practical implementation of lexical analysis using C and highlights the process of tokenizing input source code for use in compiler front-ends. It provides hands-on experience with language processing and compiler construction principles.

*OUTPUT* : ![Image](https://github.com/user-attachments/assets/c9545289-3681-4cf8-aa25-1f59962696f9)
           ![Image](https://github.com/user-attachments/assets/2116295b-521d-4a17-84a3-3c4b4c25a418)
