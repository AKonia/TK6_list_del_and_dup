#ifndef LIST_DECLARATION_HPP
#define LIST_DECLARATION_HPP

template<typename ListDataType>
class List
{
private:
    struct Node
    {
        ListDataType value;
        Node * next;
    };
    Node * currentNode;
    unsigned int listSize;
public:
    List();
    List(const List & rhs);
    ~List();

    ListDataType & operator[](unsigned int indx);
    List & operator=(const List & rhs);

    unsigned int getSize();
    bool isEmpty();

    void push(const ListDataType value, int indx = -1);
    void removeElem(unsigned int indx);


};
#endif // LIST_DECLARATION_HPP
