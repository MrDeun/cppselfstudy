#include<iostream>

class BinaryTree
{
    private 
};

class Node
    {
        private:
            Node* leftChild;
            Node* rightChild;
            int Value;
        public:
            Node()
            {
                Value = 0;
                leftChild = nullptr;
                rightChild = nullptr;
            }

            Node(int Value_in)
            {
                Value = Value_in;
                leftChild = nullptr;
                rightChild = nullptr;
            }

            ~Node()
            {

            }

            Node* get_left()
            {
                return leftChild;
            }

            Node* get_right()
            {
                return rightChild;
            }

            int get_value()
            {
                return Value;
            }

    };

int main()
{

}