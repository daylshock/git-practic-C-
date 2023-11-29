#include <iostream>
#include <vector>
#include <sstream>

const char text[]{ R"(My mistress' eyes are nothing like the sun,
Coral is far more red, than her lips red,
If snow be white, why then her breasts are dun:
If hairs be wires, black wires grow on her head:
I have seen roses damasked, red and white,
But no such roses see I in her cheeks,
And in some perfumes is there more delight,
Than in the breath that from my mistress reeks.
I love to hear her speak, yet well I know,
That music hath a far more pleasing sound:
I grant I never saw a goddess go,
My mistress when she walks treads on the ground.
And yet by heaven I think my love as rare,
As any she belied with false compare.)" };

void input_Word(std::string str) {
	std::stringstream stream(text);
	std::vector<std::string> words;
	while (!stream.eof()) {
		std::string tmp;
		stream >> tmp;
		words.push_back(tmp);
	}
	for (auto i{ 0 }; i < words.size(); i++) {
		if (str == words[i]) {
			std::cout << "words: " << "'" << str << "'" << " according to account: " << i + 1 << '\n';
		}
	}
}
void start() {
	std::string str{};
	std::cout << "enter words: " << '\n';
	std::cin >> str;
	input_Word(str);

}
int main() {
	std::cout << text << '\n';
	std::string quit{};
	while (quit != "quit") {
		start();
		std::cout << "quit?(enter 'quit'): " << '\n';
		std::cin >> quit;
	}
	return 0;
}
