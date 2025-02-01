#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <ranges>

int main() {
	std::vector v{1, 2, 3, 4, 5};
	for (const auto& x : v | std::views::transform([](const auto& x) { return x + 1; }) | std::views::filter([](const auto& x){ return x % 2 == 0; })) {
		std::cout << x << '\n';
	}
}