# binary_trees

## General concepts

## 1. Binary Tree
>A binary tree is a hierarchical arrangement of nodes, each having up to two nodes
immediately below it. The nodes immediately below a node are called its chil-
dren. The node above each child is called its parent. Nodes can also have sib-
lings, descendants, and ancestors. As you might expect, the siblings of a node are
the other children of its parent. The descendants of a node are all of the nodes
branching out below it. The ancestors of a node are all the nodes along the path
between it and the root. The performance associated with a tree often is dis-
cussed in terms of its height, the number of levels in which nodes reside. As we
will see, tree terminology is as much familial as it is arboreal

## 2. What is the difference between a binary tree and a Binary Search Tree
>Trees containing nodes with up to two children. The binary tree is a very popular
type of tree utilized in a wide variety of problems. It provides the foundation for
more sophisticated tree structures as well.
So, binary trees organized specifically for searching. Binary search trees are good
for searching data in which we expect to perform insertions and deletions

## 3. What are the depth, the height, the size of a binary tree
>The height of a node is the largest number of edges in a path from that node to a leaf node.

>The height of a binary tree is the largest number of edges in a path from the root node to a leaf node. Essentially, it is the height of the root node. Note that if a tree has only one node, then that node is at the same time the root node and the only leaf node, so the height of the tree is 0. On the other hand, if the tree has no nodes, it’s height is -1.

>The size of a binary tree is the total number of nodes in that tree.

>The depth of a node is the number of edges in the path from the root node to that node.

>The depth of a binary tree is usually used to refer to the height of the tree.

## 4. What are the different traversal methods to go through a binary tree
>Traversal methods are techniques for visiting the nodes of a tree in a specific order. Because the
nodes of a tree are organized in a hierarchical fashion, there are several
options for traversing them.
> - In a preorder traversal for a given subtree, we first traverse its root, then to the left, and then to the right.
> - In an inorder traversal for a given subtree, we first traverse to the left, then to the
root, and then to the right.
> - In a postorder traversal for a given subtree, we first traverse to the left, then to the right, and then to the root.
> - To traverse a binary tree in a level-order fashion, visit its nodes beginning at the root and proceed downward, visiting the nodes at each level from left to right.


## 5. What is a complete, a full, a perfect, a balanced binary tree

### full binary tree
>if every node has 0 or 2 children. The following are the examples of a full binary tree

### Complete binary tree
> A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible. ?

### Balance binary tree
> a tree is balanced if all
leaf nodes are at the same level or, if not, all leaf nodes are in the last two levels
and the second-to-last level is full.

### A perfect binary
> Is a tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

Source: Mastering Algorithms with c. Kile Loudon
