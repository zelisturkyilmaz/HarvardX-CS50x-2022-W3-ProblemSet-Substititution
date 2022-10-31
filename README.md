# CS50's Introduction to Computer Science
## HarvardX - CS50x
### Week 3 Problem Set - Substititution.c
<hr>


### Assignment and Requirements:
Write and execute a program that enables user to encrypt messages using a substitution cipher. At the time the user executes the program, they should provide a command-line argument, on what the key should be in the secret message they’ll provide at runtime.

For example, if the user inputs a key of ```YTNSHKVEFXRBAUQZCLWDMIPGJO``` and a plaintext of HELLO:

```
$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO
plaintext:  HELLO
ciphertext: EHBBQ
```

#### Specification:

- Program must accept a single command-line argument, the key to use for the substitution. The key itself should be case-insensitive, so whether any character in the key is uppercase or lowercase should not affect the behavior of program.
- If program is executed without any command-line arguments or with more than one command-line argument, program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
- If the key is invalid (as by not containing 26 characters, containing any character that is not an alphabetic character, or not containing each letter exactly once), program should print an error message of choice (with printf) and return from main a value of 1 immediately.
- Program must output plaintext: (without a newline) and then prompt the user for a string of plaintext (using get_string).
- Program must output ciphertext: (without a newline) followed by the plaintext’s corresponding ciphertext, with each alphabetical character in the plaintext substituted for the corresponding character in the ciphertext; non-alphabetical characters should be outputted unchanged.
- Program must preserve case: capitalized letters must remain capitalized letters; lowercase letters must remain lowercase letters.
- Program should then exit by returning 0 from main.

#### Compiling And Execution:

Before execution of the program, it must be compiled with a compiler, translating it from source code into machine code.\
Execute the command below in the Command Line to do that:

```C
make substititution
```

Execute the program by executing the below:
```C
./substitution *key
```
substituting a valid key in place of ```*key```
