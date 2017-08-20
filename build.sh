#!/bin/sh

rm -Rf target
mkdir -p target
cd target
g++ -c ../src/*.cpp
g++ -o3 -o property-replacer *.o -static
strip property-replacer
cd ..
