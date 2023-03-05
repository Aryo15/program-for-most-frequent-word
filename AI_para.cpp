#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>

int main()
{

    std::cout << "Enter paragraph of text:" << std::endl;
    std::string paragraph;
    std::getline(std::cin, paragraph);

    std::stringstream ss(paragraph);

    std::unordered_map<std::string, int> wordFreq;

    std::string word;
    while (ss >> word)
    {
        ++wordFreq[word];
    }

   
    std::string theword;
    int maxFreq = 0;
    for (const auto& kvp : wordFreq)
    {
        if (kvp.second > maxFreq)
        {
            theword = kvp.first;
            maxFreq = kvp.second;
        }
    }

   
    std::cout << "most frequently typed word: " <<theword << std::endl;

    return 0;
}