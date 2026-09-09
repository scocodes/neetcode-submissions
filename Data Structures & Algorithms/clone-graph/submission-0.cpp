class Solution 
{
    Node* clone(Node* node)
    {
        if(node == nullptr)
        {
            return nullptr;
        }
        if(clones.find(node) != clones.end())
        {
            return clones[node];
        }
        

        Node* copy = new Node(node->val);
        clones[node] = copy;

        for(Node* neigh : node->neighbors)
        {
            Node* clonedNeighbour = clone(neigh);
            copy->neighbors.push_back(clonedNeighbour);
        }
        return copy;
    }

public:
    std::unordered_map<Node*, Node*> clones{};
    Node* cloneGraph(Node* node) 
    {
        return clone(node);
    }
};
