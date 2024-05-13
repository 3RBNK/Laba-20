//
// Created by lenovo on 13.05.24.
//

#ifndef CODE_STRING__H
#define CODE_STRING__H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <ctype.h>


#define ASSERT_STRING(expected, got) assert_string(expected, got, __FILE__, __FUNCTION__, __LINE__)

#define MAX_WORD_SIZE 30
#define MAX_N_WORDS_IN_STRING 100
#define MAX_STRING_SIZE 4096

extern char _string_buffer[MAX_STRING_SIZE + 1];


typedef struct word_descriptor {
    char* begin;
    char* end;
} word_descriptor;


typedef struct bag_of_words {
    word_descriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} bag_of_words;

extern bag_of_words _bag;
extern bag_of_words _bag2;


size_t strlen_(const char* begin);


char* find(char *begin, char* end, int ch);


char* find_non_space(char* begin);


char* find_space(char* begin);


char* find_non_space_reverse(char* r_begin, const char* r_end);


char* find_space_reverse(char* r_begin, const char* r_end);


int strcmp_(const char* lhs, const char* rhs);


char* copy(const char* begin_source, const char* end_source, char* begin_destination);


char* copy_if(const char* begin_source, const char* end_source, char* begin_destination, int (*f)(int));


char* copy_if_reverse(const char* r_begin_source, const char* r_end_source, char* begin_destination, int (*f)(int));


char* get_end_of_string(char* s);


bool get_word(char* begin_search, word_descriptor* word);


bool get_word_without_space(char* begin_search, word_descriptor* word);


bool get_word_reverse(char* r_begin, char* r_end, word_descriptor* word);


void print_word(word_descriptor word);


void free_string(char* string);


void free_bag(bag_of_words* bag);


void assert_string(const char* expected, char* got,
                   char const* file_name, char const* func_name,
                   int line);


bool is_word_equal(word_descriptor word1, word_descriptor word2);


bool is_sub_word(const word_descriptor word1, const word_descriptor word2);


void word_descriptor_to_string(word_descriptor word, char* dest);


bool is_palindrome_word(word_descriptor* word);


#endif //CODE_STRING__H
