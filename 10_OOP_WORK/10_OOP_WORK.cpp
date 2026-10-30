#include <iostream>
using namespace std;

class Stack
{
private:
    enum { EMPTY = -1, FULL = 9 };
    char arr[FULL+1];
    int topIndex;
public:
    Stack()
    {
        topIndex = EMPTY;
    }
    bool IsFull()
    {
        return topIndex == FULL ;
    }
    bool Push(char elem)
    {
        if (!IsFull())
        {
            arr[++topIndex] = elem;
            return true;
        }
        return false;

    }
    bool IsEmpty()
    {
        return topIndex == EMPTY;
    }
    char Pop()
    {
       
        if (!IsEmpty())
        {
            return arr[topIndex--];
        }
    }
    void Print()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int GetCount()
    {
        return topIndex+1;
    }
};

int main()
{
    Stack st;
    st.Push('a');
    st.Push('b');
    st.Push('c');
    st.Push('d');
    st.Push('e');
    st.Push('f');
    st.Push('g');
    st.Print();
}
