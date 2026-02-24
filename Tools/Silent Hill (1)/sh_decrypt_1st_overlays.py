import sys
import os


def xor_1st_overlay(data: bytearray):
    view = memoryview(data).cast("I")
    seed = 0

    for i in range(len(view)):
        # LCG (Linear Congruential Generator) step
        seed = (seed + 0x01309125) & 0xffffffff
        seed = (seed * 0x03a452f7) & 0xffffffff
        
        # XOR the 32-bit word with the generated seed
        view[i] ^= seed


def process_file(path: str):
    if not os.path.isfile(path):
        print(f"Not a file: {path}")
        return

    try:
        with open(path, "rb") as f:
            data = bytearray(f.read())

        if len(data) % 4 != 0:
            print(f"Error: {path} size ({len(data)} bytes) is not divisible by 4.")
            return

        # Apply the XOR logic in-place
        xor_1st_overlay(data)

        with open(path, "wb") as f:
            f.write(data)

        print(f"Successfully processed: {os.path.basename(path)}")
        
    except Exception as e:
        print(f"An error occurred while processing {path}: {e}")


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Silent Hill 1 Overlay Tool")
        print("--------------------------")
        print("Supports: B_KONAMI.BIN and BODYPROG.BIN (from 1ST/ folder)")
        print("Usage: Drag and drop files onto this script or run:")
        print(f"       python {os.path.basename(__file__)} <file1> <file2> ...")
        input("\nPress Enter to close...")
        sys.exit(0)

    for arg in sys.argv[1:]:
        process_file(arg)

    print("\nAll files processed.")
    input("Press Enter to close...")
