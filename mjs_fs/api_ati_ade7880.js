let UNS4i = {
    _get: ffi( 'void* get_data(void)' ),
    _descr: ffi('void* get_uns4i_data_descr(void)'),
  
    // ## **`UNS4i.create(uart_no, address)`**
    // Create a USN4i handler.
    // A handler receives 3 parameters: 
    //  1st: UNS4i handle uart number [0,1,2,etc] 
    //  2nd: uns2i address [from 0 to 255]
    //  3rd: uart baudrate [9600. 19200, 38400, 57600, 115200]
    // Return value: none.
    //
    // Example:
    // ```javascript
    // load('api_ati_uns4i.js');
    //      ...
    // let uartno = 1;
    // let uns_addr = 32;
    // let uns_speed = 19200;
    // UNS4i.init( uartno, uns_addr, uns_speed );
    // ```
    init: ffi( 'void init_handler(int, int, int)' ),

    // ## **`UNS4i.get()`**
    // Get a USN4i sizing data.
    // Has no paramtrs
    // Return value: none.
    //
    // Example:
    // ```javascript
    // load('api_ati_uns4i.js');
    //      ...
    // let data = UNS4i.get( );
    // print ( JSON.stringify( UNS4i.get() ) )
    // print ( data.VDC1 )
    // ```
    get: function() {
        return s2o( UNS4i._get(), UNS4i._descr() )
    },

};

