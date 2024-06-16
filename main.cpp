#include <iostream>

constexpr unsigned long long f(const unsigned long long x) {
	return x == 0 || x == 1 ? 1 : x * f(x - 1);
}

int main() {
	constexpr unsigned x = 10;

	std::printf("%d is: %llu", x, f(x));


}