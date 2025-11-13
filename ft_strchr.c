#include <libft.h>

char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char cc;

    cc = (char) c;
    i = 0;
    while (s[i])
	{
		 if (s[i] == cc)
            return ((char *) &s[i]);
		i++;
	}
	 if (s[i] == cc)
            return ((char *) &s[i]);
	return (NULL);
}



int main(void)
{
    char str[] = "banana";
    char *ptr;

    // 1️⃣ Звичайний символ, що є у рядку
    ptr = ft_strchr(str, 'a');
    if (ptr)
        printf("Find 'a': %s\n", ptr);
    else
        printf("Find 'a': not found\n");

    // 2️⃣ Інший символ, що також є
    ptr = ft_strchr(str, 'n');
    if (ptr)
        printf("Find 'n': %s\n", ptr);
    else
        printf("Find 'n': not found\n");

    // 3️⃣ Символ, якого немає
    ptr = ft_strchr(str, 'x');
    if (ptr)
        printf("Find 'x': %s\n", ptr);
    else
        printf("Find 'x': not found\n");

    // 4️⃣ Пошук кінця рядка ('\0')
    ptr = ft_strchr(str, '\0');
    if (ptr)
        printf("Find '\\0': found at address %p (points to end of string)\n", (void *)ptr);
    else
        printf("Find '\\0': not found\n");

    return (0);
}
