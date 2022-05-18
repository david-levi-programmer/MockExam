#include <iostream>
#include <string>

int check();

using namespace std;
string word;

int main()
{
    std::cout << "Type in a word: " << std::endl;
    std::cin >> word;
    std::cout << "Here's a fun fact:\n";
    std::cout << "A palindrome is a word that sounds the same read backwards as it does forwards.\n";
    std::cout << "Let's see if your word fits that criteria, shall we?" << std::endl;
    system("PAUSE");
    check();
    system("PAUSE");
}

int check()
{
    auto first = word.begin();
    auto final = word.end();
    
    if (first == final)
    {
        std::cout << "This word is a palindrome" << std::endl;
    }
    
    else    
    {
        std::cout << "Nope, sorry." << std::endl;
    }

    return true;
}