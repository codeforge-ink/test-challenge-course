#include <iostream>
#include <string>
#include <vector>

std::string handle(const std::vector<std::string>& command) {
  if (command.empty()) {
    return "-ERR empty command\r\n";
  }
  if (command[0] == "PING") {
    return "+PONG\r\n";
  }
  return "-ERR unknown command\r\n";
}

int main() {
  std::cout << "+PONG\r\n";
  return 0;
}
