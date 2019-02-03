#pragma once
#include <string>

class Node
{
protected: 
    Node *m_left; 
    Node *m_right; 
    std::string m_value; 

public:
    Node();
    Node (Node *aleft, Node *aright, const std::string &avalue);
    ~Node();
    Node* getRight();
    Node* getLeft(); 
    std::string getValue();
    void setLeft(Node* aleft); 
    void setRight(Node* aright); 
    void setValue(const std::string &avalue);
};
