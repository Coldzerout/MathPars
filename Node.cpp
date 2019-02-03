#include "Node.hpp"

Node::Node()
{
}

Node::Node (Node *aleft, Node *aright, const std::string &avalue) 
{ 
    m_left = aleft; 
    m_right = aright; 
    m_value = avalue; 
} 

Node::~Node()
{
}

Node* Node::getRight() 
{ 
    return m_right; 
} 

Node* Node::getLeft() 
{ 
    return m_left; 
} 

std::string Node::getValue() 
{ 
    return m_value; 
} 

void Node::setLeft(Node* aleft) 
{ 
    m_left=aleft; 
} 


void Node::setRight(Node* aright) 
{ 
    m_right=aright; 
} 

void Node::setValue(const std::string &avalue) 
{ 
    m_value=avalue; 
} 



