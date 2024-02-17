# Homework on the subject: "Programming languages"

## Higher School of Economics, Computer Security, 1st year

### Task condition

Implement a function that accepts input: multimap<int, string> mp1, map<int, int> mp2, vector<pair<string,int>> vec.
The integer values in vec1 correspond to the keys from mp2, and the mp2 values correspond to the keys of mp1. It is required to leave in vec1 only those pairs in which an integer value leads to a row (at least one) from mp1 equal to the row from the pair, and then sort the resulting pairs by non-decreasing integer value

### Example:

mp1 = {1: "string", 2:"not string", 3:"null"), mp2 {15:1, 21:2, 33:3}, vec = {{"string",15},{"nothing",33},{"not string",21}} -> {{"string",15},{"not string", 21}}
