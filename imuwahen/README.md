# THE IOT LIBRARY #

**The ilog class is a C++ logger class for storing sensor data.**

The class has two constructors that take an unsigned integer for the 
length of the array and an enumeration type flag that specifies the 
type of data stored in the array (NUM or WRD)

***ilog::max_length*** returns the maximum length of the array that can 
be created.

***ilog::push*** add new values to the array, which take a value and an 
optional index parameter that specifies where in the array the value 
should be added. There are two versions of the ilog::push function, 
one for floating-point numbers and one for strings.

The class has num_out and wrd_out member functions to retrieve 
values from the array, with num_out returning a floating-point 
number and wrd_out returning a string.

***ilog::resize*** functions change the size of the array, which take a new 
size parameter and an optional position parameter that specifies 
whether the array should be resized from the top or the bottom.

***ilog::to_json*** convert the array data to a JSON string, with one 
version that takes a property name parameter and one that doesn't.

The class has a destructor that frees the memory allocated for the 
array.
