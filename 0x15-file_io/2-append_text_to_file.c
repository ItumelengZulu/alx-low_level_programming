#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append text to.
 * @text_content: The text content to add to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content) {
    int fd;

    if (filename == NULL)
        return -1;

    fd = open(filename, O_WRONLY | O_APPEND);

    if (fd == -1)
        return -1;

    if (text_content != NULL) {
        ssize_t bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}

