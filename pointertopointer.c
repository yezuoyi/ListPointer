#include <stdio.h>
void change(char *in)
{
    // in here is just a copy of the original pointer.
    // In other words: It's a pointer pointing to "A" in our main case 
    in = "B";
    // We made our local copy point to something else, but did _not_ change what the original pointer points to.
}
void really_change(char **in)
{
    // We get a pointer-to-a-pointer copy. This one can give us the address to the original pointer.
    // We now know where the original pointer is, we can make _that one_ point to something else.
    *in = "B";
}
int main(int argc, char *argv[])
{
    char *a = "A";
    change(a);
    printf("%s\n", a); /* Will print A */
    really_change(&a);
    printf("%s\n", a); /* Will print B */
    return 0;
}