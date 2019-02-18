

template <class T>
class ArrayStack {
private:

  T *data; // pointer to dynamically allocated array of "T"
  int capacity; // capacity of stack, size of array
  bool elastic; // true if capacity of stack (i.e. the size of the array)
                // can be changed as required.

  int count; // number of values on stack

public:

  // creates an "elastic" stack
  ArrayStack ();

  // creates a stack with a fixed capacity
  ArrayStack (int capacity);

  ArrayStack (const ArrayStack &otherStack);

  ~ArrayStack ();

  // quits if the stack has a fixed capacity and is full.
  void push (T value);

  // quits if the stack is empty
  T pop ();

  // returns top value without removing it
  // quits if the stack is empty
  T peek();

  bool isEmpty() const { return count == 0; }

  int getcount() const { return count; }

  // copies contents only (capacity attributes are not copied).
  // quits if the destination stack
  // has a fixed capacity and this is not large enough.
  ArrayStack& operator= (const ArrayStack &otherStack);

};
