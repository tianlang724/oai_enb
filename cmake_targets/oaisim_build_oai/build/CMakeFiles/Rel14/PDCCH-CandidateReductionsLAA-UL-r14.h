/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PDCCH_CandidateReductionsLAA_UL_r14_H_
#define	_PDCCH_CandidateReductionsLAA_UL_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "PDCCH-CandidateReductionValue-r13.h"
#include "PDCCH-CandidateReductionValue-r14.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCCH_CandidateReductionsLAA_UL_r14_PR {
	PDCCH_CandidateReductionsLAA_UL_r14_PR_NOTHING,	/* No components present */
	PDCCH_CandidateReductionsLAA_UL_r14_PR_release,
	PDCCH_CandidateReductionsLAA_UL_r14_PR_setup
} PDCCH_CandidateReductionsLAA_UL_r14_PR;

/* PDCCH-CandidateReductionsLAA-UL-r14 */
typedef struct PDCCH_CandidateReductionsLAA_UL_r14 {
	PDCCH_CandidateReductionsLAA_UL_r14_PR present;
	union PDCCH_CandidateReductionsLAA_UL_r14_u {
		NULL_t	 release;
		struct PDCCH_CandidateReductionsLAA_UL_r14__setup {
			PDCCH_CandidateReductionValue_r13_t	 pdcch_candidateReductionAL1_r14;
			PDCCH_CandidateReductionValue_r13_t	 pdcch_candidateReductionAL2_r14;
			PDCCH_CandidateReductionValue_r14_t	 pdcch_candidateReductionAL3_r14;
			PDCCH_CandidateReductionValue_r14_t	 pdcch_candidateReductionAL4_r14;
			PDCCH_CandidateReductionValue_r14_t	 pdcch_candidateReductionAL5_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCCH_CandidateReductionsLAA_UL_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDCCH_CandidateReductionsLAA_UL_r14;

#ifdef __cplusplus
}
#endif

#endif	/* _PDCCH_CandidateReductionsLAA_UL_r14_H_ */
#include <asn_internal.h>