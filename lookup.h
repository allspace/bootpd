/* lookup.h */

#include <sys/types.h>

#ifdef	__STDC__
#define P(args) args
#else
#define P(args) ()
#endif

extern u_char *lookup_hwa P((char *hostname, int htype));
extern int lookup_ipa P((char *hostname, u_int32_t *addr));
extern int lookup_netmask P((u_int32_t addr, u_int32_t *mask));

#undef P
