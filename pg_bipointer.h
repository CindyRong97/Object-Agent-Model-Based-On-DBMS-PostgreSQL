#ifndef PG_BIPOINTER_H
#define PG_BIPOINTER_H

#include "catalog/genbki.h"

#define BipointerId 9000

CATALOG(pg_bipointer,9000) 
{
  Oid   sourceclassid;  //源类的Id
  Oid   deputyclassid;  //代理类的Id
} FormData_pg_bipointer;

typedef FormData_pg_bipointer *Form_pg_bipointer;

#define BiPointerGetSourceId(bipointerForm) ((bipointerForm)->sourceclassid)
#define BipointerGetDeputyId(bipointerForm) ((bipointerForm)->deputyclassid)


#endif
