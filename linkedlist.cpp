#include "linkedlist.hpp"

#include <iostream>

void LinkedList::push(Node &node_to_push)
{
	Node* current_node = start_node;
	while (*current_node->get_next_node() != *end_node)
	{
		current_node = current_node->get_next_node();
	}
	current_node->get_next_node()->set_next_node(&node_to_push);
	end_node = current_node->get_next_node()->get_next_node();
	size++;
}


void LinkedList::print()
{
	std::cout << "traversing and printing linkedlist. size is: " << size << "\n";
	std::cout << "************************************\n";
	Node* current_node = start_node;
	int count = 0;
	std::cout << "node number " << count++ << ": " << current_node->get_data() << std::endl;
	
	do
	{
		current_node = current_node->get_next_node();
		std::cout << "node number " << count++ << ": " << current_node->get_data() << std::endl;
	} while (*current_node != *end_node);
	std::cout << "************************************\n";
}

