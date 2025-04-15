// Dynamic memory allocation is a way to allocate memory to a data structure during the
// runtime.

// Following function are available in C to perform dynamic memory allocation:


    // 1. malloc()  syntax:- ptr = (data_type*)malloc(3* sizeof (data_type))
        // The expression returns a null pointer if the memory cannot be allocated.

        
    // 2. calloc()  syntax:- ptr = (float*)calloc(3, sizeof (float));
        // It the space is not sufficient, memory allocation fails, and a NULL pointer is returned.


    // 3. free()    free(ptr);
        //memory of ptr is released.

    // 4. realloc()
        //ptr = realloc (ptr, newsize);
        //ptr = realloc (ptr, 3*sizeof(int));