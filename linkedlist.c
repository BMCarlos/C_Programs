#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

	struct list_element
	{
		void* data;
		struct list_element* next;
	};
	
	void init_list_element(struct list_element* elem)
	{
	elem -> data = NULL;
	elem -> next = NULL;
	}
	
	struct list_element* get_last_list_element(struct list_element* head)
	{
	struct list_element* cur = head;
	while(cur != NULL)
	{
	if (cur -> next == NULL)
	break;
	
	cur = cur -> next;
	}
	return cur;
	}
	
	void add_list_element(struct list_element* head, void* data)
	{
	if (head -> data == NULL)
	{
		head -> data = data;
	}
	else
	{
	struct list_element* last_elem = get_last_list_element(head);
	
	struct list_element* elem = (struct list_element*) malloc(sizeof(struct list_element));
	init_list_element(elem);
	elem -> data = data;
	last_elem -> next = elem;
	}
	
	}	
	
	
	void destruct_list(struct list_element* head)
	{
		struct list_element* cur = head -> next;
		while (cur!=NULL)
		{
			struct list_element* next = cur -> next;
			free(cur);
			cur = next;
		}
	}
	int main(int argc, char** argv)
	{
	
		
		struct list_element head;
		
		//Initializes the list head
		init_list_element(&head);
		
		//Add the first element to the list
		add_list_element(&head,"Hello World");
		
		//Add the second element to the list
		add_list_element(&head, "This is the second element");
		
		//Add the third element to the list
		add_list_element(&head, "This is the third element");
		
		
		//change the pointer
		struct list_element* cur = &head;
		
		//is current element null
		while(cur != NULL)
		{
		printf("%s\n", (const char*) cur -> data);
		cur = cur -> next;
		}
		//Clean up the memory of the list
		destruct_list(&head);
		return 0;
	}
