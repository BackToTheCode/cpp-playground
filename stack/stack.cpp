#include <iostream>
#include <cassert>

class Stack
{
private:
    const static int s_maxStackLength {10};
    int m_array[s_maxStackLength];
    int m_length; 

public:
    void reset()
    {
        m_length = 0;
        for (int i = 0; i < s_maxStackLength; ++i)
        {
            m_array[i] = 0;
        }

    }

    bool push(int item) 
    {
        if (m_length == s_maxStackLength)
        {
            return false;
        }

        m_array[m_length] = item;
        m_length++;

        return true;
    }

    int pop()
    {
        assert (m_length < 1 && "Can not pop empty stack");
        int temp = m_array[m_length];
        m_array[m_length] = 0;
        m_length--;
        return temp;
    }

    void print()
    {
        for (int i = 0; i < s_maxStackLength; ++i)
        {
            std::cout << m_array[i];
        }
        std::cout << "\n";
    }
};

int main()
{
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
 
	return 0;
}