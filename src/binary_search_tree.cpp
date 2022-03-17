#include "assignment/binary_search_tree.hpp"

namespace assignment {

  BinarySearchTree::~BinarySearchTree() {
    BinarySearchTree::Clear();
  }

  void BinarySearchTree::Insert(int key, int value) {
    insert(key, value, root_);
  }

  bool BinarySearchTree::Remove(int key) {
    return remove(key, root_);
  }

  void BinarySearchTree::Clear() {
    clear(root_);
    root_ = nullptr;
  }

  std::optional<int> BinarySearchTree::Find(int key) const {
    Node* node = find(key, root_);

    if (node == nullptr) {
      return std::nullopt;
    }

    return node->value;
  }

  bool BinarySearchTree::Contains(int key) const {
    return Find(key).has_value();
  }

  bool BinarySearchTree::IsEmpty() const {
    return root_ == nullptr;
  }

  std::optional<int> BinarySearchTree::FindMin() const {
    Node* min_node = find_min(root_);

    if (min_node == nullptr) {
      return std::nullopt;
    }

    return min_node->key;
  }

  std::optional<int> BinarySearchTree::FindMax() const {
    Node* max_node = find_max(root_);

    if (max_node == nullptr) {
      return std::nullopt;
    }

    return max_node->key;
  }

  Node* BinarySearchTree::root() const {
    return root_;
  }

  // вспомогательные методы

  Node* BinarySearchTree::find(int key, Node* node) const {

    if (node == nullptr) {
      return nullptr;
    }

    if (node->key == key) {
      return node;
    }

    if (key < node->key) {
      return find(key, node->left);
    }

    return find(key, node->right);
  }

  void BinarySearchTree::insert(int key, int value, Node*& node) {

    if (node == nullptr) {
      // пришли к месту добавления нового узла
      node = new Node(key, value);
      return;
    }

    if (key == node->key) {
      // узел с ключом уже существует, обновляем хранимое значение
      node->value = value;
      return;
    }

    // идем вниз по дереву, в зависимости от значения ключа
    if (key < node->key) {
      insert(key, value, node->left);
    } else if (key > node->key) {
      insert(key, value, node->right);
    }
  }

  bool BinarySearchTree::remove(int key, Node*& node) {

    if (node == nullptr) {
      // узел не найден
      return false;
    }

    if (key == node->key) {

      // Случай 1. Два потомка
      if (node->left != nullptr && node->right != nullptr) {

        // наименьший узел в правом поддереве
        // пояснение:
        //  1. в правом поддереве любой элемент гарантированно больше
        //  любого элемента из левого поддерева
        //  2. на месте удаляемого узла должен стоять элемент:
        //    2.1. значение элемента > любого элемента из левого поддерева
        //    2.2. значение элемента < любого элемента из правого поддерева
        Node* min = find_min(node->right);

        node->key = min->key;

        return remove(min->key, node->right);
      }

      // Случай 2. Левый потомок
      if (node->left != nullptr && node->right == nullptr) {
        Node* left_child = node->left;
        delete node;
        node = left_child;
        return true;
      }

      // Случай 3. Правый потомок или нет потомков
      Node* right_node = node->right;
      delete node;
      node = right_node;
      return true;
    }

    if (key < node->key) {
      return remove(key, node->left);
    }

    if (key > node->key) {
      return remove(key, node->right);
    }

    return true;
  }

  void BinarySearchTree::clear(Node* node) {
    if (node != nullptr) {
      clear(node->left);
      clear(node->right);
      delete node;
    }
  }

  Node* BinarySearchTree::find_min(Node* node) const {

    if (node == nullptr) {
      return nullptr;
    }

    if (node->left == nullptr) {
      return node;
    }

    return find_min(node->left);
  }

  Node* BinarySearchTree::find_max(Node* node) const {

    if (node == nullptr) {
      return nullptr;
    }

    if (node->right == nullptr) {
      return node;
    }

    return find_max(node->right);
  }

}  // namespace assignment
