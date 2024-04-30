# Thomas Mendoza's submission for Homework 5

### When utilizing this repository, please abide by Texas State University's Honor Code. Defined by [UPPS No. 07.10.01](https://policies.txst.edu/university-policies/07-10-01.html)

> ## Description
>
> For this homework, you will implement a cache simulator.
>
> The simulator will take as input:
>
> 1. the configuration parameters of a cache
>
> 2. a sequence of memory addresses requested
>    by the CPU.
>
> It will then simulate the behavior of the configured cache on the given memory
> references. Upon completion, the simulator will report for each reference whether it is a hit or
> a miss in cache.
>
> Each cache entry consists of a valid bit and a tag. The tag should be extracted from the memory
> address in the customary way. For the purposes of this homework, no actual data will be stored
> in the cache. Hits and misses will be determined by analyzing the memory addresses.
>
> You may assume:
>
> - At the outset, the cache is empty (i.e., all entries are invalidated)
> - Each cache entry/block contains only one word
> - The given memory references are specified as word addresses
>
> ## Input
>
> The simulator will be invoked with three command-line arguments as follows
>
> ` .cache sim num entries associativity memory reference file`
>
> where num entries is the total number of entries in the cache and associativity is the
> associativity of the cache to be simulated. **You may assume that num entries is a power of
> two**, and that associativity evenly divides num entries. The memory reference file will
> contain a list of memory references, **separated by spaces**.
>
> There is no limit to the number of
> memory references contained in the file.
>
> ## Output:
>
> The output should be placed in a file called cache sim output. To facilitate testing, each
> line of the output file should have information about a single memory reference and should be
> formatted in the following way.
>
> ` ADDR : HIT/MISS`
>
> `ADDR` is a memory address in the input file printed as an integer. `HIT/MISS` indicates the status
> of the memory reference. You can create more verbose output for your own benefit, if you like.
