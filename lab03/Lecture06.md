1. Revisiting Memory:

    Stack <-> heap, global/static variable, code
    
    1> c file is stored on the hard drive

    2> compiler compiles the code into another file that the computer can read

    3> CPU process the instructions and perform basic arithmetic, but the RAM will keep track of all the data needed in those instructions and operations

    4> Reading and writing to variables will change the numbers in RAM

    5> Memory is divided into the stack and the heap

    6> The stack is an ordered stack and the heap is a random free for all - insert something where can find space for it

    7> Stack memory is where relevant information about program goes: which functions are called & what variables you created

    8> Once block of code finishes running {}, the function calls and variables will be removed from the stack
    
    9> compile time that we can allocate stack memory space

    10> The stack is controlled by the program

    11> The heap is controlled by the developer and can be changed at run time

2. Efficiently solve problems

    Two pretty cool data structures: Arrays and Linked lists
    
    Array:

    '''
    //this arry holds 7 integers
    int array_name [Number of items] = {3, 2, 1, ...}
    '''

    - You can't print a whole array and You can't scan a whole array

    '''
    int ice_cream_consum[7] = {0,1,2,3,4,5,6};

    int i = 0;

    while(i < 7) {
        printf("%d", ice_cream_consum[i]);
        i++;
    }
    '''

    Strings: a collection of characters that are joined together
        = an array of characters
    
    \0 is called a null terminating character

    two methods to declare and initialise a string
    '''
    char word[] = "hello"
    char world[] = {'h','e','l','l','o',\0};
    ''' 

3. Helpful library functions:

    fgets(array[], length, stream)

    array[] = the array that the string will be stored into

    length = the number of character that will be read in
    
    stream = this is where this string is coming from 

4. Other interesting string functions:
    - strlen() gives us the length of the string
    - strcpy() copy the contents of one string to another
    - strcat() attach one string to the end of another
    - strcmp() compare two strings
    - strchr() find the first or last occurance of a character

