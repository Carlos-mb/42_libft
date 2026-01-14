*Este proyecto ha sido creado como parte del currículo de 42 por cmelero-*

# Descripción

Este proyect contiene la implementación de la librería de C (`libft`). El objetivo principal de `libft` es reimplementar funciones estándar de C y añadir utilidades comunes (manipulación de cadenas, memoria, listas enlazadas y funciones de E/S) para usar como base en otros proyectos del currículo.

# Instrucciones

Compilación de la librería (desde la raíz del repositorio):

```bash
make
```

Para limpiar objetos:

```bash
make clean
# o
make fclean
```

# Librería (descripción detallada)

`libft` es una colección de funciones C divididas en módulos:

- Funciones de conversión y números:
  - `ft_atoi`, `ft_itoa`
- Manipulación de memoria:
  - `ft_bzero`, `ft_calloc`, `ft_memchr`, `ft_memcmp`, `ft_memcpy`, `ft_memmove`, `ft_memset`
- Manipulación de cadenas:
  - `ft_strlen`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Clasificación de caracteres y transformaciones:
  - `ft_isalnum`, `ft_isalpha`, `ft_isascii`, `ft_isdigit`, `ft_isprint`, `ft_tolower`, `ft_toupper`
- Entrada/Salida (file descriptor):
  - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- Listas enlazadas (tareas de BONUS incluidas en esta implementación):
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Uso típico: compilar la librería y enlazarla con tus binarios

```bash
make
# compilar un ejecutable que use la librería (archivos en la raíz)
cc -Wall -Wextra -Werror main.c libft.a -I. -o myprog
```

# Recursos

- Documentación de las funciones estándar de C: `man` pages (`man 3 malloc`, `man 3 strcpy`, etc.).
- OpenBSD `strlcpy`/`strlcat` man pages.
- 42 `libft` subject del campus 42.
- Artículos y tutoriales relevantes sobre buenas prácticas en C.

Uso de IA

- Explicación de conceptos de C.
- Análisis del código terminado para buscar bugs.

# Secciones adicionales y decisiones técnicas

- El `Makefile` principal genera `libft.a`.
- Las reglas de `clean` y `fclean` eliminan objetos y artefactos.
