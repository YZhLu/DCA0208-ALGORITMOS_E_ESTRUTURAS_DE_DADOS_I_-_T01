#ifndef TIMER_DOT_H    /* This is an "include guard" */
#define TIMER_DOT_H    /* prevents the file from being included twice. */
                     /* Including a header file twice causes all kinds */
                     /* of interesting problems.*/

/**
 * This is a function declaration.
 * It tells the compiler that the function exists somewhere.
 */
void timer( void (*method)(int* vector, int len), int* vector, int n, int samples);

#endif /* TIMER_DOT_H */