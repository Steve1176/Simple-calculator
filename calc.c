#include <stdio.h>
#include <math.h>

int main(void)
{
    const char ADD = '+';
    const char SUB = '-';
    const char DIV = '/';
    const char MUL = '*';
    const char POW = '^';
    const char SQR = 'r';
    float a; /* first number */
    float b; /* second number */
    char c;  /* operation symbol */
    int l = 0; /* count for controlling infinite cycle */
    char k; /* another operation symbol */

    printf("=================CALCULATOR=================\n");
    printf("Press [Enter] to continue, \n");
    printf("Or press 'i' for instructions: ");
    scanf("%c", &k);
    if (k == 'i')
    {
	printf("--------------------------------------------\n");
	printf("This is a simple terminal calculator that\n");
	printf("I wrote mainly for eductational purposes,\n");
	printf("but also often use it in practice. I tried\n");
	printf("make the interface simple and friendly, so\n");
	printf("I hope you like it! Have fun! \n");
	printf("v1.0			--Steve1176, 2024\n");
	printf("					  \n");
	printf("So, there are the commands you can use:\n");
	printf(">xxx -- stop the program and exit;\n");
	printf(">a+b -- add 'a' to 'b', 'a' and 'b' are\n");
	printf("	numbers;\n");
	printf(">a-b -- subtract 'b' from 'a';          \n");
	printf(">a*b -- multiply 'a' by 'b';\n");
	printf(">a^b -- raise 'a' to the power 'b';\n");
	printf(">ar0  -- take the square root of 'a', 'r'\n");
	printf("	means \"[square] root\", 0 = empty\n");
	printf("	argument 'b' :) You can fix it... \n");
	printf("	ex.: 4r0 = 2; 16r0 = 4;\n");
	printf("There are all features of this calculator,\n");
	printf("if after press of 'enter', you see one\n");
	printf("more line, it means you enter too little \n");
	printf("data, so enter something and try again! \n");
	printf("                GOOD LUCK!                \n");

    }
    printf("--------------------------------------------\n");

    while (l < 3) {				/* infinite cycle for calc work */
	printf("Enter: ");			/* pick and save operators and  */
	scanf("%f", &a);			/* operands                     */
	scanf("%c", &c);
	scanf("%f", &b);
        if (c != 'x') {
	    if (c == ADD)			/* addition */
	    {
	        printf("%f\n", a+b);
	    }
	    else if (c == SUB)			/* subtraction */
	    {
	        printf("%f\n", a-b);
	    }
	    else if (c == DIV)			/* division */
	    {
	        printf("%f\n", a/b);
	    }
	    else if (c == MUL)			/* multiplication */
	    {
	        printf("%f\n", a*b);
	    }
	    else if (c == POW)			/* powering numbers */
	    {
		float d = pow(a, b);
	        printf("%f\n", d);
            }
	    else if (c == SQR)			/* square root */
	    {
		float f;
		f = sqrt(a);
		printf("%f\n", f);
		b = 0;
		c = 1;
	    }
	    else if (c == 'x')
	    {
	    }
            else
            {
                printf("ERROR\n");
            }
        printf("--------------------------------------------\n");
        }

        else
        {
        l = 5;
        }
    }		/* close while cycle*/
    printf("============================================\n");

return 0;
}
