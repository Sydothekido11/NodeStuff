//
//  CTECBinaryTree.hpp
//  NodeStuff
//
//  Created by Nemelka, Sydney on 4/11/16.
//  Copyright © 2016 Nemelka, Sydney. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include "TreeNode.cpp"
namespace CTECData
{
template <class Type>
class CTECBinaryTree
{
private:
    int size;
    TreeNode<Type> * root;
    int height;
    bool balanced;
    bool contains(Type value, CTECBinaryTree<Type> * currentTree);
        
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    bool insert(const Type& value);
    Type remove(const Type& value);
    bool contains(Type value);
    int getSize();
    int getHeight();
    bool isBalanced();
    TreeNode<Type> * getRoot();
        
    };
}

#endif /* CTECBinaryTree_hpp */
