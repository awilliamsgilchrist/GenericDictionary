#include <iostream>
#include <string>
#include "Dictionary.h"

int main()
{
    std::string strKeys[5] = {"alpha", "beta", "gamma", "delta", "epsilon"};
    std::string strValues[5] = {"kilo", "mega", "giga", "tera", "exa"};
    int intKeys[5] = {0, 1, 2, 3, 4};
    int intValues[5] = {0, 1, 2, 3, 4};

    Dictionary<std::string, int> testDict1;
    Dictionary<int, std::string> testDict2(2);

    std::cout << "Testing getCount (Expect 0): " << testDict1.getCount() << std::endl;
    for(unsigned int i = 0; i < 5; i++)
    {
        testDict1.add(strKeys[i], intValues[i]);
        testDict2.add(intKeys[i], strValues[i]);
    }
    
    std::cout << "Testing add and get by key part 1(expect 0): " << testDict1.get("alpha") << std::endl;
    std::cout << "Testing add and get by key part 2(expect exa): " << testDict2.get(4) << std::endl;
    std::cout << "Testing get by key part 3(expect error message): ";
    try{
        std::cout << testDict1.get("Omega") << std::endl;
    } 
    catch(Exception e)
    {
        std::cout << "Error, invalid key" << std::endl;
    }
    
    std::cout << "Testing get by index part 1(expect 0): " << testDict1.get(0) << std::endl;
    std::cout << "Testing get by index part 2(expect kilo): " << testDict2.get(0) << std::endl;
    std::cout << "Testing get by index part 3(expect error message): ";
    try{
        std::cout << testDict2.get(7) << std::endl;
    }
    catch(Exception e)
    {
        std::cout << "Error, index out of bounds" << std::endl;
    }
    
    testDict1.remove("gamma");
    
    std::cout << "Testing remove by key(expect 3): " << testDict1.get(2) << std::endl;
    
    testDict1.remove(2);
    
    std::cout << "Testing remove by index(expect 4): " << testDict1.get(2) << std::endl;
    
    Dictionary<int, std::string> testDict3(testDict2);
    
    std::cout << "Testing copy constructor(expect 5): " << testDict3.getCount() << std::endl << std::endl;

    return 0;
}