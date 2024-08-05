// # 1: AVL TREE
// # What is AVL Tree ?
// + An AVL tree defined as a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees for any node cannot be more than one
// # 4 way to rotate a tree
// + Left Rotation
// + Right Rotation
// + Left-Right Rotation
// + Right-Left Rotation
// # Applications of AVL Tree
// 1. It is used to index huge records in a database and also to efficiently search in that.
// 2. For all types of in-memory collections, including sets and dictionaries, AVL Trees are used.
// 3. Database applications, where insertions and deletions are less common but frequent data lookups are necessary
// 4. Software that needs optimized search.
// 5. It is applied in corporate areas and storyline games.
// # Advantages of AVL Tree:
// 1. AVL trees can self-balance themselves.
// 2. It is surely not skewed.
// 3. It provides faster lookups than Red-Black Trees
// 4. Better searching time complexity compared to 5. 5.other trees like binary tree.
// 5. Height cannot exceed log(N), where, N is the total number of nodes in the tree.
// # Disadvantages of AVL Tree:
// 1. It is difficult to implement.
// 2. It has high constant factors for some of the operations.
// 3. Less used compared to Red-Black trees.
// 4. Due to its rather strict balance, AVL trees provide complicated insertion and removal operations as more rotations are performed.
// 5. Take more processing for balancing.
// # Insertion in an AVL Tree
// There are four cases, but we just need to focus on two cases (because the rest are same)
// 1. LL-Rotation
// 1. Left Left Case 
// T1, T2, T3 and T4 are subtrees.
//          z                                      y 
//         / \                                   /   \
//        y   T4      Right Rotate (z)          x      z
//       / \          - - - - - - - - ->      /  \    /  \ 
//      x   T3                               T1  T2  T3  T4
//     / \
//   T1   T2
// 2. LR-Rotation
//       z                               z                           x
//     / \                            /   \                        /  \ 
//    y   T4  Left Rotate (y)        x    T4  Right Rotate(z)    y      z
//   / \      - - - - - - - - ->    /  \      - - - - - - - ->  / \    / \
// T1   x                          y    T3                    T1  T2 T3  T4
//     / \                        / \
//   T2   T3                    T1   T2
