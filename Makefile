RUST_LIB_DIR = ./rustmath/target/release

all:
	cargo build --release --manifest-path=rustmath/Cargo.toml
	gcc -o calc calc.c math.c -L$(RUST_LIB_DIR) -lrustmath

run:
	@LD_LIBRARY_PATH=$(RUST_LIB_DIR) ./calc $(ARGS)
