/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvan-don <kvan-don@student.42luxembourg.l  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:50:21 by kvan-don          #+#    #+#             */
/*   Updated: 2024/03/02 21:24:05 by kvan-don         ###   ########.fr       */
/*	                                                                          */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    uppercase(unsigned int index, char c);
void    square_char(unsigned int index, char *c);

int	main(void)
{
	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_isalpha\033[0m\n");
	printf("Is \'Q\' alpha? ");
	printf("%d\n", ft_isalpha('Q'));
	printf("Is \'2\' alpha? ");
	printf("%d\n", ft_isalpha('2'));
	printf("----------------\n\n");
     
    printf("----------------\n");
    printf("\033[1m\033[31mTest ft_isdigit\033[0m\n");
	printf("Is \'Q\' digit? ");
	printf("%d\n", ft_isdigit('Q'));
	printf("Is \'2\' digit? ");
	printf("%d\n", ft_isdigit('2'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_isalnum\033[0m\n");
	printf("Is \'Q\' alnum? ");
	printf("%d\n", ft_isalnum('Q'));
	printf("Is \'2\' alnum? ");
	printf("%d\n", ft_isalnum('2'));
	printf("Is \'\\\' alnum? ");
	printf("%d\n", ft_isalnum('\\'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_isascii\033[0m\n");
	printf("Is \'Q\' ascii? ");
	printf("%d\n", ft_isascii('Q'));
	printf("Is \'2\' ascii? ");
	printf("%d\n", ft_isascii('2'));
	printf("Is \'\\\' ascii? ");
	printf("%d\n", ft_isascii('\\'));
	printf("Is 255 ascii? ");
	printf("%d\n", ft_isascii(255));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_isprint\033[0m\n");
	printf("Is \'Q\' print? ");
	printf("%d\n", ft_isprint('Q'));
	printf("Is \'2\' print? ");
	printf("%d\n", ft_isprint('2'));
	printf("Is \'\\\' print? ");
	printf("%d\n", ft_isprint('\\'));
	printf("Is 255 print? ");
	printf("%d\n", ft_isprint(255));
	printf("----------------\n\n");
    
	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_strlen\033[0m\n");
	printf("length of string: 12345678: ");
	printf("%zu\n", ft_strlen("12345678"));
	printf("length of string: Hello, World!: ");
	printf("%zu\n", ft_strlen("Hello, World"));
	printf("----------------\n\n");
     
    printf("----------------\n");
    printf("\033[1m\033[31mTest ft_memset\033[0m\n");
	char buffer[10];
	ft_memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[sizeof(buffer) -1] = '\0';
	printf("buffer after memset: %s\n", buffer);
	ft_memset(buffer, 'B', 5);
	printf("buffer after changing first 5 characters: %s\n", buffer);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_bzero\033[0m\n");
	for (size_t i = 0; i < sizeof(buffer) - 1; i++)
		buffer[i] = 'A' + i;
	buffer[sizeof(buffer) - 1] = '\0';
	printf("Buffer before ft_bzero: %s\n", buffer);
	ft_bzero(buffer, 5);
	printf("Buffer after ft_bzero: ");
	for (size_t i = 0; i < sizeof(buffer) - 1; i++) 
	{
		if (buffer[i] == 0)
			printf("'\\0' ");
		else
			printf("%c", buffer[i]);
 	}
	printf("\n----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_memcpy\033[0m\n");
	char src[] = "Test string";
	char dst[20];
	ft_memcpy(dst, src, sizeof(src));
 	printf("Source: %s\n", src);
	printf("Destination after memcpy: %s\n", dst);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_memmove\033[0m\n");
	char str[] = "Example string";
	printf("Original: %s\n", str);
	ft_memmove(str, str + 8, 6);
	printf("After ft_memmove: %s\n", str);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_strlcpy\033[0m\n");
	char *src2 = "Hello, World!";
	char dest2[5];
	unsigned int result = ft_strlcpy(dest2, src2, sizeof(dest2));
	printf("Original string: Hello, World!, Destination size: 5\n");
	printf("Copied string: %s\n", dest2);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_strlcat\033[0m\n");
	printf("String 1:Hello String 2: ,World");
	char buffer1[20] = "Hello";
	const char *addition = " World";
	size_t result1 = ft_strlcat(buffer1, addition, sizeof(buffer1));
	printf("After strlcat: '%s', Total length: %zu\n", buffer1, result1);
	char buffer2[6] = "Hello";
	result1 = ft_strlcat(buffer2, addition, sizeof(buffer2));
	printf("After strlcat: '%s', Total length: %zu\n", buffer2, result1);
	char buffer3[4] = "Hi";
	result1 = ft_strlcat(buffer3, addition, sizeof(buffer3));
	printf("After strlcat: '%s', Total length: %zu\n", buffer3, result1);
	printf("----------------\n\n");

	printf("----------------\n");
        printf("\033[1m\033[31mTest ft_toupper\033[0m\n");
        printf("c in ft_toupper() ");
        printf("%c\n", ft_toupper('c'));
        printf("2 in ft_upper() ");
        printf("%c\n", ft_toupper('2'));
	printf("Z in ft_upper() ");
	printf("%c\n", ft_toupper('Z'));
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_tolower\033[0m\n");
        printf("c in ft_tolower() ");
        printf("%c\n", ft_tolower('c'));
        printf("2 in ft_tolower() ");
        printf("%c\n", ft_tolower('2'));
        printf("Z in ft_tolower() ");
        printf("%c\n", ft_tolower('Z'));
        printf("----------------\n\n");

	printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strchr\033[0m\n");
	printf("Search string: Hello, World!");
	const char *strchr = "Hello, World!";
 	char *resultstrchr = ft_strchr(strchr, 'W');
 	if (resultstrchr)
		printf("Found 'W' at: %s\n", resultstrchr);
	else
        	printf("'W' not found\n");
	resultstrchr = ft_strchr(strchr, 'x');
 	if (resultstrchr)
        	printf("Found 'x' at: %s\n", resultstrchr);
	else
		printf("'x' not found\n");
	resultstrchr = ft_strchr(strchr, '\0');
	if (resultstrchr)
		printf("Found '\\0' at: %s\n", resultstrchr);
	else
		printf("'\\0' not found\n");
	printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strrchr\033[0m\n");
	printf("Search the string: Hello, World!");
        const char *strrchr = "Hello, World!";
        char *resultstrrchr = ft_strrchr(strrchr, 'l');
        if (resultstrrchr)
                printf("Last 'l' found at: %s\n", resultstrrchr);
        else
                printf("'l' not found\n");
        resultstrrchr = ft_strrchr(strrchr, 'x');
        if (resultstrrchr)
                printf("last 'x' found at: %s\n", resultstrrchr);
        else
                printf("'x' not found\n");
        resultstrrchr = ft_strrchr(strrchr, '\0');
        if (resultstrrchr)
                printf("Null terminator '\\0' found at: %s\n", resultstrrchr);
        else
                printf("'\\0' not found\n");
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strncmp\033[0m\n");
	char *strncmp1;
	char *strncmp2;
	char *strncmp3;
	strncmp1 = "Hello";
	strncmp2 = "Hello";
	strncmp3 = "World";
	printf("Comparing '%s' and '%s' upto 4: %d\n", strncmp1, strncmp2, ft_strncmp(strncmp1, strncmp2, 4));
	printf("Comparing '%s' and '%s' upto 4: %d\n", strncmp1, strncmp3, ft_strncmp(strncmp1, strncmp3, 4));
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_memchr\033[0m\n");
	printf("Find the letter e\n");
	char arrmemchr[] = "Find the letter e";
	char targetmemchr = 'e';
	char *resultmemchr = ft_memchr(arrmemchr, targetmemchr, sizeof(arrmemchr));
	if (result != '\0')
		printf("Found '%c' at position: %ld\n", targetmemchr, resultmemchr - arrmemchr);
	else
		printf("'%c' not found within the first %zu bytes.\n", targetmemchr, sizeof(arrmemchr));
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_memcmp\033[0m\n");
	char arrmemcmp1[] = "Hello, World!";
	char arrmemcmp2[] = "Hello, World!";
	char arrmemcmp3[] = "Hello, world!";
	int resultmemcmp = ft_memcmp(arrmemcmp1, arrmemcmp2, sizeof(arrmemcmp1));
	printf("Comparing 'Hello, World!' and 'Hello, World!' (identical): %d\n", resultmemcmp);
	resultmemcmp = ft_memcmp(arrmemcmp1, arrmemcmp3, sizeof(arrmemcmp1));
	printf("Comparing 'Hello, World!' and 'Hello, world!' (different): %d\n", resultmemcmp);
	resultmemcmp = ft_memcmp(arrmemcmp1, arrmemcmp3, 7);
	printf("Comparing 'Hello, World!', 'Hello, world!' (first 7 bytes): %d\n", resultmemcmp);
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strnstr\033[0m\n");
	const char *haystack = "This is a simple haystack.";
	const char *needle = "simple";
	size_t lenstrnstr = 25;
	char *resultstrnstr = ft_strnstr(haystack, needle, lenstrnstr);
	if (resultstrnstr)
		printf("Found '%s' in '%s' within the first %zu characters.\n", needle, haystack, lenstrnstr);
	else
		printf("'%s' not found within the first %zu characters of '%s'.\n", needle, lenstrnstr, haystack);
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_atoi\033[0m\n");
	char *testatoi[] = {
        "123",
        "-123",
        "  42",
        "\t\n\v\f\r  42abc",
        "abc123",
        "+-42",
        "2147483647",
        "-2147483648",
        "9999999999"
	};
	for (int i = 0; i < sizeof(testatoi) / sizeof(testatoi[0]); i++) {
        printf("'%s' -> %d\n", testatoi[i], ft_atoi(testatoi[i]));
	}
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_calloc\033[0m\n");
	size_t ncalloc = 10;
	int *arrcalloc = ft_calloc(ncalloc, sizeof(int));
	if (arrcalloc != NULL) {
        printf("Array elements initialized to: ");
        for (size_t icalloc = 0; icalloc < ncalloc; icalloc++) {
            printf("%d ", arrcalloc[icalloc]);
        }
        printf("\n");
	} else {
        printf("Memory allocation failed\n");
	}
	free(arrcalloc);
	printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strdup\033[0m\n");
	char	originalstrdup[] = "Hello, World!";
	char	*duplicatestrdup;

	duplicatestrdup = ft_strdup(originalstrdup);
	if (duplicatestrdup != NULL)
	{
		printf("Original: %s\n", originalstrdup);
		printf("Duplicate: %s\n", duplicatestrdup);
		free(duplicatestrdup);
	}
	else
		printf("Failed to allocate memory for duplicate string.\n");
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_substr\033[0m\n");
	char const *ssubstr = "Hello, World!";
	char *subsubstr;
	printf("string: 'Hello, World!'");
	subsubstr = ft_substr(ssubstr, 7, 5);
	printf("Substring start 7, len 5: %s\n", subsubstr);
	free(subsubstr);
	subsubstr = ft_substr(ssubstr, 0, 5);
	printf("Substring start 0, len 5: %s\n", subsubstr);
	free(subsubstr);
	subsubstr= ft_substr(ssubstr, 20, 5);
	printf("Substring start 20, len 5 (beyond end): %s\n", subsubstr);
	free(subsubstr);
	subsubstr = ft_substr(ssubstr, 7, 0);
	printf("Substring start 7, len 0 (zero length): %s\n", subsubstr);
	free(subsubstr);
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strjoin\033[0m\n");
	char const *s1strjoin = "Hello, ";
	char const *s2strjoin = "world!";
	char *resultstrjoin;
	resultstrjoin = ft_strjoin(s1strjoin, s2strjoin);
	if (resultstrjoin == NULL) {
		printf("Memory allocation failed\n");
        	return 1;
	}
	printf("Result: %s\n", resultstrjoin);
	free(resultstrjoin);
	printf("----------------\n\n");

    printf("----------------\n");
    printf("\033[1m\033[31mTest ft_strtrim\033[0m\n");
	char const *teststrtrim1 = "   Hello, World!   ";
	char const *setstrtrim1 = " ";
	char *resultstrtrim1 = ft_strtrim(teststrtrim1, setstrtrim1);
 	printf("Original: '%s'\nTrimmed: '%s'\n\n", teststrtrim1, resultstrtrim1);
 	free(resultstrtrim1);
	char const *teststrtrim2 = "****This is a test****";
	char const *setstrtrim2 = "*";
	char *resultstrtrim2 = ft_strtrim(teststrtrim2, setstrtrim2);
	printf("Original: '%s'\nTrimmed: '%s'\n\n", teststrtrim2, resultstrtrim2);
	free(resultstrtrim2);
	char const *teststrtrim3 = "abcNo trim herecba";
	char const *setstrtrim3 = "abc";
	char *resultstrtrim3 = ft_strtrim(teststrtrim3, setstrtrim3);
 	printf("Original: '%s'\nTrimmed: '%s'\n\n", teststrtrim3, resultstrtrim3);
	free(resultstrtrim3);
	char const *teststrtrim4 = "Nothing to trim";
	char const *setstrtrim4 = "";
	char *resultstrtrim4 = ft_strtrim(teststrtrim4, setstrtrim4);
	printf("Original: '%s'\nTrimmed: '%s'\n\n", teststrtrim4, resultstrtrim4);
	free(resultstrtrim4);
	char const *teststrtrim5 = "";
	char const *setstrtrim5 = "abc";
	char *resultstrtrim5 = ft_strtrim(teststrtrim5, setstrtrim5);
	printf("Original: '%s'\nTrimmed: '%s'\n\n", teststrtrim5, resultstrtrim5);
	free(resultstrtrim5);
	printf("----------------\n\n");

    printf("----------------\n");
    printf("\033[1m\033[31mTest ft_split\033[0m\n");
    const char *testStrSplit = "Hello, world! This is a test.";
    char delimiterSplit = ' ';
    char **substringsSplit;
    substringsSplit = ft_split(testStrSplit, delimiterSplit);
    if (substringsSplit == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; substringsSplit[i] != NULL; i++) {
        printf("Substring %d: %s\n", i, substringsSplit[i]);
    }
    for (int i = 0; substringsSplit[i] != NULL; i++) {
        free(substringsSplit[i]);
    }
    free(substringsSplit);
	printf("----------------\n\n");

	printf("----------------\n");
	printf("\033[1m\033[31mTest ft_itoa\033[0m\n");
	int numbersitoa[] = {0, -1, 2147483647, -2147483648, 123, -456};
	int countitoa = sizeof(numbersitoa) / sizeof(numbersitoa[0]);
	int iitoa = 0;
	while (iitoa < countitoa) {
        char *stritoa = ft_itoa(numbersitoa[iitoa]);
        printf("The string representation of %d is: %s\n", numbersitoa[iitoa], stritoa);
        free(stritoa);
        iitoa++;
	}
	printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_strmapi\033[0m\n");
	char *test_stringstrmapi = "hello world";
	char *result_stringstrmapi = ft_strmapi(test_stringstrmapi, uppercase);
	if (result_stringstrmapi != NULL) {
        printf("Original string: %s\n", test_stringstrmapi);
        printf("Transformed string: %s\n", result_stringstrmapi);
        free(result_stringstrmapi);
    } else {
        printf("Memory allocation failed.\n");
    }
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_striteri\033[0m\n");
	char test_stringstriteri[] = "hello";
	ft_striteri(test_stringstriteri, square_char);
	printf("Modified string: %s\n", test_stringstriteri);
	printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_putchar_fd\033[0m\n");
	char *messageputcharfd = "Hello, standard output!\n";
	for (int i = 0; messageputcharfd[i] != '\0'; i++)
		ft_putchar_fd(messageputcharfd[i], STDOUT_FILENO);
	char *error_messageputcharfd = "Hello, standard error!\n";
	for (int i = 0; error_messageputcharfd[i] != '\0'; i++)
	ft_putchar_fd(error_messageputcharfd[i], STDERR_FILENO);
	printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_putstr_fd\033[0m\n");
	ft_putstr_fd("Hello, standard output!\n", STDOUT_FILENO);
	ft_putstr_fd("Hello, standard error!\n", STDERR_FILENO);
	printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_putendl_fd\033[0m\n");
        ft_putendl_fd("Hello, standard output!\n", STDOUT_FILENO);
        ft_putendl_fd("Hello, standard error!\n", STDERR_FILENO);
        printf("----------------\n\n");

        printf("----------------\n");
        printf("\033[1m\033[31mTest ft_putnbr_fd\033[0m\n");
	printf("Test: -2147482648\n");
	ft_putnbr_fd(-2147483648, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	printf("Test: -123\n");
	ft_putnbr_fd(-123, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	printf("Test: 0\n");
	ft_putnbr_fd(0, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	printf("Test: 5\n");
	ft_putnbr_fd(5, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	printf("Test: 12345\n");
	ft_putnbr_fd(12345, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	printf("----------------\n\n");
}

char	uppercase(unsigned int index, char c)
{
    // Example function for ft_strmapi
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else
        return c;
}

void	square_char(unsigned int index, char *c)
{
	// Example function for ft_striteri
    if (*c >= 32 && *c <= 126)
        *c = (*c - 32) * (*c - 32) % (126 - 32 + 1) + 32;
}
