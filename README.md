# RedBlackTree
This is a red black tree component implemented in c language
# What is a red-black tree?
A red-black tree is a self-balancing binary lookup tree that adds one bit of storage to each node to represent the node's color, which can be red or black. The characteristics of red-black trees are:
1. Each node is either black or red.
2. The root node is black.
3. Each leaf node (nil node, empty node) is black.
4. If a node is red, then both of its children are black.
5. For each node, a simple path from that node to all its descendant leaf nodes contains the same number of black nodes.

These rules ensure that the red-black tree is balanced so that in the worst case, the search, insert, and delete operations of the red-black tree are O(log n) in time. Red-black trees are widely used in the standard libraries of various programming languages, such as map and set in C++ 's STL.

# 什么是红黑树？
红黑树是一种自平衡二叉查找树，它在每个节点上增加了一个存储位来表示节点的颜色，可以是红色或黑色。红黑树的特点是：

1. 每个节点要么是黑色，要么是红色。
2. 根节点是黑色。
3. 每个叶子节点（nil节点，空节点）是黑色的。
4. 如果一个节点是红色的，则它的两个子节点都是黑色的。
5. 对于每个节点，从该节点到其所有后代叶子节点的简单路径上，均包含相同数目的黑色节点。

这些规则保证了红黑树的平衡性，使得在最坏情况下，红黑树的查找、插入和删除操作的时间复杂度都是O(log n)。红黑树被广泛应用于各种编程语言的标准库中，如C++的STL中的map和set。