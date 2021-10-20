#ifndef ATI_UNS4I_MJS
#define ATI_UNS4I_MJS

#ifdef MGOS_HAVE_MJS
static const struct mjs_c_struct_member uns4i_data_descr[] = {
    {"VDC1", offsetof(struct uns4i_data, VDC1), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1", offsetof(struct uns4i_data, VAC1), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f420", offsetof(struct uns4i_data, VAC1f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f480", offsetof(struct uns4i_data, VAC1f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f580", offsetof(struct uns4i_data, VAC1f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f720", offsetof(struct uns4i_data, VAC1f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC1f780", offsetof(struct uns4i_data, VAC1f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F1cur", offsetof(struct uns4i_data, F1cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F1mod", offsetof(struct uns4i_data, F1mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    

    {"VDC2", offsetof(struct uns4i_data, VDC2), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2", offsetof(struct uns4i_data, VAC2), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f420", offsetof(struct uns4i_data, VAC2f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f480", offsetof(struct uns4i_data, VAC2f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f580", offsetof(struct uns4i_data, VAC2f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f720", offsetof(struct uns4i_data, VAC2f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC2f780", offsetof(struct uns4i_data, VAC2f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F2cur", offsetof(struct uns4i_data, F2cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F2mod", offsetof(struct uns4i_data, F2mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    

    {"VDC3", offsetof(struct uns4i_data, VDC3), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3", offsetof(struct uns4i_data, VAC3), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f420", offsetof(struct uns4i_data, VAC3f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f480", offsetof(struct uns4i_data, VAC3f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f580", offsetof(struct uns4i_data, VAC3f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f720", offsetof(struct uns4i_data, VAC3f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC3f780", offsetof(struct uns4i_data, VAC3f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F3cur", offsetof(struct uns4i_data, F3cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F3mod", offsetof(struct uns4i_data, F3mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    

    {"VDC4", offsetof(struct uns4i_data, VDC4), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4", offsetof(struct uns4i_data, VAC4), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f420", offsetof(struct uns4i_data, VAC4f420), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f480", offsetof(struct uns4i_data, VAC4f480), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f580", offsetof(struct uns4i_data, VAC4f580), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f720", offsetof(struct uns4i_data, VAC4f720), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"VAC4f780", offsetof(struct uns4i_data, VAC4f780), MJS_STRUCT_FIELD_TYPE_FLOAT, NULL },
    {"F4cur", offsetof(struct uns4i_data, F4cur), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },    
    {"F4mod", offsetof(struct uns4i_data, F4mod), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },   

    {"uns_mode", offsetof(struct uns4i_data, uns_mode), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },   
    {"uns_diag", offsetof(struct uns4i_data, uns_diag), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },   
    {"cntr", offsetof(struct uns4i_data, cntr), MJS_STRUCT_FIELD_TYPE_UINT16, NULL },   

    {NULL, 0, MJS_STRUCT_FIELD_TYPE_INVALID, NULL},
};
struct mjs_c_struct_member const* get_uns4i_data_descr(void){
    return uns4i_data_descr;
};

#endif

#endif // ATI_UNS4I_MJS
