1. while(counter):

    loop counter: use variable to control how many times a loop runs

    int variable can be initialised outside the loop and updated inside the loop

2. while(sentinel):

    flag value: tells the loop when it can stop

    it's like an on/off switch for the loop, declared and set outside the loop and will be updated inside the loop

    it's termination condition can be checked in the while expression

3. while(condition):

    conditional looping: use condition to decide to exit a loop at any time

4. Struct:

    define the struct (outside the main)
    ```
    struct struct_name {
        date_type variable_name_member;
    }
    ```

    declare a struct （inside the main)
    ```
    struct struct_name variable_name;
    ```

    initialise a struct (inside the main)
    ```
    variable_name.variable_name_member;
    ```

5. Enumerations:

    integer data types that you created with a limited range of value (enumerated constants)
    ```
    //define
    enum weekdays {Mon, Tue, Wed, Thu, Fri, Sat, Sun}
    //declare
    enum weeksdays day;
    //initialise
    day = Sat;
    ```

    enum vs. #define

    advantages of using enums:

    enumerations follow scope rules -> you cannot have an enum state that is the same in two different types of enums

    automatically assigned values, which makes the code easier to read

    use enums when we want a variable to have a specific set of values
    


