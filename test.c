#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char func_strmapi_A(unsigned int uint_func_strmapi, char c)
{
    return ('a' <= c && c <= 'z' ? c - 32 : c);
}

char func_strmapi_B(unsigned int uint_func_strmapi, char c)
{
    return (uint_func_strmapi + '0');
}

void lst_print(void *str)
{
    printf("iter -- %s\n",(char *)str);
}

int main()
{

    //
    //memset
    printf("\n\nft_memset\n");
    //
    char *str_memset;
    str_memset = (char *)malloc(100);
    printf("%p\n", ft_memset(str_memset, 'a', 10));
    for (int i = 0; i < 10; i++)
    {
        printf("%c", *(str_memset + i));
    }
    printf(" == aaaaaaaaaaa\n");

    //
    //bzero
    printf("\n\nft_bzero\n");
    //
    char *str_bzero;
    str_bzero = (char *)malloc(10);
    ft_bzero(str_bzero, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(str_bzero + i));
    }

    //
    //memcpy
    printf("\n\nmemcpy\n");
    //
    char *str_memcpy_src;
    char *str_memcpy_dst;
    str_memcpy_src = (char *)malloc(14);
    str_memcpy_dst = (char *)malloc(14);
    str_memcpy_src = "Hello MEMCPY!";
    ft_memcpy(str_memcpy_dst, str_memcpy_src, 10);
    printf("%s == Hello MEMC\n", str_memcpy_dst);

    //
    //memCcpy
    printf("\n\nmemccpy\n");
    //
    char str_memccpy_src[100] = "LINUX!!";
    char str_memccpy_dst[100] = "AAAAAAAAAAAAA";
    char c = 'X';
    printf("%p\n", ft_memccpy(str_memccpy_dst, str_memccpy_src, c, (int)6));
    printf("%s == LINUXAAAAAAAA\n", str_memccpy_dst);

    //
    //memmove
    printf("\n\nmemmove\n");
    //
    char str_memmove_A[11] = "0123456789";
    char str_memmove_B[11] = "0123456789";
    printf("%p  %s\n", ft_memmove(str_memmove_A, str_memmove_A + 5, 3), str_memmove_A);
    printf("                   ||\n");
    printf("                   ||\n");
    printf("%p  %s\n", memmove(str_memmove_B, str_memmove_B + 5, 3), str_memmove_B);

    //
    //memchr
    printf("\n\nmemchr\n");
    //
    char str_memchr_txt[10] = "012345";
    char chr_memchr_serchA = '3';
    char chr_memchr_serchB = '6';
    printf("%p == ", memchr(str_memchr_txt, chr_memchr_serchA, 7));
    printf("%p\n", ft_memchr(str_memchr_txt, chr_memchr_serchA, 7));
    printf("%p == ", memchr(str_memchr_txt, chr_memchr_serchB, 7));
    printf("%p\n", ft_memchr(str_memchr_txt, chr_memchr_serchB, 7));

    //
    //memcmp
    printf("\n\nmemcmp\n");
    //
    char str_memcmp_A[3] = "t\200";
    char str_memcmp_B[3] = "t\0";
    printf("%d  %d both >=1\n", memcmp(str_memcmp_A, str_memcmp_B, 2), ft_memcmp(str_memcmp_A, str_memcmp_B, 2));

    //
    //strlen
    printf("\n\nstrlen\n");
    //
    char str_strlen_A[10] = "hello";
    char str_strlen_B[10] = "";
    printf("%ld == %ld\n", ft_strlen(str_strlen_A), strlen(str_strlen_A));
    printf("%ld == %ld\n", ft_strlen(str_strlen_B), strlen(str_strlen_B));

    //
    //strlcpy
    printf("\n\nstrlcpy\n");
    //
    char str_strlcpy_A[100] = "ABC";
    char str_strlcpy_B[100] = "HELLO!";
    // char str_strlcpy_C[10];
    char str_strlcpy_D[100];
    // strlcpy(str_strlcpy_C, str_strlcpy_A, 5);
    ft_strlcpy(str_strlcpy_B, str_strlcpy_A, 2);
    printf("%s\n", str_strlcpy_B);
    // strlcpy(str_strlcpy_C, str_strlcpy_B, 3);
    ft_strlcpy(str_strlcpy_D, str_strlcpy_B, 100);
    printf("%s\n", str_strlcpy_D);

    //
    //strlcat
    printf("\n\nstrlcat\n");
    //
    char str_strlcat_A[10] = "WORLD!";
    char str_strlcat_B[50] = "HELLO!";
    char str_strlcat_C[50] = "HELLO!";
    printf("return = %ld\n%s\n", ft_strlcat(str_strlcat_B, str_strlcat_A, 12), str_strlcat_B);
    printf("return = %ld\n%s\n", ft_strlcat(str_strlcat_C, str_strlcat_A, 30), str_strlcat_C);

    //
    //strchr
    printf("\n\nstrchr\n");
    //
    char str_strchr_A[20] = "HELLO WORLD!";
    char str_strchr_B[10] = "test";
    printf("%p == %p\n", ft_strchr(str_strchr_A, 'H'), strchr(str_strchr_A, 'H'));
    printf("%p == %p\n", ft_strchr(str_strchr_A, 'X'), strchr(str_strchr_A, 'X'));
    printf("%p == %p\n", ft_strchr(str_strchr_B, '\0'), strchr(str_strchr_B, '\0'));

    //
    //strrchr
    printf("\n\nstrrchr\n");
    //
    char str_strrchr_A[30] = "Hello World!";
    printf("%p == %p\n", ft_strrchr(str_strrchr_A, 'H'), strrchr(str_strrchr_A, 'H'));
    printf("%p == %p\n", ft_strrchr(str_strrchr_A, 'o'), strrchr(str_strrchr_A, 'o'));
    printf("%p == %p\n", ft_strrchr(str_strrchr_A, '\0'), strrchr(str_strrchr_A, '\0'));

    //
    //strnstr
    printf("\n\nstrnstr\n");
    //
    char str_strnstr_big[30] = "sapporotokyo";
    char str_strnstr_littleA[10] = "tokyo";
    char str_strnstr_littleB[10] = "nagoya";
    char str_strnstr_littleC[10] = "";
    char str_strnstr_littleD[10] = "sapporo";

    printf("%p == %p\n", &str_strnstr_big[7], ft_strnstr(str_strnstr_big, str_strnstr_littleA, 30));
    printf("%p == %p\n", NULL, ft_strnstr(str_strnstr_big, str_strnstr_littleB, 30));
    printf("%p == %p\n", &str_strnstr_big[0], ft_strnstr(str_strnstr_big, str_strnstr_littleC, 10));
    printf("%p == %p\n", NULL, ft_strnstr(str_strnstr_big, str_strnstr_littleA, 0));
    printf("%p == %p\n", &str_strnstr_big[0], ft_strnstr(str_strnstr_big, str_strnstr_littleD, 8));

    //
    //strncmp
    printf("\n\nstrncmp\n");
    //
    char str_strncmp_A[30] = "tokyoosaka";
    char str_strncmp_B[30] = "tokyoosaka";
    char str_strncmp_C[20] = "tokyookayama";
    printf("%d == %d\n", strncmp(str_strncmp_A, str_strncmp_B, 30), ft_strncmp(str_strncmp_A, str_strncmp_B, 30));
    printf("%d == %d\n", strncmp(str_strncmp_A, str_strncmp_C, 30), ft_strncmp(str_strncmp_A, str_strncmp_C, 30));

    //
    //atoi
    printf("\n\natoi\n");
    //
    char str_atoi_A[20] = "-46\b9 \n5d6";
    char str_atoi_B[20] = "+-200";
    char str_atoi_C[20] = "ABC01234";
    char str_atoi_D[20] = "\t\n\r\v\f  12345 \n";
    printf("%d == %d\n", atoi(str_atoi_A), ft_atoi(str_atoi_A));
    printf("%d == %d\n", atoi(str_atoi_B), ft_atoi(str_atoi_B));
    printf("%d == %d\n", atoi(str_atoi_C), ft_atoi(str_atoi_C));
    printf("%d == %d\n", atoi(str_atoi_D), ft_atoi(str_atoi_D));

    //
    //isalpha
    printf("\n\nisalpha\n");
    //
    char char_isalpha_A = 'a';
    char char_isalpha_B = '\n';
    char char_isalpha_C = ' ';

    printf("%d == %d\n", isalpha(char_isalpha_A), ft_isalpha(char_isalpha_A));
    printf("%d == %d\n", isalpha(char_isalpha_B), ft_isalpha(char_isalpha_B));
    printf("%d == %d\n", isalpha(char_isalpha_C), ft_isalpha(char_isalpha_C));

    //
    //isdigit
    printf("\n\nisdigit\n");
    //
    char char_isdigit_A = 'a';
    char char_isdigit_B = '8';
    char char_isdigit_C = '\a';

    printf("%d == %d\n", isdigit(char_isdigit_A), ft_isdigit(char_isdigit_A));
    printf("%d == %d\n", isdigit(char_isdigit_B), ft_isdigit(char_isdigit_B));
    printf("%d == %d\n", isdigit(char_isdigit_C), ft_isdigit(char_isdigit_C));

    //
    //isalnum
    printf("\n\nisalnum\n");
    //
    char char_isalnum_A = 'a';
    char char_isalnum_B = '8';
    char char_isalnum_C = '\a';

    printf("%d == %d\n", isalnum(char_isalnum_A), ft_isalnum(char_isalnum_A));
    printf("%d == %d\n", isalnum(char_isalnum_B), ft_isalnum(char_isalnum_B));
    printf("%d == %d\n", isalnum(char_isalnum_C), ft_isalnum(char_isalnum_C));

    //
    //isascii
    printf("\n\nisascii\n");
    //
    char char_isascii_A = 'a';
    char char_isascii_B = '8';
    char char_isascii_C = 230;

    printf("%d == %d\n", isascii(char_isascii_A), ft_isascii(char_isascii_A));
    printf("%d == %d\n", isascii(char_isascii_B), ft_isascii(char_isascii_B));
    printf("%d == %d\n", isascii(char_isascii_C), ft_isascii(char_isascii_C));

    //
    //isprint
    printf("\n\nisprint\n");
    //
    char char_isprint_A = 'a';
    char char_isprint_B = '8';
    char char_isprint_C = 230;

    printf("%d == %d\n", isprint(char_isprint_A), ft_isprint(char_isprint_A));
    printf("%d == %d\n", isprint(char_isprint_B), ft_isprint(char_isprint_B));
    printf("%d == %d\n", isprint(char_isprint_C), ft_isprint(char_isprint_C));

    //
    //toupper
    printf("\n\ntoupper\n");
    //
    char char_toupper_A = 'a';
    char char_toupper_B = '8';
    char char_toupper_C = '\n';

    printf("%c == %c\n", toupper(char_toupper_A), ft_toupper(char_toupper_A));
    printf("%c == %c\n", toupper(char_toupper_B), ft_toupper(char_toupper_B));
    printf("%c == %c\n", toupper(char_toupper_C), ft_toupper(char_toupper_C));

    //
    //tolower
    printf("\n\ntolower\n");
    //
    char char_tolower_A = 'A';
    char char_tolower_B = '8';
    char char_tolower_C = '\n';

    printf("%c == %c\n", tolower(char_tolower_A), ft_tolower(char_tolower_A));
    printf("%c == %c\n", tolower(char_tolower_B), ft_tolower(char_tolower_B));
    printf("%c == %c\n", tolower(char_tolower_C), ft_tolower(char_tolower_C));

    //
    //calloc
    printf("\n\ncalloc\n");
    //
    int *num;
    num = ft_calloc(sizeof(int), 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    //
    //strdup
    printf("\n\nstrdup\n");
    //
    char char_strdup_A[20] = "hello!";
    char *char_strdup_B;
    char_strdup_B = ft_strdup(char_strdup_A);
    printf("%s\n", char_strdup_B);
    printf("%p\n", char_strdup_B);

    //
    //substr
    printf("\n\nsubstr\n");
    //
    char char_substr_A[20] = "sapporookayama";
    char *char_substr_B;
    char_substr_B = ft_substr(char_substr_A, 7, 20);
    printf("%s\n", char_substr_B);
    char_substr_B = ft_substr(char_substr_A, 7, 3);
    printf("%s\n", char_substr_B);

    //
    //strtrim
    printf("\n\nstrtrim\n");
    //
    char char_strtrim_A[200] = "       ";
    char char_strtrim_B[20] = " ";
    char *char_strtrim_C;
    char_strtrim_C = ft_strtrim(char_strtrim_A, char_strtrim_B);
    printf("\"%s\"\n", char_strtrim_C);
    printf("length = %ld\n",ft_strlen(char_strtrim_C));

    //
    //split
    printf("\n\nsplit\n");
    //
    char str_split_A[1000] = "      split       this for   me  !       ";
    char char_split_A = ' ';
    char **ans;
    ans = ft_split(str_split_A, char_split_A);
    printf("\"      split       this for   me  !       \"by \' \'\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\"%s\"\n", i, ans[i]);
    }

    //
    //itoa
    printf("\n\nitoa\n");
    //
    int int_itoa_0 = -1234;
    int int_itoa_1 = 0;
    int int_itoa_2 = -2147483648;
    int int_itoa_3 = 2147483647;
    printf("%d == %s\n", int_itoa_0, ft_itoa(int_itoa_0));
    printf("%d == %s\n", int_itoa_1, ft_itoa(int_itoa_1));
    printf("%d == %s\n", int_itoa_2, ft_itoa(int_itoa_2));
    printf("%d == %s\n", int_itoa_3, ft_itoa(int_itoa_3));

    //
    //strmapi
    printf("\n\nstrmapi\n");
    //
    char str_strmapi_A[40] = "HelloWorld";
    char *str_strmapi_B;
    str_strmapi_B = ft_strmapi(str_strmapi_A, func_strmapi_A);
    printf("HELLOWORLD == %s\n", str_strmapi_B);
    str_strmapi_B = ft_strmapi(str_strmapi_A, func_strmapi_B);
    printf("0123456789 == %s\n", str_strmapi_B);
    
    //
    //putchar_fd
    printf("\n\nputchar_fd\n");
    //
    char char_putchar_fd = 'a';
    ft_putchar_fd(char_putchar_fd,1);

    //
    //putstr_fd
    printf("\n\nputstr_fd\n");
    //
    char str_putstr_fd[30] = "Hello PUTSTR!";
    ft_putstr_fd(str_putstr_fd,1);

    //
    //putendl_fd
    printf("\n\nputendl_fd\n");
    //
    char str_putendl_fd[30] = "Hello PUTENDL!!!";
    ft_putendl_fd(str_putendl_fd,1);

    //
    //putnbr_fd
    printf("\n\nputnbr_fd\n");
    //
    int int_putnbr_A = 2147483647;
    int int_putnbr_B = 0;
    int int_putnbr_C = -2147483648;
    ft_putnbr_fd(int_putnbr_A,1);
    printf(" == 2147483647\n");
    ft_putnbr_fd(int_putnbr_B,1);
    printf(" == 0\n");
    ft_putnbr_fd(int_putnbr_C,1);
    printf(" == -2147283648\n");

    //
    //list
    printf("\n======    B   N   S    P   R     ======\n");
    printf(  "======      O   U        A   T   ======\n");

    t_list *lst_A;
    t_list *lst_B;
    t_list *lst_arr;
    lst_arr = NULL;
    char *char_lst_A = "this is A";
    char *char_lst_B = "this is B";
    lst_A = ft_lstnew(char_lst_A);
    lst_B = ft_lstnew(char_lst_B);
    printf("%s == this is A\n",(char *)(lst_A->content));
    printf("%s == this is B\n",(char *)(lst_B->content));
    ft_lstadd_front(&lst_arr,lst_A);
    printf("%s == this is A\n",(char *)(ft_lstlast(lst_arr)->content));
    ft_lstadd_back(&lst_A,lst_B);
    printf("list size 2 == %d\n",ft_lstsize(lst_arr));
    ft_lstiter(lst_arr,lst_print);
}
