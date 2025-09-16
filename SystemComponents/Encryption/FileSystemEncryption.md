<h1 style="text-align:center;"> File System Encryption</p>

## Filesystem Encryption

Filesystem encryption in Linux protects data by encrypting files and directories at the filesystem level, unlike full-disk encryption (LUKS) which operates at the block level.

### Native Linux Filesystem Encryption Methods

1. fscrypt (Modern & Lightweight)
   - Supported Filesystems: ext4, f2fs, UBIFS, partial XFS
   - Encryption Scope: Per-file/per-directory
   - Performance: Fast, kernel-integrated
   - Encryption Algorithms: AES-256-XTS, AES-256-GCM, Adiantum (for low-power devices)
   - **Examples:**

     ```
     # Setup
     fscrypt setup
     fscrypt setup /mnt

     # Encryption
     tune2fs -O encrypt "/dev/sda4"
     echo -n "test" | fscrypt encrypt /mnt/data/ --source=custom_passphrase

     # Lock and unlock
     fscrypt lock /mnt/data/
     echo -n "test" | fscrypt unlock /mnt/data/

     # Check status
     fscrypt status

     # Cleanup
     fscrypt metadata destroy /mnt
     ```

### Userland Encryption Tools

1. EncFS (Encapsulated Filesystem)
   - Encryption Scope: Per-directory, file-based
   - Performance: Medium
   - Use Case: Encrypting files in cloud storage (Google Drive, Dropbox)
   - **Examples:**

     ```
     encfs ~/encrypted ~/decrypted
     ```
