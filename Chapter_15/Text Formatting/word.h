#ifndef WORD_H
#define WORD_H

/**
 * read_word: Reads the next word from the inout and 
 *            stores it in word. Makes word empty if no
 *            word could be read because of the end-of-line.
 *            Truncates the word if its length exceeds len.
 **/

void read_word(char *word, int len);

#endif 