# Arrays and Files
[Juan Manuel Balanzar Vega](https://github.com/SrGitQ/Files/tree/master/Chapter%204%20markdown) & [Isabel Cámara Montalvo](https://github.com/isabel-eng/programming2/tree/master/markdown)

## Clasification of arrays
We can imagine an array as a Box where we can store things, these things will be variables, each one with its value and identifier. This box could take a different form and this determines the space of itself, it is important to highlight that the space in the arrangement is too important. because it is a set of different variables stored in the RAM memory temporarily.

- One-Dimensional
  - we can make an array with one dimension this is the same to say that we have a list with finite places, to identify where are these variables is necessary to use a simple index.
    ```C
        int array[2] = {1, 2};
    ```
- Multidimensional
  - It is almost the same as One-Dimensional array, but the difference is that here we manipulate the arrays as variables in a box, this is why we need two or more indexes to manipulate a specific value of the arrangements of arrangements.
    ```C
        int array[2][2] = {1, 2}
                          {3, 4};
    ```
- Some topics
  - It is important to mention that the declaration of an array depends on the programming language, in the low-level language is declaring the type of the variable, identifier and its spaces or size and also we can declare the values with keys.
    ```C
        type name[dimensions][dim...] = {values, values};
    ```
  - To find a value we have to take into account that we start at 0 as the first value.
    ```C
        int array[2] = {1, 2};
        printf("%d\n",array[0]);// :1
    ```

## Organization and Management of Files
The input and Output information is too important to a program because it is made to manipulate the information that the system or the User produce; this is why in the majority of the programming language exists libraries of I/O dataflow. One topic of the most used in I/O programs in C is the Management of Files. And basically there are the functions and the types of these files.
- Text
  - A text file organized character sequence in lines, this is because these files are totally flat that is to say the file has the same format in its hole content.
    - Data base
    - text files
    - code
- Binaries
  - instead these is made by organized bytes and the contend couldn't be translate because it don't has characters.
    - Images
    - Video

To manipulate these files there are different functions, but is important to know that the file in C language will be as pointer.
- Creation of a File
  - To create a File is important to know that this is a type of variable and it work as a pointer. to create a file we use the fopen() function with the Write parameter, if it doesn't exists the computer will create it.
    ```C
    FILE *file = fopen("file.txt", "w");
    ```
- Opening & Close
  - To Open a file we use the fopen() function and we will pass two parameters, the name of the file and the manipulation parameter. To close this file we can use the fclose function with the file variable as parameter.
    ```C
    FILE *file = fopen("file.txt", "w");
    fclose(file);
    ```
- Reading & Writing
  - We already mentioned the manipulation parameters, this is a list of they.
    | Mode | Mean |
    |----- | ---- |
    |r | Open a file to read |
    |w | Open a file to write |
    |a | open a file to add |
    |b | Open a file as binary file |
    |+ | Open a file as r and w at the same time |
  - Also there are functions that work like these
    | name | about |
    | ---- | ----- |
    | fgets() | Read a string of the file |
    | fputs() | Write a string on the file |
    | fprintf() | Write the output on the file |
    | fscanf() | Read an input of the file |
- Query
  - It is the way to ask a complete structure from a file it and it give us values stored in a specific structure.
    ```json
    data{
        name: "can",
        product_ID: 3,
        Property: 34;
    }
    ```
- Modification
  - to modify the content of a file, we can use the functions or the manipulation parameters, but if we need modify a specific part of the file, the following is to do this:
    - Create the file variable as write and read.
    - modify the content as necessary.
    - save this new version in the file.
    ```C
    int number;
    FILE text = fopen("file.txt","r+");

    fscanf(text, "%d", number);

    number += 30;

    fprintf(text, number);

    fclose(text);
    ```