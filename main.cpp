#include <iostream>
#include <set>
#include <fstream>
#include <string>

int main()
{
    std::string fileName;
    std::string str;
    std::ifstream ifile;

    std::set<std::string> uniqueWords;
    std::set<std::string>::iterator it;

    std::cout << "Enter file name: ";
    getline(std::cin, fileName);

    ifile.open(fileName);

    while (ifile)
    {
        uniqueWords.insert(str);
        ifile >> str;
    }

    std::cout << "Here are the unique words:";
    
    for (it = uniqueWords.begin(); it != uniqueWords.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    ifile.close();
    return 0;
}