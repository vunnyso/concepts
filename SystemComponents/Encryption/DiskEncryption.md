<h1 style="text-align:center;"> Disk Encryption</p>

## Full Disk Encryption

Encrypts the entire disk or storage device, including the operating system and data.

**Tools:**

- BitLocker (Windows)
- FileVault (macOS)
- dm-crypt/LUKS (Linux)
- VeraCrypt (cross-platform)

### dm-crypt/LUKS

- Dm-crypt and LUKS are often mentioned together because they are complementary components used for disk encryption in Linux.
- Dm-crypt is a kernel-level disk encryption sub-system which a part of the Linux device mapper, and it can encrypt entire disks or partitions. Since it’s a part of the Linux kernel, this means that it offers highly efficient encryption while supporting various encryption algorithms and key sizes.

**LUKS (Linux Unified Key Setup)** <br>

- Its a standard for disk encryption and it is primarily designed to simplify the usage of dm-crypt.
- It provides a standardized on-disk format that ensures proper compatibility while simplifying the process of setting up and managing encrypted partitions.
- It also supports multiple passphrases, which allows easier key management and recovery.

In this process, when you configure the disk encryption you use tools like “cryptsetup” tool which will initialize LUKS on the partition and manage it.

### References:

https://jumpcloud.com/blog/comparing-encryption-tools-linux
