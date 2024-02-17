# Homework on the subject: "Programming languages"

## Higher School of Economics, Computer Security, 1st year

### Task condition

You will have to write a simple console expression that, when entering the --forward flag
, counts the mathematical application entered by the user via std::cin (or from a file
if there is a --file flag) directly, that is, "5 + 5" and outputs 10.
Otherwise, if the --reverse flag is entered, then, accordingly, it is necessary to count the expression
written using the reverse Polish notation, for example, "1 2 + 4 × 3 +" and
outputs 15. You can read about it on Wikipedia
In order for the work to be accepted for a high score, you need to accompany
it with a Makefile with support:
1. Builds (make)
2. Cleaning of temporary files (make clean)