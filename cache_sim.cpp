#include "cache_sim.h"
#include "cache.cpp"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void outputTable(char *arr[], ofstream& out, ifstream& in, int entries);

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

    outputTable(argv, output, input, numEntries);

    output.close();
    input.close();
    return 0;
}

/*
 * outputTable: function which prints out output table to output file
 *
 * @param reference file's data
 */
void outputTable(char *arr[], ofstream& out, ifstream& in, int entries)
{
    CacheSim cache(entries);
    int ADDR;

    out << "IND ADDR : HIT/MISS\n"; // table header
    for (int curr = 0; curr++; curr <= entries) // table body
    {
        in >> ADDR;
        out << curr << " | " << ADDR << ": ";
        if(cache.access(ADDR) ? out << "MISS\n" : out << "HIT\n" );
    }

    return;
}