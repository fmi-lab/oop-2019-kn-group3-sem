#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T value;
    node* previous;

    node():value(), previous(NULL){
    };
};


template <typename T>
class Stack
{
private:
    node<T>* last;

public:
    Stack(): last(NULL) {};
    Stack(const Stack& other)
    {
        node<T>* temp = new node<T>;
        temp->value = other.last->value;
        this->last = temp;
        node<T>* iter = other.last->previous;
        node<T>* first = this->last;
        while(iter)
        {
            node<T>* temp2 = new node<T>();
            temp2->value = iter->value;
            first->previous = temp2;
            first = temp2;
            iter = iter->previous;
        }
        first->previous = NULL;
    }

    Stack& operator= (const Stack& other)
    {
        if(this != &other)
        {
            node<T>* iter = this->last;
            node<T>* deleter = this->last;
            while(iter)
            {
                iter = deleter -> previous;
                delete deleter;
                deleter = iter;
            }
            node<T>* temp = new node<T>();
            temp->value = other.last->value;
            this->last = temp;
            iter = other.last->previous;
            node<T>* first = this->last;
            while(iter)
            {
                node<T>* temp2 = new node<T>();
                temp2->value = iter->value;
                first->previous = temp2;
                first = temp2;
                iter = iter->previous;
            }
            first->previous = NULL;
        }
    }

    ~Stack()
    {
        node<T>* iter = this->last;
        node<T>* deleter = this->last;
        while(iter)
        {
            iter = deleter -> previous;
            delete deleter;
            deleter = iter;
        }
        last = NULL;
    }

    void push(T element)
    {
        node<T>* temp = new node<T>();
        temp->value = element;
        temp->previous = last;
        last = temp;
    }

    T top()const
    {
        if(last)
        {
            return last->value;
        }
        else
        {
            cout<<"Stack is empty!";
            return T();
        }
    }

    T pop()
    {
        if(last)
        {
            T result = last->value;
            node<T>* temp = last->previous;
            delete last;
            last = temp;
            return result;
        }
        else
        {
            cout<<"Stack is empty!";
            return T();
        }
    }

    bool empty2()const
    {
        return last==NULL;
    }
};

int main()
{
    Stack<int> s1;
    s1.push(5);
    s1.push(8);
    s1.push(3);
    s1.push(53);
    s1.push(42);
    s1.push(1);
    s1.push(-5);
    s1.push(9);
    s1.push(0);

    Stack<int> s2(s1);

    while(!s1.empty2())
    {
        cout<<s1.pop()<<endl;
    }


    while(!s2.empty2())
    {
        cout<<s2.pop()<<endl;
    }

    Stack<Stack <int> > ss;

    ss.push(s1);
    ss.push(s2);
}


