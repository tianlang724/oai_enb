/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PLMN_IdentityList4_r12_H_
#define	_PLMN_IdentityList4_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityInfo2_r12;

/* PLMN-IdentityList4-r12 */
typedef struct PLMN_IdentityList4_r12 {
	A_SEQUENCE_OF(struct PLMN_IdentityInfo2_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityList4_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList4_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-IdentityInfo2-r12.h"

#endif	/* _PLMN_IdentityList4_r12_H_ */
#include <asn_internal.h>