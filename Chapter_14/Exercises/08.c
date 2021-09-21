/**
 * Date:21-09-2021
 * by eddybruv
 **/


/** 
 * NB: 
 * The first two macros are neceessary to receive the value of the macro __LINE__, convert it into a string and then concat it to the LINE_FILE macro.
 * Without EXPAND_MACRO, #__LINE__ would expand to the string "__LINE__" and not its numeric value.
**/

#include <stdio.h>

#define STRINGIZE(x) #x
#define EXPAND_MACRO(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND_MACRO(__LINE__) " of file "  __FILE__)

int main(void){
    const char *str = LINE_FILE;
    printf("line: %s\n", str);
}

