# WarpCopy

**WarpCopy** is an ultra-fast file and folder mirroring tool for Windows. It intelligently uses multi-threaded, size-aware copying strategies based on file size thresholds, balancing between:

- Small file batch copying (Robocopy-style)
- Large file block copying (FastCopy-style)
- O(1) resume support after interruption
- Maximum thread usage based on logical CPU cores
- Fully in-memory operation after launch

## Features
- Written in pure C for maximum performance
- Smart work queue and thread pool
- Fault-tolerant resume support
- Minimal dependencies

## Usage

```bash
WarpCopy.exe -d D -U MyUsername -O "E:\Backup\MyUser"