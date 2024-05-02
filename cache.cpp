#include "cache_sim.h"
#include <iostream>
#include <vector>
using namespace std;

class CacheSim
{
private:
    vector<Entry> cache;
    int numEntries;

public:
    CacheSim(int entries)
    {
        numEntries = entries;
    }

    bool access(int address)
    {
        int index = address % numEntries;
        int tag = address / numEntries;

        // if miss, update, if not, return true
        if (!(cache[index].validBit) || (cache[index].tag != tag))
        {
            cache[index].validBit = true;
            cache[index].tag = tag;
            return false;
        }

        return true;
    }
};