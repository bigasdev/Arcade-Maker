#include "CartReader.h"

std::string CartReader::read_cart(std::string cartName) {
  auto path{"carts/" + cartName + ".lua"};
  std::ifstream file{path};
  if (!file) {
    std::cerr << "Error: Could not open file " << path << std::endl;
    return "";
  }

  std::string cart{std::istreambuf_iterator<char>(file),
                   std::istreambuf_iterator<char>()};

  return cart;
}
