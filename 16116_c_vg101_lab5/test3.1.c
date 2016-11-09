#include "string.h"
#include "string.h"
#include <stdbool.h>
// 操作符
// 优先级		符号		运算顺序
// 1		!		从右至左
// 2		* / %		从左至右
// 3		+ -		从左至右
// 4		=		从右至左
int op_preced(const char c)
{
    switch(c)    {
        case '*':  case '/':
            return 3;
        case '+': case '-':
            return 2;
    }
    return 0;
}

unsigned int op_arg_count(const char c)
{
            return 2;
}

#define op_left_assoc(c) (c == '+' || c == '-' || c == '/' || c == '*' || c == '%')
#define is_operator(c)   (c == '+' || c == '-' || c == '/' || c == '*' || c == '!' || c == '%' || c == '=')
#define is_function(c)   (c >= 'A' && c <= 'Z')
#define is_ident(c)      ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))

bool shunting_yard(const char *input, char *output)
{
    const char *strpos = input, *strend = input + strlen(input);
    char c, stack[32], sc, *outpos = output;
    unsigned int sl = 0;
    while(strpos < strend)   {
        c = *strpos;
        if(c != ' ')    {
            // 如果输入为一个数字，则直接入输出队列
            if(is_ident(c))  {
                *outpos = c; ++outpos;
                *outpos=',';
                ++outpos;
            }
            // 如果输入符号为操作符，op1，然后:
            else if(is_operator(c))  {
                while(sl > 0)    {
                    sc = stack[sl - 1];
                    // While there is an operator token, o2, at the top of the stack
                    // op1 is left-associative and its precedence is less than or equal to that of op2,
                    // or op1 is right-associative and its precedence is less than that of op2,
                    if(is_operator(sc) &&
                        ((op_left_assoc(c) && (op_preced(c) <= op_preced(sc))) ||
                           (!op_left_assoc(c) && (op_preced(c) < op_preced(sc)))))   {
                        // Pop o2 off the stack, onto the output queue;
                        *outpos = sc;
                        ++outpos;
                        *outpos=',';
                        ++outpos;
                        sl--;
                    }
                    else   {
                        break;
                    }
                }
                // push op1 onto the stack.
                stack[sl] = c;
                ++sl;
            }
            // If the token is a left parenthesis, then push it onto the stack.
            else if(c == '(')   {
                stack[sl] = c;
                ++sl;
            }
            // If the token is a right parenthesis:
            else if(c == ')')    {
                bool pe = false;
                // Until the token at the top of the stack is a left parenthesis,
                // pop operators off the stack onto the output queue
                while(sl > 0)     {
                    sc = stack[sl - 1];
                    if(sc == '(')    {
                        pe = true;
                        break;
                    }
                    else  {
                        *outpos = sc;
                        ++outpos;
                        *outpos=',';
                        ++outpos;
                        sl--;
                    }
                }
                // Pop the left parenthesis from the stack, but not onto the output queue.
                sl--;
                // If the token at the top of the stack is a function token, pop it onto the output queue.



            }
        }
        ++strpos;
    }
    // When there are no more tokens to read:
    // While there are still operator tokens in the stack:
    while(sl > 0)  {
        sc = stack[sl - 1];
        if(sc == '(' || sc == ')')   {
            printf("Error: parentheses mismatched\n");
            return false;
        }
        *outpos = sc;
        ++outpos;
        *outpos=',';
        ++outpos;

        --sl;
    }
    *outpos = 0; // Null terminator
    return true;
}

bool execution_order(const char *input) {
    const char *strpos = input, *strend = input + strlen(input);
    char c, res[4];
    unsigned int sl = 0, sc, stack[32], rn = 0;
	// While there are input tokens left
    while(strpos < strend)  {
		// Read the next token from input.
        c = *strpos;
		// If the token is a value or identifier
        if(is_ident(c))    {
			// Push it onto the stack.
            stack[sl] = c;
            ++sl;
        }
		// Otherwise, the token is an operator  (operator here includes both operators, and functions).
        else if(is_operator(c) || is_function(c))    {
			++rn;
			// It is known a priori that the operator takes n arguments.
			unsigned int nargs = op_arg_count(c);
			// If there are fewer than n values on the stack
			if(sl < nargs) {
				// (Error) The user has not input sufficient values in the expression.
				return false;
			}
			// Else, Pop the top n values from the stack.
			// Evaluate the operator, with the values as arguments.
			// Push the returned results, if any, back onto the stack.
            stack[sl] = *(unsigned int*)res;
            ++sl;
        }
        ++strpos;
    }
	// If there is only one value in the stack
	// That value is the result of the calculation.
	if(sl == 1) {
		sc = stack[sl - 1];
		sl--;
	//	printf("%s is a result\n", &sc);
		return true;
	}
	// If there are more values in the stack
	// (Error) The user input has too many values.
	return false;
}

int main() {
    // functions: A() B(a) C(a, b), D(a, b, c) ...
    // identifiers: 0 1 2 3 ... and a b c d e ...
    // operators: = - + / * % !
    const char *input = "1+2*(3-4)";
    char output[128];
    printf("input: %s\n", input);
    if(shunting_yard(input, output))    {

        printf("output: %s\n", output);
    }
    return 0;
}
