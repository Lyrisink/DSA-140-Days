# DSA Plan: 18 weeks of learning + 2 weeks buffer (140 days)

**Resources:** Apna College DSA in C++ playlist (Shradha Khapra) + Unstop 100 Days of Code as the problem bank + a few classic LeetCode problems (marked **LC #**).
**Start:** Monday. **Language on every platform:** C++, `#include <bits/stdc++.h>`, `using namespace std;`.

---

## 1. Rules (read once, then follow blindly)

1. **Lecture first, problems after.** Never open a problem whose topic you haven't covered yet.
2. **Code along.** Pause the video, type the code yourself. Don't just watch.
3. **The 30-minute rule.** Stuck for 30 min -> read a hint. Stuck for 45 -> read the solution, understand it, close it, and re-write it from scratch. Staring for 2 hours teaches nothing.
4. **Re-solve rule.** Any problem where you needed the solution gets re-solved from scratch on the coming Sunday.
5. **Park, don't suffer.** The Unstop day tags are noisy (a "Day 3: Stack" has non-stack problems, and vice versa). If a problem clearly needs a topic you haven't learned, put it in your *Parked* list and come back later.
6. **One main course.** Apna College only. Don't hop playlists (exception: DP in Weeks 17-18, see there).
7. **Keep a notebook/doc.** One line per problem: *problem, idea, what tripped me*. You'll revise from this, not from the videos.

## 2. Daily rhythm (about 2-2.5 hrs on weekdays)

| Block | Time | What |
|---|---|---|
| Learn | 60-75 min | One Apna lecture (1.25x speed is fine), coding along |
| Solve | 60-90 min | The problems listed for that day |
| Log | 5 min | Update your notebook |

- **Saturday:** 3 hrs, heavier on problems.
- **Sunday:** about 1.5 hrs. Re-solve 2-3 problems from the week (rule 4), clean your notes, no new topic.
- **Exam / busy weeks (light mode):** 1 lecture *or* 2 problems per day, nothing more. Don't drop to zero, just shrink. Then add the missed days into the buffer weeks (19-20).

## 3. Playlist map (lecture numbers are approximate)

The playlist has been re-uploaded and reordered over time, and different listings show 124-144 videos. **Follow topic titles and playlist order, not my numbers.** Numbers I'm fairly sure about: L1-7 basics, L8 arrays, L9 vectors, L10 Kadane, L12 time & space complexity, L16 pointers, L35 2D arrays, L40 4-Sum, L58-62 linked list (reverse, middle, cycle, copy with random pointer).

| Section | Roughly |
|---|---|
| Basics: flowchart, variables, loops, patterns, functions, binary, bitwise | L1-7 |
| Arrays, vectors, Kadane, time/space complexity | L8-12 |
| Sorting, binary search, pointers, 2D arrays, 2-pointer/3Sum/4Sum | L13-40 |
| Strings / char arrays | after arrays |
| Recursion, backtracking, OOP | before linked list |
| Linked list | ~L50s-60s |
| Stack, queue, greedy | after linked list |
| Binary trees, BST, heaps, hashing | after that |
| Graphs | near the end |
| DP | **check if the playlist has it**; if not, see Week 17 |

---

## Week 1: C++ basics refresh, patterns, functions, bits
Goal: switch from simplecpp to standard C++, get comfortable with `cin/cout`.

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | L1-2 (skim at 1.5x): set up g++/VS Code or an online compiler, variables, data types, operators | 5 tiny programs of your own: sum of two numbers, swap, even/odd, largest of 3, simple calculator. **Unstop D1:** Exchanging Gifts (you already started it) |
| Tue | L3: conditionals & loops | Own: sum of digits, reverse a number, prime check, factorial. **Unstop D1:** Distinct K (if it needs a set, park it for Week 5) |
| Wed | L4: patterns (long lecture, code along) | 6 patterns of your own: right triangle, inverted triangle, pyramid, number triangle, hollow rectangle, diamond |
| Thu | L5: functions | Rewrite Monday-Wednesday programs as functions. Add `nCr` and "primes in a range" |
| Fri | L6-7: binary number system, bitwise operators | Own: decimal<->binary, check power of 2, odd/even using `&`. **Unstop D8:** Count set bits |
| Sat | Catch up on anything skipped | **Unstop D8:** Find Class_id, Rahul and Tree. Re-do any pattern you struggled with |
| Sun | None | Revision: re-solve 2-3 problems, tidy notes |

## Week 2: Arrays, vectors, Kadane, complexity

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | L8: arrays Part 1 (traversal, passing to functions, linear search, reverse) | Own: max/min, second largest, reverse array. **Unstop D2:** Pair of Subarrays |
| Tue | L9: vectors in C++ | **Unstop D2:** Poster Printer, City Biker. **LC 1** Two Sum (brute force is fine) |
| Wed | L10: Kadane's algorithm | **LC 53** Maximum Subarray. **Unstop D2:** Good Sum (Medium, attempt only) |
| Thu | L11-12: next array lecture + time & space complexity | Write the time complexity of every program you've written so far. **Unstop D9:** Form Majority, Dreamy cars |
| Fri | Re-watch the weakest lecture of the week at 1.5x | **Unstop D9:** Find Target Indices After Sorting Array, The 3 jumps (M). **Unstop D5:** Repeating Box |
| Sat | None | **Unstop D5:** Chocolate Store, Basic Encoding, Backspace String Compare (park if too hard) |
| Sun | None | Revision |

## Week 3: Sorting and binary search

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Sorting: bubble, selection | Implement both from scratch. **Unstop D6:** Convert it |
| Tue | Sorting: insertion, counting, STL `sort` with a comparator | **LC 75** Sort Colors. **Unstop D6:** Mary and Flowers |
| Wed | Binary search (basics) | **LC 704**, **LC 35**. **Unstop D87:** Maximum Units on a Truck |
| Thu | Binary search variations (first/last occurrence, rotated array, peak) | **LC 34**, **LC 33**, **LC 162** |
| Fri | None (practice day) | **Unstop D7:** Recent Submissions, Reena and Fruits |
| Sat | None | **Unstop D7:** Kth Character, At the center (M). **Unstop D6:** Non-overlapping Intervals (M, attempt) |
| Sun | None | Revision |

## Week 4: Pointers, 2D arrays, prefix sum, two pointers

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | L16: pointers in C++ (in detail) | Own: swap via pointers, array traversal via pointers, pointer-to-pointer |
| Tue | Pointers cont. / references / dynamic arrays (next lecture(s)) | Own: dynamic array with `new`/`delete`. **Unstop D13:** Reduced Zero |
| Wed | L35: 2D arrays Part 1 | **Unstop D13:** Diagonal Sum, UPPER LEFT BOTTOM RIGHT |
| Thu | 2D arrays Part 2 (spiral, transpose, rotate) | **LC 54** Spiral Matrix, **LC 48** Rotate Image |
| Fri | L36-40: two pointers, 3Sum, 4Sum (and prefix sum if it appears) | **LC 167** Two Sum II, **LC 15** 3Sum. **Unstop D84:** Jumping Ranks, Empty subarrays |
| Sat | None | **Unstop D84:** Brave Soldiers, Max Sum of made Array (M). **Unstop D13:** Not Stable (M, attempt) |
| Sun | None | Revision + mini-checkpoint: re-solve 3 problems from Weeks 1-3 without looking |

## Week 5: Strings and STL hashing

STL `map` / `unordered_map` / `set` isn't deep in Apna until later, but you need it now. Read the cppreference pages or a GfG article (about 30 min on Thursday), then use them.

| Day | Learn | Solve |
|---|---|---|
| Mon | Apna: char arrays / C-style strings | Own: reverse, palindrome check, count vowels. **Unstop D16:** First Palindrome String, First Wrong Decision |
| Tue | Apna: `std::string` (find, substr, compare, getline) | **LC 344** Reverse String. **Unstop D16:** Identify Winner, Correct height |
| Wed | Apna: string problems (anagram, compression, etc.) | **LC 242** Valid Anagram, **LC 387** First Unique Character. **Unstop D15:** Matching count, Decode Enigma |
| Thu | Text: `unordered_map`, `map`, `set` (GfG / cppreference) | **LC 1** Two Sum (hashmap version), **LC 217** Contains Duplicate. **Unstop D14:** Sum variation |
| Fri | None (practice) | **Unstop D14:** The Largest Pack. **Unstop D12:** Find unique character from string. **Unstop D1:** Distinct K (if parked) |
| Sat | None | **Unstop D17:** Find possible words, Circular Disc, AND Triplets. **Unstop D15:** Minimum Addition (M, attempt) |
| Sun | None | Revision |

## Week 6: Sliding window and Checkpoint 1

Apna may not cover sliding window. Use Aditya Verma's Sliding Window playlist (Hindi/Hinglish) for the first two videos.

| Day | Learn | Solve |
|---|---|---|
| Mon | Sliding window: fixed size | **LC 643** Maximum Average Subarray I. **Unstop D79:** Least Abs Distance |
| Tue | Sliding window: variable size | **LC 3** Longest Substring Without Repeating, **LC 209** Minimum Size Subarray Sum. **Unstop D79:** Speed Ticket |
| Wed | None (practice) | **Unstop D32:** Find the Team with the maximum Players, Maximum Jamun Pick |
| Thu | None (practice) | **Unstop D34:** Sliding in Range, Maximum Score of String |
| Fri | None (practice) | **Unstop D80:** School Attendance System, Beautiful Word. **Unstop D82:** Strange Gift, Two's Modulo |
| Sat | None | **Unstop D82:** Reduce to Zero, Class's Seating. **Unstop D81:** ENCODER GIRL, Reach Home |
| Sun | None | **Checkpoint 1:** re-solve 5 problems from Weeks 1-6 from scratch, no looking. Note which topic felt weakest and give it an extra hour |

## Week 7: Recursion and OOP basics

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Recursion intro (base case, call stack, factorial, sum of n) | Own: print 1..n, sum of digits, count digits (all recursive). **LC 50** Pow(x, n) |
| Tue | Recursion with arrays/strings (is sorted, first/last occurrence, reverse string) | **LC 509** Fibonacci Number, **LC 70** Climbing Stairs (plain recursion first). Tower of Hanoi |
| Wed | None (practice, draw recursion trees on paper) | **Unstop D14:** Art Museum, Robot Lap. **Unstop D99:** Good Pudding |
| Thu | OOP: classes, objects, constructors, `this`, access specifiers | Write `Student` and `Rectangle` classes. Write a `struct Node { int data; Node* next; }` |
| Fri | OOP: inheritance, polymorphism, operator overloading (skim) | Small class exercises of your own. **Unstop D85:** Maximum Query Sum, Final key |
| Sat | None | **Unstop D85:** Projection Area of 3D Shapes. Re-do one recursion problem without looking |
| Sun | None | Revision |

## Week 8: Divide and conquer, backtracking

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Merge sort | Implement from scratch. **LC 912** Sort an Array. **Unstop D11:** Inversion Count |
| Tue | Quick sort | Implement from scratch. Re-do Monday's merge sort without looking |
| Wed | Backtracking intro (subsets, permutations) | **LC 78** Subsets, **LC 46** Permutations. **Unstop D50:** Power sets (M) |
| Thu | Backtracking: combinations, combination sum | **LC 39** Combination Sum, **LC 17** Letter Combinations of a Phone Number |
| Fri | N-Queens, grid backtracking | **LC 51** N-Queens (understand, don't memorize) |
| Sat | None | **Unstop D45:** Unique Permutation. **Unstop D93:** Save the king (M, attempt) |
| Sun | None | Revision |

## Week 9: Linked list, Part 1

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Linked list intro: Node, build a list, traverse, push front/back | Implement `print`, `insertAtHead`, `insertAtTail` |
| Tue | Insert at position, delete head/tail/position, search, length | Finish your own LinkedList class. **LC 203** Remove Linked List Elements |
| Wed | Doubly / circular linked list (if in the playlist) | **Unstop D88:** Convert Binary Number Linked List to Decimal |
| Thu | L58-59: reverse a linked list, middle of a linked list | **LC 206**, **LC 876**. **Unstop D86:** Odd Even |
| Fri | L60: detect & remove cycle | **LC 141**, **LC 142**. **Unstop D23:** Remove the Last Occurrence (M, attempt) |
| Sat | None | **LC 21** Merge Two Sorted Lists, **LC 234** Palindrome Linked List. **Unstop D25:** Reverse upto X (M, attempt) |
| Sun | None | Revision |

## Week 10: Linked list, Part 2 and Stack

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Remaining LL lectures (L62 copy list with random pointer, merge sort on LL) | **LC 138**, **LC 148**. **Unstop D20:** Swapping Linked List Node (M) |
| Tue | None (consolidation) | **Unstop D21:** K Reverse List - Alternate (M). **Unstop D23:** Start with End (M) |
| Wed | Stack intro (array/LL/STL, push/pop/peek) | Implement stack. **LC 20** Valid Parentheses. **Unstop D83:** Parenthesis, Decode the message |
| Thu | Stack problems: next greater element, stock span, min stack | **LC 496**, **LC 739**, **LC 155** |
| Fri | Stack problems: largest rectangle in histogram, duplicate parentheses | **LC 84** (attempt). **Unstop D3:** Basketball Game, Push the Zeroes |
| Sat | None | **Unstop D3:** Consistent Car Models, Sum of Different Bits. **Unstop D24:** Stack Validity Check (M) |
| Sun | None | Revision |

## Week 11: Queue, greedy, Checkpoint 2

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Queue (array, LL, STL, circular queue) | Implement a queue. **LC 232** Implement Queue using Stacks |
| Tue | Queue problems (stack using queues, first non-repeating in a stream, deque) | **LC 225** Implement Stack using Queues. **Unstop D24:** Calculate it (M, attempt) |
| Wed | Greedy intro (activity selection, fractional knapsack) | **LC 455** Assign Cookies. **Unstop D58:** Jewelry Juggle |
| Thu | Greedy 2 (job sequencing and similar) | **LC 860** Lemonade Change. **Unstop D58:** Attack the fort (M) |
| Fri | None (practice) | **Unstop D73:** Infinite Sequence, Dice City's Competition. **Unstop D26:** Design a Derived Stack (M) |
| Sat | None | **Unstop D6:** Non-overlapping Intervals / Beer Purchase if parked earlier. Re-do anything parked from Weeks 1-10 |
| Sun | None | **Checkpoint 2:** re-solve 5 problems from Weeks 7-11 from scratch |

## Week 12: Binary trees, Part 1

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Tree intro, build tree from preorder, pre/in/post-order traversals | **LC 144**, **LC 94**, **LC 145** |
| Tue | Level order traversal | **LC 102** Binary Tree Level Order Traversal, **LC 104** Maximum Depth |
| Wed | Height, count of nodes, sum of nodes, diameter | **LC 543** Diameter, **LC 100** Same Tree |
| Thu | Subtree of another tree, top view, k-th level | **LC 572**, **LC 199** Right Side View |
| Fri | LCA, min distance between nodes, k-th ancestor | **LC 236**. **Unstop D33:** The leaf node Problem (M) |
| Sat | None | **Unstop D37:** Extreme Leaf Gap in Binary Trees (M). **Unstop D27:** Palindromic Paths (M, attempt) |
| Sun | None | Revision |

## Week 13: Binary search trees

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | BST intro, build, search | **LC 700**, **LC 701** |
| Tue | BST: delete a node, print in range | **LC 450**, **LC 938** |
| Wed | Validate BST, sorted array to balanced BST, BST to balanced BST | **LC 98**, **LC 108** |
| Thu | None (practice) | **LC 230** Kth Smallest in a BST, **LC 235** LCA of a BST |
| Fri | None (practice) | **Unstop D42:** BST Puzzle (M). **Unstop D41:** Delete nodes from binary tree (M) |
| Sat | None | **Unstop D41:** Almost Equal Tree (M). **Unstop D37:** Longest Consecutive Tree (M). **Unstop D86:** Playing with Tree (M) |
| Sun | None | Revision |

## Week 14: Heaps and hashing

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Heap / priority queue intro (heap property, array representation, insert, delete) | Implement a min-heap. **LC 703** Kth Largest Element in a Stream |
| Tue | Heap sort, STL `priority_queue` (min-heap with `greater`, custom comparators) | **LC 215** Kth Largest Element, **LC 1046** Last Stone Weight |
| Wed | Heap problems (connect ropes, weakest soldier, sliding window maximum) | **LC 347** Top K Frequent Elements. **Unstop D51:** Minimum Deviation (M, attempt) |
| Thu | Hashing: hash maps and sets in depth (frequency, subarray sum, majority element) | **LC 560** Subarray Sum Equals K, **LC 169** Majority Element |
| Fri | None (practice) | **Unstop D21:** Design HashMap (M), Possible words (M). **Unstop D26:** Find and Replace Pattern (M) |
| Sat | None | **Unstop D26:** Possible Anagrams (M). **Unstop D27:** Total Cards (M). **Unstop D23:** Alien Toys (M) |
| Sun | None | Revision |

## Week 15: Graphs, Part 1

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Graph intro, adjacency list in C++ (`vector<vector<int>>`) | Own: build a graph from an edge list and print it (directed and undirected) |
| Tue | BFS | **LC 1971** Find if Path Exists in Graph. **Unstop D4:** Find a way |
| Wed | DFS, connected components | **LC 547** Number of Provinces, **LC 200** Number of Islands |
| Thu | Cycle detection (undirected and directed) | Implement both versions. **Unstop D98:** Count of Square islands (M) |
| Fri | None (practice) | **Unstop D95:** Connection (M), Coronavirus Spread (M) |
| Sat | None | **Unstop D53:** Rat and Cheese (M), Restaurant (M). **Unstop D98:** Classroom, Colour |
| Sun | None | Revision |

## Week 16: Graphs, Part 2 and Checkpoint 3

| Day | Learn (Apna) | Solve |
|---|---|---|
| Mon | Topological sort (DFS and Kahn's) | **LC 207** Course Schedule, **LC 210** Course Schedule II |
| Tue | Dijkstra's algorithm (with `priority_queue`) | **LC 743** Network Delay Time. **Unstop D36:** Shortest Path to School (M, attempt) |
| Wed | Bellman-Ford (watch once) + DSU intro (text: GfG) | Implement DSU with path compression |
| Thu | MST: Prim and Kruskal | **LC 1584** Min Cost to Connect All Points |
| Fri | None (practice) | **Unstop D91:** Cheapest Route (M), Where will the stone fall (M) |
| Sat | None | **Unstop D97:** UseLess (M), Maximum Power (M) |
| Sun | None | **Checkpoint 3:** re-solve 5 problems from Weeks 12-16 from scratch |

## Week 17: Dynamic Programming, Part 1

**Resource note:** I'm not sure Apna's playlist has a full DP section. Check once. If it doesn't, use **Aditya Verma's Dynamic Programming playlist** (Hindi/Hinglish) for the lectures below. Striver's DP playlist (English) is the other strong option.
**Method:** for every DP problem, write (1) the recursive solution, (2) add memoization, (3) convert to a table. In that order, always.

| Day | Learn | Solve |
|---|---|---|
| Mon | What is DP? Memoization on Fibonacci | **LC 509**, **LC 70** (recursion -> memo) |
| Tue | Tabulation, 1D DP | **LC 746** Min Cost Climbing Stairs, **LC 198** House Robber |
| Wed | 0/1 knapsack idea | **LC 416** Partition Equal Subset Sum. **Unstop D40:** Marble Removal Game (E) |
| Thu | Unbounded knapsack / coin change | **LC 322** Coin Change, **LC 518** Coin Change II |
| Fri | None (practice) | **Unstop D39:** Robert's Answer, Special Series. **Unstop D43:** Help Lily |
| Sat | None | **Unstop D44:** Treasure in a Mystery Box, Mocha's Alien dictionary. **Unstop D40:** Match Non-Adjacent (M, attempt) |
| Sun | None | Revision: re-write one DP problem three ways (recursion, memo, table) |

## Week 18: Dynamic Programming, Part 2

| Day | Learn | Solve |
|---|---|---|
| Mon | LCS (longest common subsequence) | **LC 1143** |
| Tue | LIS (longest increasing subsequence) | **LC 300** |
| Wed | Grid DP | **LC 62** Unique Paths, **LC 64** Minimum Path Sum |
| Thu | Edit distance, longest palindromic subsequence | **LC 72**, **LC 516**. **Unstop D55:** Longest Palindromic Subsequence (M) |
| Fri | None (practice) | **Unstop D48:** Find the longest palindromic substring (M), Longest Subsequence with Non-adjacent Characters (M) |
| Sat | None | **Unstop D49:** Possible Combinations (M). **Unstop D43:** New Shelf (M), Let It Be (M) |
| Sun | None | Revision |

---

## Weeks 19-20: Buffer, revision, mocks

Use Week 19 to absorb any missed days from exam weeks, then run this template.

**Week 19: Close the gaps**

| Day | Do |
|---|---|
| Mon | Re-read your notebook for Arrays/Strings/Hashing. Re-solve the 3 hardest you logged |
| Tue | Same for Linked list/Stack/Queue |
| Wed | Same for Trees/BST/Heaps |
| Thu | Same for Graphs |
| Fri | Same for DP and Recursion/Backtracking |
| Sat | Attempt your *Parked* list problems |
| Sun | Rest, or light reading |

**Week 20: Timed practice**

| Day | Do |
|---|---|
| Mon-Fri | One timed session per day: 2 Unstop mediums in 60 min, no hints. Candidates not yet used: D90 (Find middle person, Number of Ways), D100 (Count the number of elements divisible by integer K, The Huge Number), D72 (Superstitious Daisy, Kth Next Permutation), D57, D30, D31, D18 |
| Sat | Join one live contest (LeetCode Weekly or CodeChef Starters). The rank doesn't matter. Solving 1 problem is a good first result |
| Sun | Review the contest, write down what to fix. Then pick the next phase (see below) |

## After Week 20

- Move to **Striver's A2Z sheet** or **NeetCode 150** for depth, solving 1-2 mediums per day.
- Start the Unstop **Hard-heavy days** (59-71, 75-78) as stretch goals. They are out of scope for this plan on purpose.
- Add **LeetCode contests** weekly and aim for 150-200 problems in total before placement season.

## Sprint coverage in this plan

| Covered (partly or fully) | Days |
|---|---|
| Core | D1-3, D4 (1 problem), D5-9, D11-17, D19-27 (selected) |
| Medium picks | D29-34, D36-37, D39-45, D48-51, D53, D55, D58 |
| Easy days | D79-90, D99 |
| Left for later | D18, D28, D35, D38, D46-47, D52, D54, D56-57, D59-78, D91-98 (mostly), D100 |

Covering every sprint question was never the goal. Understanding the patterns well enough to solve *new* problems is.

## Quick tracker (copy into your notebook)

```
Week __ | Lectures done: _/_ | Problems solved: _ | Needed solution: _ | Parked: _
Hardest thing this week:
What to re-solve on Sunday:
```
