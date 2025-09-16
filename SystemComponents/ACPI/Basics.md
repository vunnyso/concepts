<h1 style="text-align:center;"> ACPI Basics</p>

## What is ACPI?

- ACPI (Advanced Configuration and Power Interface) is an industry standard for power management and hardware configuration in computers.
- ACPI was introduced by Intel, Microsoft, and Toshiba in 1996 and is widely used in modern operating systems like Windows, Linux, and macOS.

## Key Features of ACPI:

1. **Power Management:** Enables features like sleep modes, hibernation, and CPU power states to save energy.
2. **Device Management:** Helps the OS detect and control hardware components like fans, batteries, and processors dynamically.
3. **Thermal Management:** Monitors temperature sensors and adjusts cooling mechanisms accordingly.
4. **Plug and Play Support:** Assists in detecting and configuring new hardware automatically. <br>
   Wake Events: Allows systems to wake up from sleep based on events like keyboard input or network activity.

## Tables

| Table | Description                           |
| :---- | :------------------------------------ |
| NHLT  | Non-HDAudio Link Table                |
| WSMT  | Windows SMM Security Mitigation Table |
| BGRT  | Boot Graphics Record Table            |
| FACS  | Firmware ACPI Control Structure       |
| HPET  | High Precision Event Timer            |
| DBGP  | Debug Port ACPI Table                 |

## Useful Commands:

1. List of ACPI tables

   ```
   # ls /sys/firmware/acpi/tables
   ```

2. Extract lists of tables

   ```
   # acpixtract -l acpidump.txt  -s
   ```

3. Dump all acpi tables

   ```
   # acpidump
   ```

4. Dump specific table

   ```
   # cat /sys/firmware/acpi/tables/DSDT > dsdt.dat
   ```

5. Decompile the ACPI Dump
   ```
   # iasl -d dsdt.dat
   ```
