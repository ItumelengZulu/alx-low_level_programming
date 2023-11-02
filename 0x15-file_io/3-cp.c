#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/* Function to print an error message and exit with a specific code */
void print_error_and_exit(int code, const char *format, ...) {
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    /* Check if the number of arguments is correct */
    if (argc != 3) {
        print_error_and_exit(97, "Usage: cp file_from file_to\n");
    }

    /* Open the source file for reading */
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    /* Open the destination file for writing or create it if it doesn't exist */
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
    }

    /* Copy data from source to destination using a buffer */
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            print_error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
        }
    }

    /* Handle read error from source file */
    if (bytes_read == -1) {
        print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    /* Close file descriptors and handle any errors */
    if (close(fd_from) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_from);
    }

    if (close(fd_to) == -1) {
        print_error_and_exit(100, "Error: Can't close fd %d\n", fd_to);
    }

    return 0;
}

