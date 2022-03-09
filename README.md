# Data-Structures-and-Algorithms
basic programs
Data Structures are the programmatic way of storing data so that data can be used efficiently. Almost every enterprise application uses various types of data structures in one or the other way. This tutorial will give you a great understanding on Data Structures needed to understand the complexity of enterprise level applications and need of algorithms, and data structures.

**Why to Learn Data Structure and Algorithms?**
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
As applications are getting complex and data rich, there are three common problems that applications face now-a-days.

Data Search − Consider an inventory of 1 million(106) items of a store. If the application is to search an item, it has to search an item in 1 million(106) items every time slowing down the search. As data grows, search will become slower.

Processor speed − Processor speed although being very high, falls limited if the data grows to billion records.

Multiple requests − As thousands of users can search data simultaneously on a web server, even the fast server fails while searching the data.

To solve the above-mentioned problems, data structures come to rescue. Data can be organized in a data structure in such a way that all items may not be required to be searched, and the required data can be searched almost instantly.

Applications of Data Structure and Algorithms
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Algorithm is a step-by-step procedure, which defines a set of instructions to be executed in a certain order to get the desired output. Algorithms are generally created independent of underlying languages, i.e. an algorithm can be implemented in more than one programming language.

From the data structure point of view, following are some important categories of algorithms −
============================================================================================

Search − Algorithm to search an item in a data structure.

Sort − Algorithm to sort items in a certain order.

Insert − Algorithm to insert item in a data structure.

Update − Algorithm to update an existing item in a data structure.

Delete − Algorithm to delete an existing item from a data structure.

=====================
**SORTING ALGORITHM**
=====================

Sorting is the process of arranging the elements of an array so that they can be placed either in ascending or descending order. 
For example, consider an array A = {A1, A2, A3, A4, ?? An }, the array is called to be in ascending order if element of A are arranged like A1 > A2 > A3 > A4 > A5 > ? > An .
Consider an array;

int A[10] = { 5, 4, 10, 2, 30, 45, 34, 14, 18, 9 )

The Array sorted in ascending order will be given as;


A[] = { 2, 4, 5, 9, 10, 14, 18, 30, 34, 45 }

There are many techniques by using which, sorting can be performed. In this section of the tutorial, we will discuss each method in detail.

Sorting Algorithms	Description
  --------------------------------

1	Bubble Sort>>>>>>>>>>>>>>>>>>>>>>
It is the simplest sort method which performs sorting by repeatedly moving the largest element to the highest index of the array. It comprises of comparing each element to its adjacent element and replace them accordingly.

2	Counting Sort>>>>>>>>>>>>>>>>>>>>>
It is a sorting technique based on the keys i.e. objects are collected according to keys which are small integers. Counting sort calculates the number of occurrence of objects and stores its key values. New array is formed by adding previous key elements and assigning to objects.

3	Heap Sort>>>>>>>>>>>>>>>>>>>>>>>
In the heap sort, Min heap or max heap is maintained from the array elements deending upon the choice and the elements are sorted by deleting the root element of the heap.

4	Insertion Sort>>>>>>>>>>>>>>>>>>
As the name suggests, insertion sort inserts each element of the array to its proper place. It is a very simple sort method which is used to arrange the deck of cards while playing bridge.

5	Merge Sort>>>>>>>>>>>>>>>>>>>>>>
Merge sort follows divide and conquer approach in which, the list is first divided into the sets of equal elements and then each half of the list is sorted by using merge sort. The sorted list is combined again to form an elementary sorted array.

6	Quick Sort>>>>>>>>>>>>>>>>>>>>>>
Quick sort is the most optimized sort algorithms which performs sorting in O(n log n) comparisons. Like Merge sort, quick sort also work by using divide and conquer approach.

7	Selection Sort>>>>>>>>>>>>>>>>>
Selection sort finds the smallest element in the array and place it on the first place on the list, then it finds the second smallest element in the array and place it on the second place. This process continues until all the elements are moved to their correct ordering. It carries running time O(n2) which is worst than insertion sort.

PROGRAM RELATED TO THIS TOPIC AS YOU SEE ABOVe...........

============
** STACK**
============
 
A Stack is a linear data structure that follows the LIFO (Last-In-First-Out) principle. Stack has one end, whereas the Queue has two ends (front and rear). It contains only one pointer top pointer pointing to the topmost element of the stack. Whenever an element is added in the stack, it is added on the top of the stack, and the element can be deleted only from the stack. In other words, a stack can be defined as a container in which insertion and deletion can be done from the one end known as the top of the stack.
Working of Stack
----------------
Stack works on the LIFO pattern. As we can observe in the below figure there are five memory blocks in the stack; therefore, the size of the stack is 5.

