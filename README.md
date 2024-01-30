# ml-kem
Module-Lattice-based Key-Encapsulation Mechanism Standard

## Implementation
I am following the FIPS 203 draft published on August 14, 2023 

[PDF available here](https://doi.org/10.6028/NIST.FIPS.203.ipd)

## Todo

### Keygen
Using https://github.com/libtom/libtomcrypt for implementation of SHAKE128 and SHAKE256.

- [x] SHAKE128/XOF
- [x] SHAKE256/PRF
- [ ] Bytes to Bits
- [ ] Bits to Bytes
- [ ] Bit rev
- [ ] NTT
- [ ] SampleNTT
- [ ] SamplePolyCBD
- [ ] Byte Encode
- [ ]K-PKE Keygen
