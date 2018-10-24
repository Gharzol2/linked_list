#include "linkedlist.hpp"

#include <iostream>

void linkedlist_test()
{
	Node foo = Node("This is the first node, foo");
	Node bar = Node("This is the second node, bar");

	foo.set_next_node(&bar);
	bar.set_next_node(&foo);

	std::cout << foo.get_data() << std::endl;
	std::cout << foo.get_next_node()->get_data() << std::endl;

	LinkedList ll = LinkedList(foo, bar);
	ll.print();

	Node baz("This is the third node, baz");
	ll.push(baz);
	ll.print();

	Node qux("This is the fourth node, qux");
	ll.push(qux);
	ll.print();
}