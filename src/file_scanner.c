/*
 * file_scanner.c
 * Walks the source directory, splits files by size, and queues them for copying.
 */

#include "file_scanner.h"
#include "config.h"

// scan_directory(path):
//   For each entry in directory at 'path':
//     a. If entry is a file:
//         i. Get file size and attributes
//         ii. If file is already in resume index as complete, skip
//         iii. If file size >= LARGE_FILE_THRESHOLD:
//              - Add to large file work queue
//         iv. Else:
//              - Add to small file work queue
//     b. If entry is a directory (and not . or ..):
//         i. Recursively call scan_directory(entry_path)
// Optionally, batch small files for more efficient copying
// Return total files and bytes discovered
