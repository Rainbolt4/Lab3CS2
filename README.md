# Lab3CS2
lab 3 for Data Structures
Dominic Rainbolt

problem 1
The value that produces an overflow for a short is 257, This can be noticed becuase when going from 256 to 257 we go from the expected positive value to the unexpected negative number 

problem 2
the value that produces an overflow for problem 2 using longs is 65637. Again we go form positive value to negative. 
problem 3 
the value that produces an overflow for problem 3 is 35, when we step from 34 to 35 we go from a value to INF
problem 4 
the value that produces an overflow for problem 3 is 171, when we step from 170 to 171 we go from a value to INF
problem 5 
the value that no longer adds up to 1 is when we step from 92 to 93, at 92 it adds up to 92 as expected but at 93 we see it adds to .999999 - this is the case when we store 1/n as a float
when we store the value as a double it takes approximately 2.7 lines of digits to cause an overflow
problem 6
the problem that occurs is that 4.4 should not be printed out becuase when it is a float as 4.4 is not less than 4.4 (the conditional to be met before the print statement gets run).
What must be happening is when the conditional is checked the value stored for I in a float is 4.39999999 which is less than 4.4 so the code runs when it really should not.
This problem does not happen when we use a double.
