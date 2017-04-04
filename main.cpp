#include <iostream>
#include <string>
#include "Dictionary.h"

int main() {
    Dictionary<std::string, std::string> bookList;
    std::cout << "A list of authors whose books I read in high school" << std::endl;

    bookList.add("The Old Man and the Sea", "Ernest Hemingway");
    bookList.add("The Crucible", "Arthur Miller");
    bookList.add("Their Eyes Were Watching God", "Zora Neale Hurston");
    bookList.add("The Great Gatsby", "F. Scott Fitzgerald");
    bookList.add("Frankenstein", "Mary Shelly");
    bookList.add("The Taming of the Shrew", "William Shakespeare");
    bookList.add("1984", "George Orwell");
    bookList.add("The Chosen", "Chaim Potok");

    for(unsigned int i = 0; i < bookList.getCount(); i++)
    {
        std::cout << bookList.get(i) << std::endl;
    }

    std::cout << std::endl << "Here is the list of authors whose names I could remember how to spell without google-ing" << std::endl;

    bookList.remove("The Crucible");
    bookList.remove("Their Eyes Were Watching God");

    for(unsigned int i = 0; i < bookList.getCount(); i++)
    {
        std::cout << bookList.get(i) << std::endl;
    }

    std::cout << std::endl << "Additional demonstrations of functionality may be found in the test suite" << std::endl;
    return 0;
}