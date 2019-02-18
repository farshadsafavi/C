#ifndef IMPLEMENTATION_H_INCLUDED
#define IMPLEMENTATION_H_INCLUDED

template<class T>
Stack<T>::Stack(int sz)
{
     size=sz;
     top=-1;
     stk=new T[size];
}

template<class T>
void Stack<T>::push(T x)
{
     if(top==size-1)
        std::cout<<"Stack is Full";
     else
     {
        top++;
        stk[top]=x;
     }
}

template<class T>
T Stack<T>::pop(){
     T x=0;
     if(top==-1)
     std::cout<<"Stack is Empty"<<std::endl;
     else
     {
     x=stk[top];
     top--;
    }
    return x;
}

#endif // IMPLEMENTATION_H_INCLUDED
