/*
void	test_ft_calloc(){
	size_t num  = 5;

	int *array = (int *) ft_calloc(num, sizeof(int));

	if (array == NULL)
	{
		printf("error allocation!");
		return (1);
	}
	for (size_t i = 0; i < num; i++)
	{
		if (array[i] != 0)
		{
			printf("memory not initialized by zero\n");
			return (1);
		}
	}
	printf(("Memory is initialized by zero\n"));
	for (size_t i = 0; i < num; i++)
	{
		array[i] = i * 2;
	}
	for (size_t i = 0; i < num; i++)
	{
		printf("%d\n", array[i]);
	}
	free(array);
}*/

/*
void test_ft_itoa()
{
	printf("%s\n", ft_itoa(56898));
	printf("%s\n", ft_itoa(-456));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483647));
}
*/


/*
void test_ft_split()
{
	char **words;
	char *sentence = "Lorem ipsum Dollor end";
	int i = 0;

	words = ft_split(sentence, ' ');

	while (words[i])
	{
		printf("word %d : %s\n", i + 1, words[i]);
		free(words[i]);
		i++;
	}

	free(words);
}
*/


/*
void	to_uppercase(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';
}
void	test_ft_striteri()
{
	char str[] = "Hello, comment ca va?";

	printf("Avant: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Apres: %s\n", str);
}
*/

/* void test_ft_strjoin()
{
	const char s[] = " water";
	const char t[] = "blue";
	char *p = ft_strjoin(t, s);

	printf("%s\n", p);
	free(p);
} */


/*
void test_ft_strlcat()
{
	char src[] = " everyone";
	char dest[20] = "Hello,";
	size_t len = ft_strlcat(dest, src, sizeof(dest));

	printf("%ld -> %s\n", len, dest);
}
*/


/*
char to_upper_if_even(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    else
        return c;
}
void test_strmapi()
{
	const char *s = "bonjour";
    char *res = ft_strmapi(s, to_upper_if_even);
    if (res == NULL)
	{
		printf("NULL");
	}
	else
    	printf("%s\n", res);
    free(res);
}
*/

/*void test_ft_strnstr()
{
	char s[] = "hello home beforesweetstand beforeafter";
	char n[] = "after";

	printf("%s", strnstr(s, NULL, 0));
	printf("\n");
	printf("%s", ft_strnstr(s, NULL, 0));
}
*/


/*
void test_strtrim()
{
	const char *s  = "     LoremipsumDollor     ";
	const char *set = " ";
	char *trimmed = ft_strtrim(s, set);

	printf("Before trim: %s\n", s);
	printf("After trim: '%s'\n", trimmed);
	free(trimmed);
}
*/

/*
void test_ft_substr()
{
	char	*s  = "Lorem ipsum Dollor";
	char	*substr = ft_substr(s, 6, 5);

	printf("the substr is:%s\n", substr);
	free(substr);
}
*/



/*******************BONUS**********************************/
/*
void test_ft_lstadd_back()
{
	t_list	*lst = NULL;
	t_list	*new;
	t_list	*tmp;
	int     *p;

	p = malloc(sizeof(int));
	*p = 1;
	new = ft_lstnew(p);
	ft_lstadd_back(&lst, new);

	p = malloc(sizeof(int));
	*p = 2;
	new = ft_lstnew(p);
	ft_lstadd_back(&lst, new);

	p = malloc(sizeof(int));
	*p = 3;
	new = ft_lstnew(p);
	ft_lstadd_back(&lst, new);

	tmp = lst;
	while (tmp)
	{
		printf("%d ", *(int *)(tmp->content));
		tmp = tmp->next;
	}
	printf("\n");

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->content);
		free(tmp);
	}
}
*/

/*
void test_ft_lstadd_front()
{
	t_list *head = NULL;
    t_list *new_node;

    new_node = ft_lstnew("data1");
    ft_lstadd_front(&head, new_node);

    new_node = ft_lstnew("data2");
    ft_lstadd_front(&head, new_node);

    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }
	
	t_list *next_node;
    while (head != NULL)
    {
        next_node = head->next;
        free(head);
        head = next_node;
    }
}
*/

