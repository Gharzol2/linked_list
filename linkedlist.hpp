#include "node.hpp"
#pragma once

class LinkedList
{
private:
	Node* start_node;
	Node* end_node;
	int size;

public:
	LinkedList(Node &_start_node, Node &_end_node)
		: start_node(&_start_node), end_node(&_end_node), size(2) {start_node->set_next_node(end_node);}

	int get_size() {return size;}

	void push(Node &node_to_push);

	void print();

};


