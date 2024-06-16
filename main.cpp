#include <iostream>

constexpr unsigned long long IWonderWhatThisDoes(const unsigned long long x) {
	return x == 0 || x == 1 ? 1 : x * IWonderWhatThisDoes(x - 1);
}

int main() {
	constexpr unsigned x = 10;

	std::printf("%d is: %llu", x, IWonderWhatThisDoes(x));

	// try and guess what the code does
}
