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

=========
**TREE**
=========

Tree represents the nodes connected by edges. We will discuss binary tree or binary search tree specifically.

Binary Tree is a special datastructure used for data storage purposes. A binary tree has a special condition that each node can have a maximum of two children. A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.
![binary_tree](https://user-images.githubusercontent.com/92047366/157462902-b36ba6e6-f268-47e5-a269-54bfad4f2be1.jpg)
Important Terms
---------------
Following are the important terms with respect to tree.

Path − Path refers to the sequence of nodes along the edges of a tree.

Root − The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

Parent − Any node except the root node has one edge upward to a node called parent.

Child − The node below a given node connected by its edge downward is called its child node.

Leaf − The node which does not have any child node is called the leaf node.

Subtree − Subtree represents the descendants of a node.

Visiting − Visiting refers to checking the value of a node when control is on the node.

Traversing − Traversing means passing through nodes in a specific order.

Levels − Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on.

keys − Key represents a value of a node based on which a search operation is to be carried out for a node.


Tree Traversal
---------------
Traversal is a process to visit all the nodes of a tree and may print their values too. Because, all nodes are connected via edges (links) we always start from the root (head) node. That is, we cannot randomly access a node in a tree. There are three ways which we use to traverse a tree −

In-order Traversal
Pre-order Traversal
Post-order Traversal
Generally, we traverse a tree to search or locate a given item or key in the tree or to print all the values it contains.

In-order Traversal
------------------
In this traversal method, the left subtree is visited first, then the root and later the right sub-tree. We should always remember that every node may represent a subtree itself.

If a binary tree is traversed in-order, the output will produce sorted key values in an ascending order.
![inorder_traversal](https://user-images.githubusercontent.com/92047366/157463827-432ed42c-0528-47ca-a3e6-6697770d18e1.jpg)
e start from A, and following in-order traversal, we move to its left subtree B. B is also traversed in-order. The process goes on until all the nodes are visited. The output of inorder traversal of this tree will be −

D → B → E → A → F → C → G

Algorithm
Until all nodes are traversed −
Step 1 − Recursively traverse left subtree.
Step 2 − Visit root node.
Step 3 − Recursively traverse right subtree.

Pre-order Traversal
--------------------
In this traversal method, the root node is visited first, then the left subtree and finally the right subtree.
![preorder_traversal](https://user-images.githubusercontent.com/92047366/157464107-67fcb6b6-7485-4754-9b20-f946b722a2c3.jpg)
We start from A, and following pre-order traversal, we first visit A itself and then move to its left subtree B. B is also traversed pre-order. The process goes on until all the nodes are visited. The output of pre-order traversal of this tree will be −

A → B → D → E → C → F → G

Algorithm
Until all nodes are traversed −
Step 1 − Visit root node.
Step 2 − Recursively traverse left subtree.
Step 3 − Recursively traverse right subtree.

Post-order Traversal
--------------------
In this traversal method, the root node is visited last, hence the name. First we traverse the left subtree, then the right subtree and finally the root node.
![postorder_traversal](https://user-images.githubusercontent.com/92047366/157464310-da1237ea-ec1b-4740-a071-71f4c1f92292.jpg)
We start from A, and following Post-order traversal, we first visit the left subtree B. B is also traversed post-order. The process goes on until all the nodes are visited. The output of post-order traversal of this tree will be −

D → E → B → F → G → C → A

Algorithm
Until all nodes are traversed −
Step 1 − Recursively traverse left subtree.
Step 2 − Recursively traverse right subtree.
Step 3 − Visit root node.

=====================
**BINARY SEARCH TREE**
=====================

Binary Search Tree Representation
---------------------------------
Binary Search tree exhibits a special behavior. A node's left child must have a value less than its parent's value and the node's right child must have a value greater than its parent value.
![binary_search_tree](https://user-images.githubusercontent.com/92047366/157463292-7d842222-e1c9-47cd-8d34-4af808dcc4c0.jpg)

BST Basic Operations
---------------------
The basic operations that can be performed on a binary search tree data structure, are the following −

Insert − Inserts an element in a tree/create a tree.

Search − Searches an element in a tree.

Preorder Traversal − Traverses a tree in a pre-order manner.

Inorder Traversal − Traverses a tree in an in-order manner.

Postorder Traversal − Traverses a tree in a post-order manner.

We shall learn creating (inserting into) a tree structure and searching a data item in a tree in this chapter. We shall learn about tree traversing methods in the coming chapter.

===============
**Binary Tree**
===============

The Binary tree means that the node can have maximum two children. Here, binary name itself suggests that 'two'; therefore, each node can have either 0, 1 or 2 children.

Let's understand the binary tree through an example.
![binary-tree](https://user-images.githubusercontent.com/92047366/157464939-581e0e47-c2de-41b4-ab6b-440f51983215.png)
The above tree is a binary tree because each node contains the utmost two children. The logical representation of the above tree is given below:
![binary-tree2](https://user-images.githubusercontent.com/92047366/157465028-b600d98f-f0c7-4ca3-a671-743812032b2b.png)
In the above tree, node 1 contains two pointers, i.e., left and a right pointer pointing to the left and right node respectively. The node 2 contains both the nodes (left and right node); therefore, it has two pointers (left and right). The nodes 3, 5 and 6 are the leaf nodes, so all these nodes contain NULL pointer on both left and right parts.
Properties of Binary Tree
At each level of i, the maximum number of nodes is 2i.
The height of the tree is defined as the longest path from the root node to the leaf node. The tree which is shown above has a height equal to 3. Therefore, the maximum number of nodes at height 3 is equal to (1+2+4+8) = 15. In general, the maximum number of nodes possible at height h is (20 + 21 + 22+….2h) = 2h+1 -1.
The minimum number of nodes possible at height h is equal to h+1.
If the number of nodes is minimum, then the height of the tree would be maximum. Conversely, if the number of nodes is maximum, then the height of the tree would be minimum.
If there are 'n' number of nodes in the binary tree.

The minimum height can be computed as:

As we know that,

n = 2h+1 -1

n+1 = 2h+1

Taking log on both the sides,

log2(n+1) = log2(2h+1)

log2(n+1) = h+1
h = log2(n+1) - 1

The maximum height can be computed as:

As we know that,

n = h+1

h= n-1


Types of Binary Tree
There are four types of Binary tree:

Full/ proper/ strict Binary tree
Complete Binary tree
Perfect Binary tree
Degenerate Binary tree
Balanced Binary tree
 Full/ proper/ strict Binary tree
 ----------------------------------

The full binary tree is also known as a strict binary tree. The tree can only be considered as the full binary tree if each node must contain either 0 or 2 children. The full binary tree can also be defined as the tree in which each node must contain 2 children except the leaf nodes.


Let's look at the simple example of the Full Binary tree.
![types-of-binary-tree](https://user-images.githubusercontent.com/92047366/157465930-cb326e60-2dde-4a82-acca-52b228b413a0.png)
In the above tree, we can observe that each node is either containing zero or two children; therefore, it is a Full Binary tree.

Properties of Full Binary Tree

The number of leaf nodes is equal to the number of internal nodes plus 1. In the above example, the number of internal nodes is 5; therefore, the number of leaf nodes is equal to 6.
The maximum number of nodes is the same as the number of nodes in the binary tree, i.e., 2h+1 -1.
The minimum number of nodes in the full binary tree is 2*h-1.
The minimum height of the full binary tree is log2(n+1) - 1.
The maximum height of the full binary tree can be computed as:
n= 2*h - 1

n+1 = 2*h

h = n+1/2

Complete Binary Tree
---------------------
The complete binary tree is a tree in which all the nodes are completely filled except the last level. In the last level, all the nodes must be as left as possible. In a complete binary tree, the nodes should be added from the left.

Let's create a complete binary tree.
![types-of-binary-tree2](https://user-images.githubusercontent.com/92047366/157466163-c60265d2-d20c-497a-8e58-1aa829912246.png)
The above tree is a complete binary tree because all the nodes are completely filled, and all the nodes in the last level are added at the left first.

Properties of Complete Binary Tree

The maximum number of nodes in complete binary tree is 2h+1 - 1.
The minimum number of nodes in complete binary tree is 2h.
The minimum height of a complete binary tree is log2(n+1) - 1.
The maximum height of a complete binary tree is

Perfect Binary Tree
-------------------
A tree is a perfect binary tree if all the internal nodes have 2 children, and all the leaf nodes are at the same level.

![types-of-binary-tree3](https://user-images.githubusercontent.com/92047366/157466309-d56bb12d-cafa-49fb-ad68-782d7233512e.png)
Let's look at a simple example of a perfect binary tree.

The below tree is not a perfect binary tree because all the leaf nodes are not at the same level.
![types-of-binary-tree4](https://user-images.githubusercontent.com/92047366/157466446-49279784-99de-441e-8e7f-ddbb1cd97e97.png)

Balanced Binary Tree
---------------------
The balanced binary tree is a tree in which both the left and right trees differ by atmost 1. For example, AVL and Red-Black trees are balanced binary tree.

Let's understand the balanced binary tree through examples.
![types-of-binary-tree7](https://user-images.githubusercontent.com/92047366/157466600-ca18ba61-a11f-43af-b3dc-f0dfb793e2cc.png)
The above tree is a balanced binary tree because the difference between the left subtree and right subtree is zero.
![types-of-binary-tree8](https://user-images.githubusercontent.com/92047366/157466717-81c4c663-c24f-4a17-bc60-9ad06b5f4865.png)

==========
**ARRAY**
==========

Arrays a kind of data structure that can store a fixed-size sequential collection of elements of the same type. An array is used to store a collection of data, but it is often more useful to think of an array as a collection of variables of the same type.

Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.

All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.
![arrays](https://user-images.githubusercontent.com/92047366/157881043-5e528190-3d81-4a1c-b26f-e12db1ec39fd.jpg)
Declaring Arrays
To declare an array in C, a programmer specifies the type of the elements and the number of elements required by an array as follows −

type arrayName [ arraySize ];
This is called a single-dimensional array. The arraySize must be an integer constant greater than zero and type can be any valid C data type. For example, to declare a 10-element array called balance of type double, use this statement −

double balance[10];
Here balance is a variable array which is sufficient to hold up to 10 double numbers.

Initializing Arrays
You can initialize an array in C either one by one or using a single statement as follows −

double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].

If you omit the size of the array, an array just big enough to hold the initialization is created. Therefore, if you write −

double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
You will create exactly the same array as you did in the previous example. Following is an example to assign a single element of the array −

balance[4] = 50.0;
The above statement assigns the 5th element in the array with a value of 50.0. All arrays have 0 as the index of their first element which is also called the base index and the last index of an array will be total size of the array minus 1. Shown below is the pictorial representation of the array we discussed above −
![array_presentation](https://user-images.githubusercontent.com/92047366/157881165-9c4aca03-6065-40bf-aedb-510cc17b664e.jpg)

==========
**
