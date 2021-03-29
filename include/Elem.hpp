// Copyright 2021 name roman name <roman.sekin.90@mail.ru>
#ifndef INCLUDE_ELEM_HPP_
#define INCLUDE_ELEM_HPP_

template <typename T>
struct Elem{
  T elem;
  Elem* previousElem = nullptr;
};

#endif  // INCLUDE_ELEM_HPP_
