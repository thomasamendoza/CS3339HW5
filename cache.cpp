#include "cache_sim.h"
#include <iostream>
#include <vector>
using namespace std;

class CacheSim
{
private:
    // opted for a vector so size could be mutatable
    vector<Entry> cache;
    int numEntries;

public:
    /*
     * CacheSim: default constructor
     *
     * @param entries: number of entries passed in
     */
    CacheSim(int entries)
    {
        numEntries = entries;
    }

    /*
     * access: function to simulate operating on the cache, including hit/mass
     *         functionality
     *
     * @param address: address of the cache entry, implemented as an int
     *                 per the assignment description
     *
     * @return: bool to signify whether the access was a hit or miss
     */
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