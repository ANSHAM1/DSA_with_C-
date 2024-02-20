#include <iostream>
using namespace std;

class node
{
public:
    int val = val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

int main()
{
    node *head = nullptr;

    for (int i = 0; i < 10; i++)
    {
        node *n = new node(i);
        if (head == nullptr)
        {
            head = n;
        }
        else
        {
            node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = n;
        }
    }

    node *current = head;
    while (current != nullptr)
    {
        cout << current->val<<" ";
        current = current->next;
    }

    current = head;
    while (current != nullptr)
    {
        node *temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

