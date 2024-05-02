#include "cache_sim.h"
#include "cache.cpp"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream output;
    ifstream input;
    int numEntries = stoi(argv[1]);
    int associativity = stoi(argv[2]);

    output.open("cache_sim_output");
    input.open("memory_reference_file");

    // termates if input requirements are not met
    if ((numEntries % 2 != 0) || (numEntries % associativity != 0))
    {
        cout << "Invalid input: please review input requirements.\n";
        return -1;
    }

    CacheSim cache(numEntries);
    int ADDR;
    bool foo;
    int curr = 1;

    output << "IND ADDR : HIT/MISS\n"; // table header
    while (input >> ADDR)              // table body
    {

        foo = cache.access(ADDR);
        output << curr << " | " << ADDR << ": ";

        if (foo)
        {
            output << "MISS\n";
        }
        else
        {
            output << "HIT\n";
        }

        curr++;
    }

    output.close();
    input.close();
    return 0;
}