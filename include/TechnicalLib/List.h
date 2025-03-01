#pragma once

/*
 * Generic auto-resizable list
 */
template <typename T>
class List {
 private:
  T* _array;
  int _nextIndex;
  int _capacity;

 public:
  List(int capacity = 2);
  ~List();
  int Count();
  T operator[](int index);
  void Add(T newElement);
};

// Implementation
template <typename T>
List<T>::List(int capacity) {
  _capacity = capacity;
  _array = new T[_capacity];
  _nextIndex = 0;
}

template <typename T>
List<T>::~List() {
  delete[] _array;
  _capacity = 0;
  _nextIndex = 0;
}

template <typename T>
int List<T>::Count() {
  return _nextIndex;
}

template <typename T>
T List<T>::operator[](int index) {
  return _array[index];
}

template <typename T>
void List<T>::Add(T newElement) {
  if (_nextIndex >= _capacity) {
    // Create a new array with double the capacity
    T* newArray = new T[2 * _capacity];

    // Copying the old array in the new one
    for (int i = 0; i < _capacity; i++) {
      newArray[i] = _array[i];
    }

    // Free the old array
    delete[] _array;

    // Assign the new array and capacity
    _array = newArray;
    _capacity *= 2;
  }

  // Inserting the new value
  _array[_nextIndex] = newElement;
_nextIndex++;
}
