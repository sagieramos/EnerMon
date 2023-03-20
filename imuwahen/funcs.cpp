#include "imuwahen.h"
#include <sstream>
#include <vector>

// Check if a JSON string is a string array
bool isStringArray(const std::string& jsonStr) {
  std::stringstream ss(jsonStr);
  std::string token;

  // Check if the first token is a '[' character
  std::getline(ss, token, ',');
  if (token.size() > 0 && token[0] == '[') {
    // Iterate through the remaining tokens and check if they are strings
    while (std::getline(ss, token, ',')) {
      // Check if the token starts and ends with a double quote
      if (token.size() > 1 && token[0] == '"' && token[token.size()-1] == '"') {
        // Token is a string
        continue;
      } else {
        // Token is not a string, so the JSON is not a string array
        return false;
      }
    }

    // All tokens are strings, so the JSON is a string array
    return true;
  }

  // JSON is not a string array
  return false;
}
