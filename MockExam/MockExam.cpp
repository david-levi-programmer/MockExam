#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string word;

    std::cout << "Type in a word, would you? Any word: " << std::endl;
    std::cin >> word;
    std::cout << "Now, here's a fun fact for you:\n";
    std::cout << "A palindrome is a word that sounds the same read backwards as it does forwards.\n";
    std::cout << "Let's see if your word fits that criteria, shall we?" << std::endl;
    system("PAUSE");
    //for (auto it = word[0]; it != word.end();)
    if (word.front() == word.back())
    {
        std::cout << "Yes! This word is a palindrome." << std::endl;
    }

    else
    {
        std::cout << "Nope, sorry." << std::endl;
    }

    system("PAUSE");
}