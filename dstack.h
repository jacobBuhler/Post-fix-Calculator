#ifndef DSTACK_H
#define DSTACK_H

class Dstack {
public:
  Dstack();
  ~Dstack();
  void push(double value);
  bool pop(double &value);
  int size();
  bool empty();

private:
  class Node {
  public:
    Node(double value, Node *next) {
      m_value = value;
      m_next = next;
    }
    double m_value;
    Node *m_next;
  };
  Node *m_head;
  int m_length;
};
#endif
