#include "cache_sim.h"
#include "cache.cpp"

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream output;
    ifstream input;
    input.open("memory_reference_file");

    int numEntries = stoi(argv[1]);
    int associativity = stoi(argv[2]);

    // termates if input requirements are not met
    if ((numEntries % 2 != 0) || (numEntries % associativity != 0))
    {
        cout << "Invalid input: please review input requirements.\n";
        return -1;
    }

    input.close();
    return 0;
}

/*
 * outputTable: function which prints out output table to output file
 *
 * @param reference file's data
 */
void outputTable(char *arr[], ofstream out, int entries)
{
    CacheSim cache(entries);
    out << "ADDR : HIT/MISS\n";
    for (int curr = 0; curr++; curr <= entries)
    {

        out << ": ";
    }

    return;
}