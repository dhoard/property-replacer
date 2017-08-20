# Project

## property-replacer

property-replacer is a small C++ program that loads a Java formatted properties file, reads stdin, replacing all ...

`#{property.name}`

... variables with values from the properties file, sending the output to stdout

# Usage

`property-replacer configuration.properties < file.txt.template > file.txt`

# Platforms

This has only been built / tested on Ubuntu 16.04.03 LTS using g++, but should be easily ported. 

# Known Issues

DO NOT CONSIDER THIS A 100% MATCH WITH REGARDS TO JAVA PROPERTIES FILE HANDLING ... IT IS NOT

keys with spaces will be trimmed

values with spaces will be left trimmed, but trailing spaces are not trimmed (per Java's implementation)

The code to parse and load the Java formatted properties file doesn't handle ...

unicode escape sequences (`\u003d')

escaped equals (`\\=`)

multi-line values

# Building the code

Clone the repo and run ...

    ./build.sh

# License

MIT / https://github.com/dhoard/property-replacer/blob/master/LICENSE

# Credits

Fredy Wijaya / fredyw / https://github.com/fredyw/cpp-properties / properties parsing code
