#ifndef NODE_BLOCK_H
#define NODE_BLOCK_H

class Node;
class Entry;

class Node_Block{
    protected:
        Node_Block *parent_block_ptr;
        Node_Block *child_block_ptr;
        std::vector<Node> node_vec;
        Node_Block *next_leaf_block_ptr;
        Node_Block *prev_leaf_block_ptr;
        long long unsigned int block_size;
        bool full, leaf, root;
    public:
        Node_Block(int size_input, bool leaf_input, bool root_input);
        ~Node_Block();

        void add_node(Entry* input_entry, Node_Block* input_block);
        void add_leaf_node(Entry* input_entry, Record* input_record);

        Node_Block* get_parent_block_ptr();
        Node_Block* get_child_block_ptr();
        Node_Block* get_next_leaf_ptr();
        Node_Block* get_prev_leaf_ptr();
        bool is_full();
        bool is_leaf();
        bool is_root();

        void set_parent(Node_Block* input_block_ptr);
        void set_child(Node_Block* input_block_ptr);
        void set_next(Node_Block* input_block_ptr);
        void set_prev(Node_Block* input_block_ptr);
        void set_root(bool input_root);

        bool check_full();

        void static test();
        
};

#endif