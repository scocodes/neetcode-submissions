/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution 
{
public:
    Node* copyRandomList(Node* head) 
    {
        std::unordered_map<Node*, Node*> lookup{};
        Node* current = head;
        Node* current2 = head;

        while(current != nullptr)
        {
            Node* copy = new Node(current->val);
            lookup[current] = copy;
            current = current->next;

        }

        while(current2 != nullptr)
        {

            Node* newNode = lookup[current2];
            newNode->random = lookup[current2->random];
            newNode->next = lookup[current2->next];
            current2 = current2->next;

        }
        return lookup[head];
    }
};
