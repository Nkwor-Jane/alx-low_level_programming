#ifndef CALC_ALL
#define CALC_ALL
/**
 * op_add - add two intergers
 * op_sub - subtract two intergers
 * op_mul - multiply two integers
 * op_div - divide two integers
 * op_mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 *
 *
 * struct op -STruct op
 *
 * @op: the operator
 * @f: function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
