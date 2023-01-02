1. Some Terms:
    Procedure: a block of code that can be called to perform a task.
    Function: a block of code that can be called to perform a task and will return one or more values to where it was called from.
    Procedure vs Function: function returns output
2. How does a computer remember things?
    computer memory: is a big pile of on-off switches(smallest possible unit in computing between 0 and 1)
    bytes = bunches of 8 bits
3. Type of variables:
    - int integer
    - char a single character
    - double floating point number
4. Names:
    - start with lower case letters
    - sensitive, uppercase and lowercase letter are different
    - underscores split words
5. int:
    - 32 bits = 8 bytes
    - 2^32 different possible values -2^31 to 2^31 -1 
    - not infinite 
6. char:
    - also as an int
    - a single character variable holds an ASCII value (integers 0-127)
    - single quotes 'a'
    - characters are ints to do math
7. double:
    - siozed floating point number
    - 64 bits = 8 bytes
8. format specifiers:
    - % + character, + variable name
    - %d = decimal integer
    - %lf = long floating point number
    - %c = character
    - & store variable address in memory
9. #define + name + value
10. Scanf function:
    - tell the computer the data type
    - return the number of input values
    - return EOF if input failure
    - the information above is useful to check for any errors
    - /n is a character on ASCII table, to fix it using
    '''
    scanf(" %c", &character);
    '''
11. Division:
    - ints will drop whatever fraction exists, they won't round nicely. 5/3 will reust in 1

    