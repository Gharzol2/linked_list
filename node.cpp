#include "node.hpp"

#include <iostream>

bool Node::operator !=(const Node &other) const
{
	return data != other.data;
}