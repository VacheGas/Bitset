# Bitset
A Bitset is a data structure that compactly stores bits.

Implement the Bitset class:

1.Bitset(int size) Initializes the Bitset with size bits, all of which are 0.

2.void fix(int idx) Updates the value of the bit at the index idx to 1. If the value was already 1, no change occurs.

3.void unfix(int idx) Updates the value of the bit at the index idx to 0. If the value was already 0, no change occurs.

4.void flip() Flips the values of each bit in the Bitset. In other words, all bits with value 0 will now have value 1 and vice versa.

5.boolean all() Checks if the value of each bit in the Bitset is 1. Returns true if it satisfies the condition, false otherwise.

6.boolean one() Checks if there is at least one bit in the Bitset with value 1. Returns true if it satisfies the condition, false otherwise.

7.int count() Returns the total number of bits in the Bitset which have value 1.

8.String toString() Returns the current composition of the Bitset. Note that in the resultant string, the character at the ith index should coincide with the value at the ith bit of the Bitset.

leetCode - 2166