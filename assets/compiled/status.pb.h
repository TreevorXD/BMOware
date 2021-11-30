/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_PB_STATUS_STATUS_PB_H_INCLUDED
#define PB_PB_STATUS_STATUS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _PB_Status_PingRequest { 
    pb_bytes_array_t *data; 
} PB_Status_PingRequest;

typedef struct _PB_Status_PingResponse { 
    pb_bytes_array_t *data; 
} PB_Status_PingResponse;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define PB_Status_PingRequest_init_default       {NULL}
#define PB_Status_PingResponse_init_default      {NULL}
#define PB_Status_PingRequest_init_zero          {NULL}
#define PB_Status_PingResponse_init_zero         {NULL}

/* Field tags (for use in manual encoding/decoding) */
#define PB_Status_PingRequest_data_tag           1
#define PB_Status_PingResponse_data_tag          1

/* Struct field encoding specification for nanopb */
#define PB_Status_PingRequest_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_Status_PingRequest_CALLBACK NULL
#define PB_Status_PingRequest_DEFAULT NULL

#define PB_Status_PingResponse_FIELDLIST(X, a) \
X(a, POINTER,  SINGULAR, BYTES,    data,              1)
#define PB_Status_PingResponse_CALLBACK NULL
#define PB_Status_PingResponse_DEFAULT NULL

extern const pb_msgdesc_t PB_Status_PingRequest_msg;
extern const pb_msgdesc_t PB_Status_PingResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define PB_Status_PingRequest_fields &PB_Status_PingRequest_msg
#define PB_Status_PingResponse_fields &PB_Status_PingResponse_msg

/* Maximum encoded size of messages (where known) */
/* PB_Status_PingRequest_size depends on runtime parameters */
/* PB_Status_PingResponse_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif