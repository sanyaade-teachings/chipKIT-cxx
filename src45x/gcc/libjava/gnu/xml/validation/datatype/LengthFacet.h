
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_datatype_LengthFacet__
#define __gnu_xml_validation_datatype_LengthFacet__

#pragma interface

#include <gnu/xml/validation/datatype/Facet.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace datatype
        {
            class Annotation;
            class LengthFacet;
        }
      }
    }
  }
}

class gnu::xml::validation::datatype::LengthFacet : public ::gnu::xml::validation::datatype::Facet
{

public:
  LengthFacet(jint, jboolean, ::gnu::xml::validation::datatype::Annotation *);
  jint hashCode();
  jboolean equals(::java::lang::Object *);
  jint __attribute__((aligned(__alignof__( ::gnu::xml::validation::datatype::Facet)))) value;
  jboolean fixed;
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_datatype_LengthFacet__
