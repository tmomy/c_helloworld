#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/*destroy*/

void destroy(void *data) {
	printf("in destroy%s\n",data );
	free(data);
	return;
} 


int main(int argc, char const *argv[])
{
	ListElmt *t_element = NULL;
	int i;
	int resp;
	int *data = NULL;

	List t_list;
	printf("init t_list:\n");
	list_init(&t_list, destroy);
	printf("create a list:\n");
	for (int i = 0; i < 10; ++i)
	{
		data = (int *)malloc(sizeof(int));
		if (data == NULL)
			return -1;
		*data = i;
		list_ins_next(&t_list,NULL, (void *)data);
	}
	t_element = t_list.head;
	for (i = 0; i < list_size(&t_list); ++i )
		{	
			printf("%d  ", *(int *)list_data(t_element) );
			t_element = list_next(t_element);
		}
	printf("\n");	
	t_element = t_list.head;
	for (int i = 0; i < list_size(&t_list); ++i)
	{
		if ( *(int *)list_data(t_element) == 5 )
			{
				resp = list_rem_next(&t_list, t_element, (void **)&data);
				if (resp == 0)
				{
					destroy(data);
				}	
			}
		t_element = list_next(t_element);
	printf("after remove the element: value = 4\n");
    //traverse and print again
    t_element = t_list.head;
    for( i = 0; i <list_size(&t_list); i++ )
    {
        printf("%d ",  *(int *)list_data(t_element) );
        t_element = list_next(t_element);
    }
    printf("\n\n");

    printf("here begin to destroy the list :\n");
    //destroy the linked list
    list_destroy(&t_list);

	}
	return 0;
}