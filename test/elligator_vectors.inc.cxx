template <typename Group> struct base_multiples;

template <> struct base_multiples<Ed448Goldilocks> {
    static const int count = 16;
    static const uint8_t values[count][Ed448Goldilocks::Point::SER_BYTES];
};
const uint8_t base_multiples<Ed448Goldilocks>::values[][Ed448Goldilocks::Point::SER_BYTES] = {
        /* Computed using SAGE script */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
    {0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
     0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,
     0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,
     0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33,0x33},
    {0xc8,0x98,0xeb,0x4f,0x87,0xf9,0x7c,0x56,0x4c,0x6f,0xd6,0x1f,0xc7,0xe4,
     0x96,0x89,0x31,0x4a,0x1f,0x81,0x8e,0xc8,0x5e,0xeb,0x3b,0xd5,0x51,0x4a,
     0xc8,0x16,0xd3,0x87,0x78,0xf6,0x9e,0xf3,0x47,0xa8,0x9f,0xca,0x81,0x7e,
     0x66,0xde,0xfd,0xed,0xce,0x17,0x8c,0x7c,0xc7,0x09,0xb2,0x11,0x6e,0x75},
    {0xa0,0xc0,0x9b,0xf2,0xba,0x72,0x08,0xfd,0xa0,0xf4,0xbf,0xe3,0xd0,0xf5,
     0xb2,0x9a,0x54,0x30,0x12,0x30,0x6d,0x43,0x83,0x1b,0x5a,0xdc,0x6f,0xe7,
     0xf8,0x59,0x6f,0xa3,0x08,0x76,0x3d,0xb1,0x54,0x68,0x32,0x3b,0x11,0xcf,
     0x6e,0x4a,0xeb,0x8c,0x18,0xfe,0x44,0x67,0x8f,0x44,0x54,0x5a,0x69,0xbc},
    {0xb4,0x6f,0x18,0x36,0xaa,0x28,0x7c,0x0a,0x5a,0x56,0x53,0xf0,0xec,0x5e,
     0xf9,0xe9,0x03,0xf4,0x36,0xe2,0x1c,0x15,0x70,0xc2,0x9a,0xd9,0xe5,0xf5,
     0x96,0xda,0x97,0xee,0xaf,0x17,0x15,0x0a,0xe3,0x0b,0xcb,0x31,0x74,0xd0,
     0x4b,0xc2,0xd7,0x12,0xc8,0xc7,0x78,0x9d,0x7c,0xb4,0xfd,0xa1,0x38,0xf4},
    {0x1c,0x5b,0xbe,0xcf,0x47,0x41,0xdf,0xaa,0xe7,0x9d,0xb7,0x2d,0xfa,0xce,
     0x00,0xea,0xaa,0xc5,0x02,0xc2,0x06,0x09,0x34,0xb6,0xea,0xae,0xca,0x6a,
     0x20,0xbd,0x3d,0xa9,0xe0,0xbe,0x87,0x77,0xf7,0xd0,0x20,0x33,0xd1,0xb1,
     0x58,0x84,0x23,0x22,0x81,0xa4,0x1f,0xc7,0xf8,0x0e,0xed,0x04,0xaf,0x5e},
    {0x86,0xff,0x01,0x82,0xd4,0x0f,0x7f,0x9e,0xdb,0x78,0x62,0x51,0x58,0x21,
     0xbd,0x67,0xbf,0xd6,0x16,0x5a,0x3c,0x44,0xde,0x95,0xd7,0xdf,0x79,0xb8,
     0x77,0x9c,0xcf,0x64,0x60,0xe3,0xc6,0x8b,0x70,0xc1,0x6a,0xaa,0x28,0x0f,
     0x2d,0x7b,0x3f,0x22,0xd7,0x45,0xb9,0x7a,0x89,0x90,0x6c,0xfc,0x47,0x6c},
    {0x50,0x2b,0xcb,0x68,0x42,0xeb,0x06,0xf0,0xe4,0x90,0x32,0xba,0xe8,0x7c,
     0x55,0x4c,0x03,0x1d,0x6d,0x4d,0x2d,0x76,0x94,0xef,0xbf,0x9c,0x46,0x8d,
     0x48,0x22,0x0c,0x50,0xf8,0xca,0x28,0x84,0x33,0x64,0xd7,0x0c,0xee,0x92,
     0xd6,0xfe,0x24,0x6e,0x61,0x44,0x8f,0x9d,0xb9,0x80,0x8b,0x3b,0x24,0x08},
    {0x0c,0x98,0x10,0xf1,0xe2,0xeb,0xd3,0x89,0xca,0xa7,0x89,0x37,0x4d,0x78,
     0x00,0x79,0x74,0xef,0x4d,0x17,0x22,0x73,0x16,0xf4,0x0e,0x57,0x8b,0x33,
     0x68,0x27,0xda,0x3f,0x6b,0x48,0x2a,0x47,0x94,0xeb,0x6a,0x39,0x75,0xb9,
     0x71,0xb5,0xe1,0x38,0x8f,0x52,0xe9,0x1e,0xa2,0xf1,0xbc,0xb0,0xf9,0x12},
    {0x20,0xd4,0x1d,0x85,0xa1,0x8d,0x56,0x57,0xa2,0x96,0x40,0x32,0x15,0x63,
     0xbb,0xd0,0x4c,0x2f,0xfb,0xd0,0xa3,0x7a,0x7b,0xa4,0x3a,0x4f,0x7d,0x26,
     0x3c,0xe2,0x6f,0xaf,0x4e,0x1f,0x74,0xf9,0xf4,0xb5,0x90,0xc6,0x92,0x29,
     0xae,0x57,0x1f,0xe3,0x7f,0xa6,0x39,0xb5,0xb8,0xeb,0x48,0xbd,0x9a,0x55},
    {0xe6,0xb4,0xb8,0xf4,0x08,0xc7,0x01,0x0d,0x06,0x01,0xe7,0xed,0xa0,0xc3,
     0x09,0xa1,0xa4,0x27,0x20,0xd6,0xd0,0x6b,0x57,0x59,0xfd,0xc4,0xe1,0xef,
     0xe2,0x2d,0x07,0x6d,0x6c,0x44,0xd4,0x2f,0x50,0x8d,0x67,0xbe,0x46,0x29,
     0x14,0xd2,0x8b,0x8e,0xdc,0xe3,0x2e,0x70,0x94,0x30,0x51,0x64,0xaf,0x17},
    {0xbe,0x88,0xbb,0xb8,0x6c,0x59,0xc1,0x3d,0x8e,0x9d,0x09,0xab,0x98,0x10,
     0x5f,0x69,0xc2,0xd1,0xdd,0x13,0x4d,0xbc,0xd3,0xb0,0x86,0x36,0x58,0xf5,
     0x31,0x59,0xdb,0x64,0xc0,0xe1,0x39,0xd1,0x80,0xf3,0xc8,0x9b,0x82,0x96,
     0xd0,0xae,0x32,0x44,0x19,0xc0,0x6f,0xa8,0x7f,0xc7,0xda,0xaf,0x34,0xc1},
    {0xa4,0x56,0xf9,0x36,0x97,0x69,0xe8,0xf0,0x89,0x02,0x12,0x4a,0x03,0x14,
     0xc7,0xa0,0x65,0x37,0xa0,0x6e,0x32,0x41,0x1f,0x4f,0x93,0x41,0x59,0x50,
     0xa1,0x7b,0xad,0xfa,0x74,0x42,0xb6,0x21,0x74,0x34,0xa3,0xa0,0x5e,0xf4,
     0x5b,0xe5,0xf1,0x0b,0xd7,0xb2,0xef,0x8e,0xa0,0x0c,0x43,0x1e,0xde,0xc5},
    {0x18,0x6e,0x45,0x2c,0x44,0x66,0xaa,0x43,0x83,0xb4,0xc0,0x02,0x10,0xd5,
     0x2e,0x79,0x22,0xdb,0xf9,0x77,0x1e,0x8b,0x47,0xe2,0x29,0xa9,0xb7,0xb7,
     0x3c,0x8d,0x10,0xfd,0x7e,0xf0,0xb6,0xe4,0x15,0x30,0xf9,0x1f,0x24,0xa3,
     0xed,0x9a,0xb7,0x1f,0xa3,0x8b,0x98,0xb2,0xfe,0x47,0x46,0xd5,0x1d,0x68},
    {0x4a,0xe7,0xfd,0xca,0xe9,0x45,0x3f,0x19,0x5a,0x8e,0xad,0x5c,0xbe,0x1a,
     0x7b,0x96,0x99,0x67,0x3b,0x52,0xc4,0x0a,0xb2,0x79,0x27,0x46,0x48,0x87,
     0xbe,0x53,0x23,0x7f,0x7f,0x3a,0x21,0xb9,0x38,0xd4,0x0d,0x0e,0xc9,0xe1,
     0x5b,0x1d,0x51,0x30,0xb1,0x3f,0xfe,0xd8,0x13,0x73,0xa5,0x3e,0x2b,0x43},
    {0x84,0x19,0x81,0xc3,0xbf,0xee,0xc3,0xf6,0x0c,0xfe,0xca,0x75,0xd9,0xd8,
     0xdc,0x17,0xf4,0x6c,0xf0,0x10,0x6f,0x24,0x22,0xb5,0x9a,0xec,0x58,0x0a,
     0x58,0xf3,0x42,0x27,0x2e,0x3a,0x5e,0x57,0x5a,0x05,0x5d,0xdb,0x05,0x13,
     0x90,0xc5,0x4c,0x24,0xc6,0xec,0xb1,0xe0,0xac,0xeb,0x07,0x5f,0x60,0x56},
};

