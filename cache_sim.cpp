#include "cache_sim.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream output, input;
    input.open("memory_reference_file");

    int num_entries = stoi(argv[1]);
    int associativity = stoi(argv[2]);

    // termates if input requirements are not met
    if ((num_entries % 2 != 0) || (num_entries % associativity != 0))
    {
        cout << "Invalid input: please review input requirements.\n";
        return -1;
    }

    /*
    TODO: file output to be added later on, implementation in another class
    kept for reminder

    output.open("cache_sim_output");
    output.close();
    */
    input.close();
    return 0;
}

/*
 * outputTable: function which prints out output table to console
 *
 * @param reference file's data
 */
void outputTable(char *arr[])
{
    cout << "";
    return;
}