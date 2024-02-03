# DSA_using_c-\_practice

1- Including Libraries
C++ is a versatile language, and it relies on libraries to access various functionalities. To perform tasks like input and output, we include specific libraries at the beginning of our code. For instance, #include<iostream> is used for input and output operations, while #include<math.h> allows us to use mathematical functions. Simply put, libraries provide pre-built functions and tools for us to use in our code.

2- ENDL vs \n
The reason for this is that \n is a simple escape sequence that inserts a newline character, which is a low-level operation that directly moves the cursor to the beginning of the next line in the output. On the other hand, std::endl not only adds a newline character but also flushes the output buffer. Flushing the buffer can be a more costly operation in terms of performance, especially when you’re printing a large amount of text.


3-PATTERN
  1-Numbers of line in pattern(colums) for first loop.
  2-Row statements for 2nd loop(inner loop).
  3-check Statement i.e=> (space , number , space)like 
    peramid pattern.

                    [{ S.T.L. }]

4-What is an unordered set?
  An unordered set in STL is a container that stores 
  unique elements in no particular order. Every operation 
  on an unordered set takes O(1) complexity in the average 
  case and takes O(n) in the worst case.
  Syntax:
        unordered_set<object_type> variable_name;
        unordered_set<int> s;
        unordered_set<string> str;

5-Functions:- in unordered set:

    insert() – to insert an element in the unordered set.
               s.insert(1);

    begin() – return an iterator pointing to the first element in the unordered set.
              s.begin();

    end() – returns an iterator to the theoretical element after the last element.
            s.end();

    count() – it returns 1 if the element is present in the container otherwise 0.
           unordered_set<int> s;
           s.insert(1);
           s.insert(2);
           s.count(2); //returns true
    
    clear() – deletes all the elements in unordered set.
          s.clear();
    
    find() – to search an element in the unordered set.
          unordered_set<int> s;
          s.insert(1);
          s.insert(2);
          if(s.find(2)!=s.end())
          cout<<"true"<<endl;

    erase() – to delete a single element or elements between a particular range.
          s.erase();

    size() – returns the size of the unordered set.
          s.size();
    
    empty() – to check if the unordered set is empty or not.
          s.empty();

6-Vector in C++ STL
What is a Vector?
   Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily 
   accessed and traversed using iterators. A vector stores elements in contiguous memory locations.
     Syntax:
        vector<object_type> variable_name;
     Example:
        vector<int> v1;
        vector<char> v2;
        vector<string> v3;