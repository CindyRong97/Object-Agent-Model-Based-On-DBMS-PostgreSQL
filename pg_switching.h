#ifndef PG_SWITCHING_H
#define PG_SWITCHING_H

#include "catalog/genbki.h"

#define SwitchingId 9001

CATALOG(pg_switching,9001)
{
  NameData  deputyclassname;  //代理类的名字
  char    deputytyp;    //创建的代理类的代理类型
  text    deputy_query;   //代理时的查询树
} FormData_pg_swithcing;

typedef FormData_pg_switching *Form_pg_switching;

#endif

