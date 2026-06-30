#include <iostream>
#include <random>
#include <chrono>

int main() {
	int unangTaya{};
	int ikalwangTaya{};
	int unangRandom{-1};
	int ikalwangRandom{-1};

	std::cout << "Jueteng to!\n";

	while ((unangTaya != unangRandom) && (ikalwangTaya != ikalwangRandom)) {
		unsigned unangButo = std::chrono::system_clock::now().time_since_epoch().count();
		unsigned ikalwangButo = std::chrono::system_clock::now().time_since_epoch().count();

		std::cout << "\nAno taya mo? Lagyan ng puwang sa pagitan.\nTaya : ";
		std::cin >> unangTaya >> ikalwangTaya;

		// Mersenne Twister 19937 engine is a common choice
		std::mt19937 unangEngine(unangButo);
		std::mt19937 ikalwangEngine(ikalwangButo);

    		// Define the desired distribution (e.g., uniformly distributed integers between & including min and max)
		std::uniform_int_distribution<int> unangUgat(1, 37);
		std::uniform_int_distribution<int> ikalwangUgat(1, 37);

    		// Generate a random number
    		unangRandom = unangUgat(unangEngine);
		ikalwangRandom = ikalwangUgat(ikalwangEngine);

		if ((unangTaya == unangRandom) && (ikalwangTaya == ikalwangRandom)) {
			std::cout << "Panalo ka boi! Yehey...\n";
		} else {
			std::cout << "Sensya, talo ka. Haha...\n";
			std::cout << unangRandom << " " << ikalwangRandom << " ang tama!\n";
		}
	}
	return 0 ;
}
