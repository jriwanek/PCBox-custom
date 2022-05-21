static int opPAND_xmm_a16(uint32_t fetchdat)
{
        SSE_REG src;

        fetch_ea_16(fetchdat);
        SSE_GETSRC();

        XMM[cpu_reg].q[0] &= src.q[0];
        XMM[cpu_reg].q[1] &= src.q[1];
        return 0;
}

static int opPAND_xmm_a32(uint32_t fetchdat)
{
        SSE_REG src;

        fetch_ea_32(fetchdat);
        SSE_GETSRC();

        XMM[cpu_reg].q[0] &= src.q[0];
        XMM[cpu_reg].q[1] &= src.q[1];
        return 0;
}

static int opPANDN_xmm_a16(uint32_t fetchdat)
{
        SSE_REG src;

        fetch_ea_16(fetchdat);
        SSE_GETSRC();

        XMM[cpu_reg].q[0] = ~XMM[cpu_reg].q[0] & src.q[0];
        XMM[cpu_reg].q[1] = ~XMM[cpu_reg].q[1] & src.q[1];
        return 0;
}

static int opPANDN_xmm_a32(uint32_t fetchdat)
{
        SSE_REG src;

        fetch_ea_32(fetchdat);
        SSE_GETSRC();

        XMM[cpu_reg].q[0] = ~XMM[cpu_reg].q[0] & src.q[0];
        XMM[cpu_reg].q[1] = ~XMM[cpu_reg].q[1] & src.q[1];
        return 0;
}