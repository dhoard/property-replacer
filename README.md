# property-replacer

property-replacer is a small C++ program that loads a Java formatted properties file, reads stdin, replacing any `#{property.name}` variables with values from the properties file

# Platforms

This has only been built / tested on Ubuntu 16.04.03 LTS

# Known Issues

The code to parse and load the Java formatted properties file doesn't hand
unicode escape sequences (`\u003d') or escaped equals (`\\=`), etc.

# Building the code

Clone the repo and the run ...

    ./build.sh

# License

MIT

# Credits

Fredy Wijaya / fredyw / https://github.com/fredyw/cpp-properties