Suppose we want to store the elements in a stack and let's assume that stack is empty. We have taken the stack of size 5 as shown below in which we are pushing the elements one by one until the stack becomes full.
![ds-stack](https://user-images.githubusercontent.com/92047366/157251695-9cfe6de3-143b-49d2-9af2-33f2f26ab8b2.png)
DS Stack Introduction
Since our stack is full as the size of the stack is 5. In the above cases, we can observe that it goes from the top to the bottom when we were entering the new element in the stack. The stack gets filled up from the bottom to the top.
When we perform the delete operation on the stack, there is only one way for entry and exit as the other end is closed. It follows the LIFO pattern, which means that the value entered first will be removed last. In the above case, the value 5 is entered first, so it will be removed only after the deletion of all the other elements.

Standard Stack Operation
------------------------
The following are some common operations implemented on the stack:

push(): When we insert an element in a stack then the operation is known as a push. If the stack is full then the overflow condition occurs.
pop(): When we delete an element from the stack, the operation is known as a pop. If the stack is empty means that no element exists in the stack, this state is known as an underflow state.
isEmpty(): It determines whether the stack is empty or not.
isFull(): It determines whether the stack is full or not.'
peek(): It returns the element at the given position.
count(): It returns the total number of elements available in a stack.
change(): It changes the element at the given position.
display(): It prints all the elements available in the stack.

Applications of Stack
---------------------
The following are the applications of the stack:
Recursion: The recursion means that the function is calling itself again. To maintain the previous states, the compiler creates a system stack in which all the previous records of the function are maintained.
DFS(Depth First Search): This search is implemented on a Graph, and Graph uses the stack data structure.
Backtracking: Suppose we have to create a path to solve a maze problem. If we are moving in a particular path, and we realize that we come on the wrong way. In order to come at the beginning of the path to create a new path, we have to use the stack data structure.
Expression conversion: Stack can also be used for expression conversion. This is one of the most important applications of stack. The list of the expression conversion is given below:
Infix to prefix
Infix to postfix
Prefix to infix
Prefix to postfix
Postfix to infix

=========
**QUEUE**
=========
Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.

A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.

![queue_example](https://user-images.githubusercontent.com/92047366/157253970-99878abf-4ce2-4a23-947d-0057e043272f.jpg)

Queue Representation
--------------------
As we now understand that in queue, we access both ends for different reasons. The following diagram given below tries to explain queue representation as data structure −
![queue_diagram](https://user-images.githubusercontent.com/92047366/157254118-3dc38cd6-d3a6-4562-9e8d-803417c10e8e.jpg)

Queue Example
-------------
As in stacks, a queue can also be implemented using Arrays, Linked-lists, Pointers and Structures. For the sake of simplicity, we shall implement queues using one-dimensional array.

Basic Operations
----------------
Queue operations may involve initializing or defining the queue, utilizing it, and then completely erasing it from the memory. Here we shall try to understand the basic operations associated with queues −

enqueue() − add (store) an item to the queue.

dequeue() − remove (access) an item from the queue.

Few more functions are required to make the above-mentioned queue operation efficient. These are −

peek() − Gets the element at the front of the queue without removing it.

isfull() − Checks if the queue is full.

isempty() − Checks if the queue is empty.

In queue, we always dequeue (or access) data, pointed by front pointer and while enqueing (or storing) data in the queue we take help of rear pointer.

===============
**LINKED LIST**
===============

A linked list is a sequence of data structures, which are connected together via links.

Linked List is a sequence of links which contains items. Each link contains a connection to another link. Linked list is the second most-used data structure after array. Following are the important terms to understand the concept of Linked List.

Link − Each link of a linked list can store a data called an element.

Next − Each link of a linked list contains a link to the next link called Next.

LinkedList − A Linked List contains the connection link to the first link called First.

Linked List Representation
--------------------------
Linked list can be visualized as a chain of nodes, where every node points to the next node.
![linked_list](https://user-images.githubusercontent.com/92047366/157459097-377ad59d-74e9-43e0-8369-262fa74fef24.jpg)
As per the above illustration, following are the important points to be considered.

Linked List contains a link element called first.

Each link carries a data field(s) and a link field called next.

Each link is linked with its next link using its next link.

Last link carries a link as null to mark the end of the list.

Types of Linked List
--------------------
Following are the various types of linked list.

Simple Linked List − Item navigation is forward only.

Doubly Linked List − Items can be navigated forward and backward.

Circular Linked List − Last item contains link of the first element as next and the first element has a link to the last element as previous.

Basic Operations
-----------------
Following are the basic operations supported by a list.

Insertion − Adds an element at the beginning of the list.

Deletion − Deletes an element at the beginning of the list.

Display − Displays the complete list.

Search − Searches an element using the given key.

Delete − Deletes an element using the given key.
