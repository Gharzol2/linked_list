#include <string>


class Node 
{
private:
	Node* next_node;
	std::string data;

public:
	Node(std::string _data)
		: data(_data) {}

	Node* get_next_node() {return next_node;}
	std::string get_data() {return data;}

	void set_next_node(Node* _next_node) {next_node = _next_node;}

	bool operator !=(const Node &other) const;
};