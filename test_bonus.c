/*
  int value1 = 3;
  int value2 = 6;
  int value3 = 9;
  int value4 = 7;
  int value5 = 10;
  
  t_list *new_list1 = ft_lstnew(&value1);
  t_list *new_list2 = ft_lstnew(&value2);
  t_list *new_list3 = ft_lstnew(&value3);
  t_list  *new_list4 = ft_lstnew(&value4);
  t_list *new_list5 = ft_lstnew(&value5);
  
  
  ft_lstadd_front(&new_list4, new_list3);
  ft_lstadd_front(&new_list4, new_list2);
  ft_lstadd_front(&new_list4, new_list1);

  ft_lstsize(new_list1);
  
  ft_lstlast(new_list1);
  
  ft_lstadd_back(&new_list1, new_list5);
  
  //ft_lstdelone(new_list5, free);
 // ft_lstclear(&new_list1, free);
  */

  /* 
  int value1 = 42;
  int value2 = 23;
  int value3 = 31;
  
  t_list *new_list1 = ft_lstnew(&value1);
  t_list *new_list2 = ft_lstnew(&value2);
  t_list *new_list3 = ft_lstnew(&value3);

  ft_lstadd_back(&new_list1, new_list2);
  ft_lstadd_back(&new_list1, new_list3);

  
  ft_lstiter(new_list1, double_content);
 */


/*
void double_content(void *content)
{
    int *i = (int *)content;
    *i *= 2;
}
*/

//mappi