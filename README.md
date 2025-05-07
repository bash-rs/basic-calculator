# basic-calculator
- Build a basic calculator in C.
- Migrate a part of the C code into Rust.

## To compile
`cargo build --release --manifest-path=rustmath/Cargo.toml`
`gcc -o calc calc.c -L./rustmath/target/release -lrustmath`
`export LD_LIBRARY_PATH=./rustmath/target/release:$LD_LIBRARY_PATH`

## To run
e.g. `./calc 2 + 3`

