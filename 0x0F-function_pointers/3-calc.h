#ifndef CALC_H
#define CALC_H


/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
