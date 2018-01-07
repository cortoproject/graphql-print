
#ifndef GRAPHQL_PRINT_H
#define GRAPHQL_PRINT_H

#include <corto/corto.h>
#include <graphql/parser/parser.h>

#ifdef __cplusplus
extern "C" {
#endif

int16_t graphql_print(const char *query);

#ifdef __cplusplus
}
#endif

#endif /* GRAPHQL_PRINT_H */
