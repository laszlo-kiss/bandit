#include <specs/specs.h>

int main(int argc, char* argv[]) {
  try {
    return run(argc, argv, false);
  } catch (std::runtime_error& e) {
    std::cerr << "Bandit internal error: " << e.what() << std::endl;
    return 1;
  }
}
