static const DWORD cs_large_tbo_load_code_dxbc[] =
{
    0x43425844, 0x374e803f, 0x0be23e09, 0x928334de, 0xec48b16b, 0x00000001, 0x00000118, 0x00000003,
    0x0000002c, 0x0000003c, 0x0000004c, 0x4e475349, 0x00000008, 0x00000000, 0x00000008, 0x4e47534f,
    0x00000008, 0x00000000, 0x00000008, 0x58454853, 0x000000c4, 0x00050050, 0x00000031, 0x0100086a,
    0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x04000858, 0x00107000, 0x00000000, 0x00004444,
    0x0400009e, 0x0011e000, 0x00000001, 0x00000008, 0x02000068, 0x00000001, 0x0400009b, 0x00000001,
    0x00000001, 0x00000001, 0x87000079, 0x80000042, 0x00111103, 0x00100012, 0x00000000, 0x00107e46,
    0x00000000, 0x8a00002d, 0x80000042, 0x00111103, 0x00100022, 0x00000000, 0x00208006, 0x00000000,
    0x00000000, 0x00107e16, 0x00000000, 0x0a0000a8, 0x0011e032, 0x00000001, 0x0020802a, 0x00000000,
    0x00000000, 0x00004001, 0x00000000, 0x00100046, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE cs_large_tbo_load_dxbc = { cs_large_tbo_load_code_dxbc, sizeof(cs_large_tbo_load_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
