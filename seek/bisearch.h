#ifndef _H_BISEARCH_
#define _H_BISEARCH_

typedef enum _enu_bisearchret
{
    BISEARCH_SUCCESS = 0,//= BISEARCH_ISSORTED,
    BISEARCH_ISSORTED = 0,
    BISEARCH_ERR_NOTFOUNDKEY,
    BISEARCH_ERR_NOTSORTED
} Enu_Bisearchret;

Enu_Bisearchret is_sorted( int* array, int len );
Enu_Bisearchret bisearch( int* array, int start, int end, int keyword );

#endif  /*  _H_BISEARCH_ */
