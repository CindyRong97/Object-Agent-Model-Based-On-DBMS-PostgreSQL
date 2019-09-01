#ifndef PG_DEPUTY_H
#define PG_DEPUTY_H

#include "catalog/genbki.h"

#define DeputyId 9002

CATALOG(pg_deputy,9002) 
{
  Oid   sourceclassid;  //源类的Id
  Oid   deputyclassid;  //代理类的Id
  int4  deputyseqno;    //代理的序号
} FormData_pg_deputy;

typedef FormData_pg_deputy *Form_pg_deputy;



#endif