template <typename Group> struct elligator_examples;

template <> struct elligator_examples<Ed448Goldilocks> {
    static const int count = 16;
    static const uint8_t inputs[count] [Ed448Goldilocks::Point::HASH_BYTES];
    static const uint8_t outputs[count][Ed448Goldilocks::Point::SER_BYTES];
};
const uint8_t elligator_examples<Ed448Goldilocks>::inputs
    [elligator_examples<Ed448Goldilocks>::count][Ed448Goldilocks::Point::HASH_BYTES] = {
        /* Computed using SAGE script */
    {0x2d,0x86,0xa1,0x42,0x33,0x8d,0xe2,0x74,0x80,0x63,0x54,0xc4,0x3e,0x29,
     0xaf,0x70,0x5a,0xa9,0xa1,0x89,0x3e,0x6f,0xd3,0xee,0x2e,0x95,0x22,0xc9,
     0xce,0xb4,0x0b,0xe2,0x44,0x1b,0xac,0x8a,0x4f,0x78,0x06,0x43,0x43,0x89,
     0x25,0xd7,0x91,0x46,0x98,0x8b,0x1c,0xa1,0x12,0xda,0x71,0x4d,0xe9,0x2a},
    {0xee,0x79,0x8e,0xe0,0x86,0xde,0x1f,0x5a,0x57,0xa2,0xca,0x28,0xdb,0x84,
     0x51,0xd3,0x06,0xcb,0xb9,0xee,0x22,0x27,0xc4,0x97,0xf4,0xa6,0x7a,0x69,
     0x06,0xd7,0xeb,0xbc,0x7a,0xa8,0x5f,0x94,0x6f,0xf9,0xdf,0xf7,0x9e,0x1b,
     0x7e,0x88,0xd9,0x7e,0x3a,0xd4,0xa4,0xe0,0xa1,0x20,0x32,0x32,0x3a,0xb7},
    {0x2e,0x1b,0x10,0x93,0xb3,0x47,0x75,0x97,0x66,0x46,0x49,0xb0,0xb7,0xc6,
     0xac,0x1f,0x9b,0xb7,0x5d,0xd9,0xfd,0xb5,0x08,0x96,0xcb,0xaa,0x06,0x15,
     0xc5,0x25,0x43,0x6d,0x62,0x54,0xec,0x13,0xd9,0x19,0x0e,0xa4,0x25,0xe5,
     0xba,0x80,0xee,0xfc,0x25,0x9b,0xcd,0x1e,0x2a,0x5a,0xf0,0x0e,0x8a,0x9e},
    {0x8a,0x59,0x3f,0xb9,0x9c,0x04,0xb5,0xc0,0x50,0xc9,0x0d,0xc7,0x90,0x93,
     0x65,0x89,0x41,0x5b,0x9b,0xd6,0x78,0x3d,0x9e,0x92,0x5e,0x63,0x4b,0x87,
     0x81,0x4f,0xd1,0xda,0x2a,0x36,0xcd,0x80,0x45,0xbb,0x6c,0x36,0xd6,0x7e,
     0xb8,0x2c,0x17,0x84,0x01,0x35,0x6b,0xe8,0x40,0x42,0x9c,0x78,0x0c,0x70},
    {0x80,0xb2,0x5f,0xfc,0xfb,0xd8,0x0b,0x83,0xa7,0x86,0xc1,0x07,0x6d,0x3a,
     0x23,0xd8,0x50,0x49,0xfd,0x4c,0x51,0x91,0x92,0xa7,0xd1,0xe8,0x52,0x38,
     0x93,0x6e,0x1c,0x09,0x22,0x15,0xc8,0x0b,0x2d,0x9d,0xd1,0x3d,0x88,0x49,
     0x82,0x9d,0x7f,0x6a,0x38,0x2a,0x5a,0xce,0x05,0x16,0x6e,0x4b,0x08,0x5b},
    {0xc1,0x15,0x77,0x32,0xc6,0xd2,0xba,0xf4,0x48,0x88,0x7a,0x1c,0x4a,0x2a,
     0x90,0xb4,0x0b,0x07,0x84,0x0f,0xf9,0x62,0xda,0x1f,0x71,0x91,0x05,0x8c,
     0xb9,0x37,0xdf,0xe5,0xce,0xb2,0x5e,0x34,0x4e,0x33,0xfc,0x9d,0xf0,0xc6,
     0x8e,0x99,0xcb,0x35,0x07,0xaa,0xfe,0xb9,0xa6,0xc9,0x66,0x75,0xbb,0xf1},
    {0xa5,0x50,0x98,0x77,0xa2,0xbb,0xe8,0x0d,0x07,0xc2,0x3b,0x26,0x46,0x73,
     0x85,0xf9,0x7c,0x16,0xbe,0x48,0x82,0x40,0x0f,0x31,0x80,0x0e,0x15,0xdd,
     0x43,0x9e,0x52,0x34,0x43,0xcf,0x94,0x68,0x88,0x59,0xb7,0x62,0x64,0x3d,
     0x64,0xbe,0xda,0x91,0xf7,0x50,0xac,0x6e,0x00,0x16,0xaf,0xaf,0xd3,0x09},
    {0xbd,0x9b,0xe4,0xe9,0x20,0x93,0xcf,0x24,0x40,0x79,0xa6,0xff,0x63,0xad,
     0x01,0xe1,0x9c,0xae,0x6d,0x80,0x65,0xed,0x83,0xbb,0x05,0x2e,0x14,0xe2,
     0x39,0x04,0x8e,0x3b,0x8a,0xeb,0x90,0xe9,0x35,0xbe,0xbe,0x29,0x24,0x1e,
     0x34,0x4d,0xc9,0x0d,0x31,0xd0,0x4e,0x99,0xd6,0xa1,0xad,0xca,0x8b,0x38},
    {0xc3,0x5e,0xfb,0xe1,0xab,0xee,0x01,0xf9,0xe4,0x5e,0x03,0x84,0xfa,0x2f,
     0x94,0x3a,0x6e,0x8f,0x56,0x11,0x86,0x4b,0x55,0x5f,0x18,0x6c,0x7c,0xf8,
     0xe3,0x4c,0xc6,0x27,0xcb,0xa5,0x85,0xfb,0xcf,0xc4,0x26,0x84,0xeb,0x30,
     0xbe,0x62,0x23,0x5c,0x1e,0x10,0xe8,0x82,0xca,0x42,0x19,0xa8,0xc4,0x85},
    {0x3c,0x30,0x0f,0xed,0xd9,0x86,0x6f,0x6a,0xfa,0xbc,0x14,0x3e,0x1f,0x73,
     0x0a,0xf6,0xea,0xda,0xc0,0x20,0x7e,0x00,0x88,0x88,0xb6,0xeb,0x79,0xa2,
     0xf7,0xe6,0xe6,0x7e,0xd0,0x1e,0x71,0xaf,0x64,0x77,0x7b,0x90,0xbf,0x61,
     0x0a,0x5e,0x36,0xca,0xd0,0xcd,0x88,0xef,0x88,0x3a,0x9b,0x6a,0xb8,0x13},
    {0x11,0xf8,0x2f,0x21,0xe4,0x61,0x64,0x36,0xe6,0x9e,0xd8,0xe3,0x57,0x03,
     0xcc,0xcd,0x1f,0x65,0xaa,0x75,0xf0,0x7e,0x8a,0xfa,0xa3,0x35,0x29,0xcc,
     0x22,0x58,0xeb,0x2b,0x0f,0xb1,0x82,0x71,0x0f,0xfc,0x67,0xd1,0xe0,0xd0,
     0xde,0x37,0x3d,0x4f,0xd2,0xd5,0xb1,0x7b,0x58,0xb3,0xc7,0xd4,0x73,0x12},
    {0x3d,0xbd,0xcf,0x91,0xe8,0x35,0xa8,0x30,0xfd,0x8a,0xf9,0xc6,0x9d,0xc1,
     0x30,0x66,0xdf,0x1e,0x24,0x44,0x8b,0x91,0x78,0xa0,0x99,0xbb,0x07,0x57,
     0x3e,0xfe,0xc4,0x8e,0xab,0x2c,0x11,0x9b,0xcb,0xbb,0x82,0x8d,0x20,0xc1,
     0x64,0x7d,0x42,0x31,0xdf,0xeb,0x9b,0xd0,0x86,0xf2,0x6d,0xb7,0x7e,0x71},
    {0xac,0x8b,0xf3,0x02,0x0a,0x1c,0x73,0x3a,0x59,0x10,0x92,0xb6,0x7a,0x32,
     0x23,0xca,0x2f,0xab,0x64,0x53,0xd2,0x25,0xba,0x83,0x2e,0x34,0xd0,0xc4,
     0xbf,0xca,0x95,0x2b,0xe3,0x2d,0x39,0x76,0xca,0x73,0x8c,0x5a,0xb3,0xdd,
     0xc9,0xc7,0x62,0x70,0x78,0x41,0x83,0x72,0xdb,0x77,0x0f,0x17,0xb5,0x5c},
    {0xf6,0xc5,0x5d,0x6b,0x46,0x97,0xd6,0xf8,0x3d,0x6e,0xcc,0xc4,0xdb,0x2f,
     0x72,0xf8,0xf2,0xf6,0x7e,0x75,0x24,0xff,0x91,0xd6,0xf6,0xc8,0xa7,0x56,
     0xab,0x03,0x96,0x7a,0x64,0x89,0x42,0x71,0xe7,0x1e,0x71,0xd8,0x95,0x72,
     0x9f,0x06,0x31,0xfd,0x7c,0x0d,0xe1,0xc2,0x73,0xc0,0x90,0x92,0x43,0x23},
    {0x9b,0x30,0x03,0x76,0xa4,0xb9,0x5e,0xa2,0x02,0x4b,0xdb,0xd9,0x7a,0x96,
     0x93,0xc3,0xf6,0x0a,0xe0,0xbb,0xdb,0xda,0xfc,0x47,0x09,0x27,0x8b,0x65,
     0x34,0xc8,0xa2,0xd5,0xff,0x9b,0xb3,0xd2,0x10,0xd9,0x49,0xd5,0xbf,0x09,
     0x49,0x19,0xb9,0x0d,0x2f,0x0f,0xf9,0x82,0xed,0x92,0x79,0x95,0xdc,0x60},
    {0x90,0x95,0x7d,0x59,0x78,0x10,0xb2,0x7b,0x84,0x9a,0x69,0x1f,0x5d,0x27,
     0xd5,0x48,0x96,0x3d,0x35,0x4a,0xe9,0xe2,0x9a,0xd5,0x9a,0x23,0x0a,0x15,
     0x5a,0xaa,0x6f,0xe7,0xc5,0x4c,0x82,0xd5,0x08,0x14,0xd8,0xfd,0xcd,0x2d,
     0x3b,0xb1,0xe5,0x53,0xa8,0x41,0xf9,0x71,0xd7,0x24,0xa4,0x64,0x7a,0xba}
};
const uint8_t elligator_examples<Ed448Goldilocks>::outputs
    [elligator_examples<Ed448Goldilocks>::count][Ed448Goldilocks::Point::SER_BYTES] = {
        /* Computed using SAGE script */
    {0xa6,0x99,0x3b,0x5a,0x6c,0xbb,0x40,0x71,0x6e,0xb2,0xaf,0xa1,0x53,0x05,
     0x27,0x75,0xd2,0x55,0xff,0x2f,0x64,0x4e,0x2f,0x91,0x32,0xb4,0x04,0xfc,
     0x80,0x68,0x08,0x09,0x40,0x43,0xf7,0xa2,0xe4,0x7c,0x0a,0xd9,0x27,0x2f,
     0x53,0x33,0x2d,0x21,0xf4,0x07,0x70,0xd6,0x60,0xa8,0xf1,0xf1,0xed,0x23},
    {0xde,0x6a,0x92,0x82,0xee,0x9f,0x8f,0xa9,0xb0,0x2c,0xa9,0x5e,0xd4,0xbf,
     0x7f,0x87,0xb7,0x1f,0xc3,0x64,0xbc,0x75,0xd5,0x71,0xf2,0xe9,0xa7,0x07,
     0xf7,0x16,0x66,0xb2,0xdf,0x06,0x55,0xf2,0x00,0x2e,0x1c,0x84,0x23,0x9e,
     0xed,0x70,0xde,0xd8,0xa6,0x92,0xaf,0x39,0x52,0x03,0x38,0xc7,0xc9,0xef},
    {0x02,0x51,0x0b,0x4c,0x16,0xa7,0x01,0xa1,0x68,0x82,0xb5,0x1e,0xc5,0xd1,
     0x4e,0x25,0x18,0x5b,0x7a,0x8c,0xd3,0x12,0xc3,0xcf,0xc0,0x7c,0x11,0x00,
     0x40,0xd0,0x01,0xad,0x59,0x0a,0xd7,0x2d,0xc3,0x07,0x74,0xd8,0x2b,0x1a,
     0x91,0xb9,0xe3,0x6c,0x42,0x3e,0x93,0x7d,0x26,0x4b,0x2d,0x99,0xd6,0xb6},
    {0x9c,0x64,0x7b,0x77,0x1c,0x28,0x82,0x64,0xe8,0x0f,0xc8,0x11,0x4c,0x58,
     0xdb,0x46,0xe8,0xf0,0x66,0x6c,0x10,0xd7,0xf5,0x6b,0xa8,0x56,0xae,0x67,
     0x09,0x2a,0xa8,0x8c,0x42,0x16,0x65,0x2e,0x6a,0x12,0x9c,0x1b,0x40,0x90,
     0xca,0xab,0xe3,0x9a,0xfd,0x35,0x2b,0xe4,0xdc,0x40,0x99,0x81,0x9c,0x59},
    {0x06,0xe9,0x16,0x29,0xce,0x93,0x48,0x6a,0xd3,0xa7,0xe7,0x29,0xf0,0x1c,
     0x4d,0x29,0x4a,0x4b,0xde,0xef,0xaf,0x48,0x32,0x04,0xc1,0x67,0xdf,0xe8,
     0xf0,0xc9,0xd2,0x32,0x50,0x6f,0xa5,0x21,0xf5,0x30,0x0e,0x19,0xa0,0x00,
     0x43,0x24,0x50,0x8b,0x39,0x0a,0x6f,0x25,0x81,0x4f,0xc8,0x68,0x3a,0xa4},
    {0x68,0x11,0x77,0xb0,0x76,0xc9,0xe5,0x53,0xc7,0xe5,0x7a,0x22,0xe7,0x59,
     0x05,0x96,0xe3,0x48,0x2d,0xe2,0x3f,0x28,0x55,0xa8,0xaf,0x82,0xcc,0x51,
     0x6c,0x52,0xa9,0x37,0x35,0xed,0x3d,0xde,0x91,0xb8,0x21,0x0b,0xad,0x64,
     0xb1,0x7d,0x0c,0x1d,0x7c,0x14,0xcc,0xc1,0x52,0x6c,0xc4,0x14,0x0f,0x11},
    {0x68,0x05,0x63,0x1c,0x06,0xf6,0xd0,0xb5,0xcc,0xf7,0x1f,0xea,0x2e,0x4c,
     0xdf,0x3e,0xa3,0x10,0x4a,0x44,0xa8,0x21,0x20,0x5a,0x25,0x01,0x4c,0x9a,
     0x17,0xac,0x43,0x33,0xbb,0xf6,0xbb,0x28,0x9b,0x42,0x57,0xcc,0xd7,0xf7,
     0xbb,0x11,0xe5,0xc4,0xdd,0xd8,0x6d,0xa9,0x53,0x19,0xdc,0x47,0x04,0x4d},
    {0x4c,0x0e,0x89,0x30,0xee,0x39,0xf2,0xa7,0x43,0xd1,0x79,0x74,0x5b,0x4c,
     0x94,0x0f,0xf5,0x8f,0x53,0x99,0x57,0x32,0x31,0x3d,0x7e,0xe7,0x8c,0xa2,
     0xde,0xca,0x42,0xa4,0x8f,0x00,0x40,0xc7,0x9a,0x7e,0xd5,0x47,0x00,0x0b,
     0x20,0x8b,0x95,0x94,0xce,0xc4,0xe3,0xe9,0xdf,0x5c,0x01,0x38,0xb8,0xaa},
    {0x48,0xc3,0x3a,0x47,0x66,0x05,0xfe,0x0f,0xbb,0x33,0xd3,0x7b,0x67,0x2a,
     0xac,0x14,0xd7,0xc6,0x2b,0x84,0x56,0xd2,0x77,0x60,0x8f,0xc2,0x90,0x6d,
     0x03,0x87,0x1d,0x39,0x59,0xdd,0x4a,0x4c,0xaf,0xab,0xe7,0xc2,0x5b,0x6f,
     0x59,0xc9,0xa9,0xd1,0x7c,0x72,0x4d,0x97,0x55,0x52,0x98,0xc9,0xdf,0x3f},
    {0x0a,0x0c,0x08,0x9d,0x50,0x5d,0x30,0xd1,0xce,0x91,0xcf,0x36,0x96,0xca,
     0x76,0x10,0xa4,0xe5,0x4a,0xf6,0xf6,0x05,0xcd,0x68,0xff,0x30,0x3c,0xb5,
     0x0b,0xbd,0xba,0xb9,0x90,0x36,0x51,0xed,0x6b,0xdc,0x35,0xf2,0xa8,0x0b,
     0xc7,0x64,0xe3,0x50,0xf8,0xa2,0x3f,0x70,0x03,0xdc,0xd3,0xaa,0x36,0x4f},
    {0x56,0x21,0x3f,0x80,0x39,0x79,0xce,0x00,0x33,0xa2,0xaa,0x9b,0xcc,0xb8,
     0x51,0x3b,0x82,0x0b,0x15,0x52,0xe8,0x14,0x75,0x86,0x4a,0x48,0xfe,0x60,
     0xe9,0x22,0x73,0xa8,0xf2,0xe5,0x7a,0x77,0xb8,0x1a,0xf1,0x74,0x6e,0x42,
     0xe6,0x47,0xcc,0xc6,0xfa,0x54,0xe0,0xd0,0x7c,0xdd,0x33,0x76,0xc2,0x39},
    {0xf4,0x8f,0xa8,0x82,0xb5,0x2f,0x79,0xf1,0x8f,0x33,0xac,0xfc,0x23,0x71,
     0x5e,0x8f,0x3e,0x6c,0xcf,0x8e,0xa8,0x7a,0x3f,0xc0,0x71,0xcd,0xb1,0xeb,
     0xd2,0x96,0xf2,0x9e,0x83,0x15,0x78,0xa9,0x21,0x29,0x1d,0x3c,0x80,0x13,
     0x52,0x59,0x45,0x96,0xa1,0x7d,0x27,0x68,0xe2,0xc2,0x86,0x32,0x13,0x7d},
    {0xaa,0x3b,0x6c,0x33,0xc2,0x7a,0x5a,0x25,0xf9,0x45,0x20,0x30,0x56,0x73,
     0x32,0xe1,0x70,0x5b,0xdf,0x72,0x45,0xef,0xd8,0x98,0x60,0x2c,0xcf,0x79,
     0x93,0x4c,0xa7,0x40,0xed,0x8a,0x12,0xc7,0xee,0x82,0x1e,0x99,0x22,0x52,
     0x1a,0xb8,0xbf,0xca,0x3a,0x1d,0xb9,0x16,0xe4,0x66,0x78,0xc5,0x1f,0x81},
    {0xba,0x1c,0xfd,0xca,0x84,0x4f,0x16,0x71,0x6a,0x77,0xba,0x74,0x7a,0x1f,
     0x46,0xd2,0x9f,0xfa,0x90,0x3a,0x74,0xe5,0xf2,0x14,0xfb,0xef,0x06,0x67,
     0x67,0x7d,0xcf,0x9b,0xb0,0x2a,0xf7,0xe3,0x4d,0x27,0x02,0xea,0xdb,0xbe,
     0x80,0xeb,0xcf,0x94,0x4c,0x2a,0x54,0x2a,0x98,0x35,0x59,0xd9,0x24,0x8a},
    {0x50,0xdf,0xb7,0xe7,0x92,0x92,0xf3,0xb0,0x4e,0x0d,0x5c,0x73,0x8a,0xf2,
     0xba,0xc6,0xda,0xdf,0x00,0xe5,0x37,0x7b,0xbf,0xc1,0xe7,0x13,0xe1,0xda,
     0x5f,0xa1,0xa3,0xc2,0xfd,0x4b,0x10,0x81,0x0d,0x99,0xcf,0x8f,0xca,0x91,
     0x37,0x3e,0x47,0x8a,0x84,0xab,0xcd,0x65,0xdf,0xf9,0x27,0x3c,0x13,0xf1},
    {0xe4,0xe1,0xa4,0x8d,0x1d,0x72,0xe2,0x72,0x3b,0x09,0x09,0xf9,0x7f,0xcd,
     0x57,0x0d,0xdf,0x8c,0xdc,0x47,0xdf,0x6d,0xfa,0x6a,0x8d,0x67,0x45,0x4f,
     0x6b,0x44,0x6d,0xbf,0xf3,0x41,0x1c,0x57,0x1c,0xf0,0x77,0x14,0x06,0xf6,
     0x8c,0xb9,0xa3,0x40,0x34,0x70,0xd6,0x36,0xe5,0xa6,0xce,0x1b,0x84,0xcc}
};