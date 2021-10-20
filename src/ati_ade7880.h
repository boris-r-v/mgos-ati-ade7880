#ifndef MGOS_ATI_UNS4i_HANDLER
#define MGOS_ATI_UNS4i_HANDLER

#ifdef __cplusplus
extern "C" {
#endif
#include <stdbool.h>
#include <stdint.h>

#include <mgos.h>
#ifdef MGOS_HAVE_MJS
#include <mjs.h>
#endif


struct uns4i_data{
    float VDC1, VAC1, VAC1f420, VAC1f480, VAC1f580, VAC1f720, VAC1f780;
    uint16_t F1cur, F1mod;
    float VDC2, VAC2, VAC2f420, VAC2f480, VAC2f580, VAC2f720, VAC2f780;
    uint16_t F2cur, F2mod;
    float VDC3, VAC3, VAC3f420, VAC3f480, VAC3f580, VAC3f720, VAC3f780;
    uint16_t F3cur, F3mod;
    float VDC4, VAC4, VAC4f420, VAC4f480, VAC4f580, VAC4f720, VAC4f780;
    uint16_t F4cur, F4mod;
    uint16_t uns_mode, uns_diag;
    uint16_t cntr;
};

#ifdef MGOS_HAVE_MJS
struct mjs_c_struct_member const* get_uns4i_data_descr(void);
#endif

void init_handler( int _uart_no, int _addr, int _baudrate );
struct uns4i_data const* get_data( );

char* get_some(void) {return "TU PIZDA EBUCHAYA";};








#ifdef __cplusplus
}   /*extern "C"*/
#endif  /*__cplusplus*/
#endif  /*MGOS_ATI_UNS4i_HANDLER*/
