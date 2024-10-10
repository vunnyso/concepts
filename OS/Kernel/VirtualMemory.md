## Virtual Memory
* It provides inlusion to programmer that it can execute program larger than size of main memory.
* Main memory is limited.
* Multi processes can be accompished by it.
* Every process assume it has access to large contigious memory.

## Goals of memory Virtualization
* Transparency
* Efficiency
* Isolation

## Memory Allocation
* In process address space all function calls, local varaiables will allocated stack memory.
* If we use malloc then memory will be allocate from heap.
* Malloc is implement in C library and it discougred to use different system calls.
* To grow heap libc uses brk / sbrk system call.
* Program can also allocate free page sized memory from anypart using mmap() 

## Address Translation
* CPU loads and stores Virtual Address(VA) but memory hardware access Physical Address(PA)
* Translation is done by Memory Mamagement Unit(MMU) 

## Paging
* OS divides virtual address space into fixed size pages.
* Physical memory will be divided into frames.
* To allocate memory it will be mapped to a free physical frame.
* Internal fragmentaion can happen where requested memory is less than page size.

## Page Table
* Page table stores mapping from virtual page to physical frame. E.g Page 0 to frame 3
* Its part of Process control block(PCB)
* MMU has access to page table and uses it for address translation. 
* MMU stores only start of page table.
* Sometimes refered as Linear Page table.


## Page Table Entry
* Contains PFN(Physical Frame Number)
* Other fields Valid bit, Protection bit(read/write), Present bit, Dirty Bit(page has been modified), Accesed bit(If recently accessed)

## Translation
* Most significant bit gives you VPN and last bits gives offset.
* CPU request access to memory then MMU translates VA to PA
    * Access memory to read page table entry.
    * Translate VA to PA.
    * Access memory to fetch data/code.
* Paging adds overhead to memory access

### Translation Lookaside Buffer (Cache)
* Cache of recent VA to PA mappings.
* Translate from VA to PA, MMU will first looks TLB.
* If TLB is hit then it can be directly used.
* If TLB was miss, then MMU performs memory access to walk to page table.
* Locality of reference helps to have high hit rate.
* TLB entries may became invalid on context switch and change of page tables.
* TLB mostly managed by hardware.

## How page tables stored in memory
* 32 bit VA, 4KB pages so 2^32/2^12 = 2^20 entries
* If PTE is 4 bytes then page table is (4 * 2^20 = 4MB)
* Such a page per process.
* Assume of you have very small process of few bytes then you have allocat page of 4MB.
* Solution: Page Table itself split into smaller chunks (Multi page tables)

## Multi Level Page Tables
* Page table will be spread over many pages
* An outer page table or page directory tracks PFN(Physical frame number) pf page table pages.
* If page table is large we may need multi levels of page table.
* On 64 bit architecture we may need 7 levels
* For translation we use VA then we use few bits and identify page directory and then we go innear page table and use more more bits of VA and finally translate to PFN.
* MMU knows address of only outer most table and it need to walk all the innear page tables in case of TLB miss.

## Demand Paging
* In modern system, main memory is not enough to store to all pages of all active processes.
* OS uses swap space to store pages that are not in active use.
* Physical memory is allocated on demand when needed.

## Page Fault
* Present bit tells if page is residing in main memory.
* While translation of VA to PA MMU first check present bit.
* if page is not present in memory, MMU raises trap to OS called as page fault.

## Page fault handling
* Moves CPU from user mode to kernel mode.
* OS fetches disk address of page and read to disk.
* Read disk can be slow and then context switch happens to another process.
* When disk read completes it will raise interrupt, OS update page table of process and marks it as ready.
* While servicing page fault if there is no free space in memory, OS mus swap out exisitng page and then swap in faulting page.

## Page replacement Policy
* Optimal - Replace page that is not needed for longest time in future.
* FIFO - Replace page that was brought into memory earliest.
* LRU / LFU - Replace page that least recently used in the past.


## References
* https://www.youtube.com/watch?v=2Xj2V8kYNWM
* https://www.youtube.com/watch?v=mYxkp5vpyqc
* https://www.youtube.com/watch?v=PTh2kL8ENzU
* https://www.youtube.com/watch?v=r9NwqtqS2Ac