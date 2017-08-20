#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "PropertiesParser.h"

using namespace std;
using namespace cppproperties;

std::string
replaceAll( std::string const& original, std::string const& from, std::string const& to )
{
    std::string results;
    std::string::const_iterator end = original.end();
    std::string::const_iterator current = original.begin();
    std::string::const_iterator next = std::search( current, end, from.begin(), from.end() );
    while ( next != end ) {
        results.append( current, next );
        results.append( to );
        current = next + from.size();
        next = std::search( current, end, from.begin(), from.end() );
    }
    results.append( current, next );
    return results;
}

int main(int argc, char* argv[]) {
  if (2 != argc) {
    return 1;
  }

  string filename = argv[1];

  // Read the properties
  Properties properties = PropertiesParser::Read(filename);
  vector<string> names = properties.GetPropertyNames();

  // Read standard in storing it as a string
  std::string content;
  char c;
  while (cin.get(c))
  {
    content += c;
  }

  for (vector<string>::const_iterator i = names.begin(); i != names.end(); ++i) {
    string key = *i;
    string value = properties.GetProperty(key);
//    content = replaceAll(content, "${" + key + "}", value);
//    content = replaceAll(content, "$/" + key + "/", value);
     content = replaceAll(content, "#{" + key + "}", value);
  }

  // write the content string to standard out
  cout << content;

  return 0;
}
