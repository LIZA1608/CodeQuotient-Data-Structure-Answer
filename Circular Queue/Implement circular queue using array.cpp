void QueueArray::enQueue(int data){
  // Write your code here
  if ((front == 0 && rear == SIZE-1) || (rear == (front-1)%(SIZE-1))) {  // Queue is full
    return;
  }
  if(front == -1)	  // Insert first element
    front = rear = 0;
  else if (rear == SIZE-1 && front != 0)	  // insert the element back at starting of queue.
    rear = 0;
  else		  // insert the element normally
    rear++;
  queue[rear] = data;
}
// Remove First element from queue
int QueueArray::deQueue(){
  // Write your code here
  if (front == -1)
  {
    return -1;
  }
  int item = queue[front];
  if (front == rear)
    front = rear = -1;
  else if (front == SIZE-1)
    front = 0;
  else
    front++;
  return item;
}
