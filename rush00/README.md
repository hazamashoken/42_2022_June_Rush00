# 42_2022_June_Rush00
we are in this together


When we stand together 


Files to submit: main.c, ft_putchar.c and your rush0X.c, ’0X’ represents the
rush number. For example rush00.c.
• Example of main.c:
```
int main()
{
rush(5, 5);
return (0);
}
```
• You must therefore create the function rush taking two variables of type int as
arguments, named respectively x and y.
• Your function rush should display (on-screen) a rectangle of x characters for width,
and y characters for length.
• Your function should never crash or loop indefinitely.
• Your main will be modified during defense, to check if you’ve handled everything
you’re supposed to. Here’s an example of test we’ll perform:
```
int main()
{
rush(123, 42);
return (0);
}
```

There are 5 variation of main.c hence dir Rush00 to Rush04

This is how to find what variation your group will be doing:

Take the first letter of the login of your team leader, convert it to a number following this rule:
A = 1
B = 2
C = 3
D = 4
...

then your subject is the number you got modulo 5, so :
1 % 5 = 1 (your subject is 1)
2 % 5 = 2 (your subject is 2)
3 % 5 = 3 (your subject is 3)
4 % 5 = 4 (your subject is 4)
5 % 5 = 0 (your subject is 0)
6 % 5 = 1 (your subject is 1)
...
