#include "dstack.h"
#include <iostream>

using namespace std;

Dstack::Dstack() {
  m_head = NULL;
  m_length = 0;
}

Dstack::~Dstack() {
  while (m_head) {
    Node *temp = m_head;
    m_head = m_head->m_next;
    delete temp;
  }
}

void Dstack::push(double value) {
  m_head = new Node(value, m_head);
  m_length++;
}

bool Dstack::pop(double &value) {
  if (m_head == NULL) {
    return false;
  }
  Node *temp = m_head;
  value = m_head->m_value;
  m_head = m_head->m_next;
  delete temp;
  m_length--;
  return true;
}

int Dstack::size() { return m_length; }

bool Dstack::empty() {
  return m_head == NULL;
}
