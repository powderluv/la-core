
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_AbstractQueue__
#define __java_util_AbstractQueue__

#pragma interface

#include <java/util/AbstractCollection.h>

class java::util::AbstractQueue : public ::java::util::AbstractCollection
{

public: // actually protected
  AbstractQueue();
public:
  virtual jboolean add(::java::lang::Object *);
  virtual ::java::lang::Object * remove();
  virtual ::java::lang::Object * element();
  virtual void clear();
  virtual jboolean addAll(::java::util::Collection *);
  virtual jboolean offer(::java::lang::Object *) = 0;
  virtual ::java::lang::Object * poll() = 0;
  virtual ::java::lang::Object * peek() = 0;
  static ::java::lang::Class class$;
};

#endif // __java_util_AbstractQueue__