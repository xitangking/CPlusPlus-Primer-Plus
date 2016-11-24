//stack.h--class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Ttem;

class stack
{
private:
  enum { MAX=10 };
  Item item[MAX];
  int top;
public:
  Stack();
  bool isempty() const;
  bool isfull() const;

  bool push(const Item & item);
  bool pop(Item &item);
}
#endif//STACK_H_