/*
void del(void *content)
{
	free(content);
}
void test_lstclear()
{
	t_list	*lst;
	t_list	*new;

	lst = NULL;
	new = ft_lstnew(strdup("Hello"));
	ft_lstadd_front(&lst, new);
	new = ft_lstnew(strdup("World"));
	ft_lstadd_front(&lst, new);

	ft_lstclear(&lst, del);
	if (lst == NULL)
		printf("Deleted list success.\n");
	else
		printf("list not clean.\n");
}
*/

/*
int test_ft_lstdelone(){
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (1);
	new_list->content = malloc(100);
	if (!new_list->content)
	{
		free(new_list);
		return (1);
	}
	ft_lstdelone(new_list, free);
	printf("ft_lstdelone run correctly\n");
	return (0);
}
*/

/*
void double_content(void *content)
{
    int *i = (int *)content;
    *i *= 2;
}
void test_lstiter()
{
    t_list *lst = NULL;
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        int *p = malloc(sizeof(int));
        if (!p)
        {
            ft_lstclear(&lst, free);
            return;
        }
        *p = arr[i];
        t_list *new_node = ft_lstnew(p);
        if (!new_node)
        {
            free(p);
            ft_lstclear(&lst, free);
            return;
        }
        ft_lstadd_back(&lst, new_node);
    }

    ft_lstiter(lst, double_content);

    t_list *tmp = lst;
    while (tmp)
    {
        printf("%d\n", *(int *)(tmp->content));
        tmp = tmp->next;
    }

    ft_lstclear(&lst, free);
}
*/

/*
void test_ft_lstlast()
{
	t_list *head;
    t_list *last;
	t_list *temp;

    head = ft_lstnew("First");
    head->next = ft_lstnew("second");
    head->next->next = ft_lstnew("Third");

    last = ft_lstlast(head);
    if (last != NULL)
        printf("latest element: %s\n", (char *)last->content);
    else
        printf("list is empty.\n");

	while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
	}
}
*/

/*
void    ft_del(void *content)
{
    free(content);
}
void    *ft_increase(void *content)
{
    int *new_content;

    new_content = malloc(sizeof(int));
    *new_content = *(int *)content + 1;
    return (new_content);
}
void test_ft_lstmap()
{
    t_list *lst;
    t_list *new_lst;
    int     *a = malloc(sizeof(int));
    int     *b = malloc(sizeof(int));
    int     *c = malloc(sizeof(int));

    *a = 1;
    *b = 2;
    *c = 3;

    lst = ft_lstnew(a);
    lst->next = ft_lstnew(b);
    lst->next->next = ft_lstnew(c);
    new_lst = ft_lstmap(lst, &ft_increase, &ft_del);
    while (new_lst)
    {
        printf("%d\n", *(int *)(new_lst->content));
        new_lst = new_lst->next;
    }
    ft_lstclear(&lst, &ft_del);
    ft_lstclear(&new_lst, &ft_del);
}
*/

/*
void test_ft_lstnew()
{
	t_list *new_list;
    int     value;

    value = 42;
    new_list = ft_lstnew(&value);
    if (new_list != NULL)
    {
        printf("Value of content : %d\n", *(int *)(new_list->content));
        if (new_list->next == NULL)
        {
            printf("Next pointer is NULL, ckeched.\n");
        }
    }
    else
    {
        printf("Erreur : new_list not create.\n");
    }
    free(new_list);
}
*/

/*
void test_ft_lstsize()
{
	t_list	*lst;
	t_list	*new;
	t_list	*tmp;
	int		i;
	int		*content;

	lst = NULL;
	i = 0;
	while (i < 10)
	{
		content = malloc(sizeof(int));
		*content = i;
		new = ft_lstnew(content);
		ft_lstadd_back(&lst, new);
		i++;
	}
	printf("La taille de la liste est : %d\n", ft_lstsize(lst));

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp->content); // Libérer la mémoire du contenu
		free(tmp);
	}
}
*/

