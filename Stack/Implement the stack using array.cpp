int isFull()
{
	return top >= SIZE;
}
// Function to check if stack is empty.
int isEmpty()
{
	return top < 0;
}
// Function to add an item to stack.
int push(int item)
{
  if(!isFull()){
    Stack[++top] = item;
    return top;
  } else{
    return -1;
  }
}
// Function to remove an item from stack.
int pop()
{
  if(!isEmpty()){
    return Stack[top--];
  } else{
    return -1;
  }
}
