# APEX CPU Pipeline Simulator — Part 2

This project is an in-order 5-stage CPU simulator modeled after the APEX architecture. It simulates instruction-level execution using classic CPU pipeline stages, focusing on **hazard detection**, **stalling**, and **correct instruction ordering** — without employing forwarding or buffering.

---

## Rushalle Diya Sureshbabu Poornima

## Overview & Objectives

This is Part 2 of the APEX Pipeline Simulator project. The main objectives are:

- Extend support to **all 13 instructions**
- Implement **scoreboarding** to detect **data hazards**
- Simulate correct **stalling behavior**
- Validate against **test cases** with dependencies
- Achieve **cycle-by-cycle trace output** in `output.txt`

---

## Pipeline Stages Implemented

1. **Fetch**
2. **Decode/Register Fetch**
3. **Execute**
4. **Memory**
5. **Writeback**

---

## Supported Instructions

| Instruction | Type       | Description                     |
|-------------|------------|---------------------------------|
| `MOVC`      | Immediate  | Move constant to register       |
| `ADD`       | Arithmetic | Add 2 registers                 |
| `SUB`       | Arithmetic | Subtract                        |
| `MUL`       | Arithmetic | Multiply                        |
| `DIV`       | Arithmetic | Divide                          |
| `AND`       | Logical    | Bitwise AND                     |
| `OR`        | Logical    | Bitwise OR                      |
| `EXOR`      | Logical    | Bitwise XOR                     |
| `LOAD`      | Memory     | Load from memory                |
| `STORE`     | Memory     | Store to memory                 |
| `BZ`        | Branch     | Branch if Zero Flag is set      |
| `BNZ`       | Branch     | Branch if Zero Flag not set     |
| `HALT`      | Control    | Stop simulation                 |

---

## File Descriptions

| File               | Purpose |
|--------------------|---------|
| `apex_cpu.c`       | Main pipeline logic & stage functions |
| `apex_cpu.h`       | Structures & function declarations |
| `file_parser.c`    | Parses `.asm` files into instruction objects |
| `apex_macros.h`    | Macros and opcode definitions |
| `main.c`           | Entry point, handles CLI and CPU launch |
| `Makefile`         | Build automation |
| `input.asm`        | Sample input file |
| `output.txt`       | Output trace of the pipeline |

---

## Build Instructions

Navigate to the simulator directory:

```bash
cd apex_cpu_pipeline_simulator/apex_cpu_pipeline_simulator
make clean
make
