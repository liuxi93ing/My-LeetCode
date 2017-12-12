# Question: (Easy)

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

* push(x) -- Push element x onto stack.

* pop() -- Removes the element on top of the stack.

* top() -- Get the top element.

* getMin() -- Retrieve the minimum element in the stack.

## Example:

>MinStack minStack = new MinStack();  <br>
>minStack.push(-2);					<br>
>minStack.push(0);					<br>
>minStack.push(-3);					<br>
>minStack.getMin();   --> Returns -3. <br>
>minStack.pop();					<br>
>minStack.top();      --> Returns 0.	<br>
>minStack.getMin();   --> Returns -2.	