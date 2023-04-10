# File Descriptors Overview

File descriptors allow programs to interact with files and other parts of the computer. In simple terms, a file descriptor is like a bookmark that a program uses to remember where it left off in a book.


## How File Descriptors Work

Imagine you're reading a book and you need to take a break. You put a bookmark in the book so that you can remember where you left off when you come back to it later. A file descriptor works in a similar way. When a program wants to access a file, it creates a file descriptor that acts like a bookmark in the book.

The file descriptor tells the program where it left off in the file, so it can continue reading or writing from that point. Once the program is finished using the file, it closes the file descriptor just like removing the bookmark from the book.

To read data from a file, the program can use the file descriptor to go back to the spot it left off and start reading again. This is like using the bookmark to go back to the page you left off in the book.

To write data to a file, the program can use the file descriptor to remember where it left off and write new information to the file. This is like using the bookmark to remember the last page you read and start writing your own story from there.

Sometimes, the program might want to print information to a file instead of to the screen. This can be done using the `dprintf()` function, which is like writing notes in the margin of the book.



## Using File Descriptors

`open()`: This is like asking the computer to open a book so you can read it. You have to tell the computer the name of the book (the file), and if you want to read it or write in it. Then the computer gives you a special number (the file descriptor) that you can use to talk to the book.


`close()`: When you're done with the book, you have to give it back to the computer so someone else can read it. This is like closing the book. The computer doesn't need the special number anymore, so you give it back by using `close()`.



`read()`: This is like looking at the words in the book and remembering them in your head. You use the special number (file descriptor) to tell the computer which book you want to read, and how many words you want to remember. Then the computer tells you what the words are and you remember them.



`write()`: This is like writing a story in the book. You use the special number (file descriptor) to tell the computer which book you want to write in, and what the story is. Then the computer writes the story in the book for you.


`dprintf()`: This is like writing a note to yourself in a special notebook. You use the special number (file descriptor) to tell the computer which notebook you want to write in, and what the note is. Then the computer writes the note in the notebook for you.



## Example Code

Here's an example of how to use file descriptors in C programming:

```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int fd = open("file.txt", O_WRONLY | O_CREAT);
  if (fd == -1) {
    perror("Error opening file");
    return 1;
  }
  write(fd, "Hello, world!", 13);
  close(fd);
  return 0;
}

```

In this example, we use the `open()` function to get a file descriptor for the file "file.txt". We then use the `write()` function to write the string "Hello, world!" to the file, and finally close the file descriptor using the `close()` function.





# Standard file descriptors

In Unix-like operating systems, there are three standard file descriptors:

* Standard input (stdin): This is a file descriptor that represents the input stream to a program. It is usually connected to the keyboard or another input device. Its POSIX name is STDIN_FILENO (defined in <unistd.h>).
* Standard output (stdout): This is a file descriptor that represents the output stream from a program. It is usually connected to the console or another output device. Its POSIX name is STDOUT_FILENO (defined in <unistd.h>).
* Standard error (stderr): This is a file descriptor that represents the error output stream from a program. It is usually connected to the console or another output device. Its POSIX name is STDERR_FILENO (defined in <unistd.h>).
