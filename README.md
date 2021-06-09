Projeto libft 42SP
Repositorio de Bibliotecas da Linguagem C

### Funções ca biblioteca <string.h> 

* [`ft_memset`](ft_memset.c)	- preenche os primeiros n bytes da mem apontada por s com byte c

* [`ft_bzero`](ft_bzero.c)	- preenche os primeiros n bytes com zero

* [`ft_memcpy`](ft_memcpy.c)	- copia n bytes da memoria *src para *dst

* [`ft_memccpy`](ft_memccpy.c)	- copia n bytes da memoria *src para *dst, se o caracter c = src, para a copia,

* [`ft_memmove`](ft_memmove.c)	- igual ao memcpy, porem e permitido overlap (copia estrapola o vetor)

* [`ft_memchr`](ft_memchr.c)	- localiza caracter no primeiro n bytes de uma string *s,

* [`ft_memcmp`])ft_memcmp.c)	- compara bytes da S1 com S2, retorna 0 = igual, -1 <, 1 >

## Funcoes da biblioteca <strings.h> 

* [`ft_strlen`](ft_strlen.c)	- Retorna tamanho de uma string *s

* [`ft_strlcpy`](ft_strlcpy.c)	- copia string *src para *dst, e retorna o tamanho src

* [`ft_strcat`](ft_strcat.c)	- concatena duas strings

* [`ft_strchr`](ft_strchr.c)	- Localiza um caracter dentro de uma string *s

* [`ft_strrchr.c`](ft_strrchr.c)	- localiza o ultimo caracter dentro de uma string *s

* [`ft_strnstr.c`](ft_strnchr.c)	- localiza uma substrig dentro de uma string

* [`ft_strncmp.c`](ft_strncmp.c)	- compara duas strings ate o comprimento de n