## Hashing
* Hashing is technique that maps large set of data to small set of data.
* It uses hash function for doing the mapping and its irreversible process.
* Its common to encounter collision.
* Components of hassing are `Key --> Hash Function --> Hash Table`
* Each key is translated by hash function into distinct index in array.
* Examples are URL Shorteneres, country name with code.

## Hashing Concepts
* Bucket Index - The value returned by hash function.
* Collision - Situation when bucket index is not empty.
* Load Factor - Probability of collision in hash table.

## Collision resolution 
* Primary approches are chaining and Open Addressing
* Chaining - Create a linked list at each bucket to store multiple key-value pairs.
* Open Addressing aims to find alternative locations within hashmap to store colliding elements.

## Hash Table
* Its a data structure implements associatve array(also called dictionary) used to insert, look-up and remove key-values pair quickly.
* Designed to be fast to work with.
* Traditionally hash tables are implemented using with array of linked lists.
* Utlizes hash function to map keys to indices in an array known as bucket.

## Hash /STL Map
* In C++, there's no direct class named Hashtable, but a hash table structure is used internally by unordered_map
* Implemented as a self-balancing red-black tree.

## Hash Set
Its like Hash Map except it only store keys without values.
