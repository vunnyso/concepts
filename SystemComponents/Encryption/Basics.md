<h1 style="text-align:center;"> Encryption Basics</p>

## Types of Encryption
Basically of two types of encryption:

| Type    | Description | Usage |
| :------- | :------ |:------ |
| Symmetric encryption   | Single key for both encryption and decryption   | Bulk data protection, local file storage, database encryption, and private network communications |
| Asymmetric encryption  | Use pair of keys — a public key to encrypt information and a private key to decrypt data  | Securing internet communications, email privacy, and enabling digital signatures for authentication|

## Symmetric Encryption
* In symmetric encryption, the plaintext, which is the original data, is transformed into ciphertext, which is the encrypted form, using the secret key. 
* The same key is applied in reverse to decrypt the ciphertext and recover the original data.

## Asymmetric Encryption
* Asymmetric encryption, also known as Public Key Cryptography
* When you send an secure email via an encrypted connection (such as using the Secure Sockets Layer/Transport Layer Security, SSL/TLS), the recipient’s public key encrypts the email content, and only the recipient, with their private key, can decrypt and read the message. 

## Symmetric Encryption Methods

1. **Block ciphers** <br>
 A block cipher divides data into fixed-size blocks for encryption, making them suitable for structured data like files. They’re predictable but may have vulnerabilities if not used correctly. AES is a well-known block cipher.

 2. **Stream ciphers** <br>
  A stream cipher encrypt data bit by bit and are ideal for real-time streams like voice or video. They are efficient but require synchronization between both the sender and receiver to avoid data errors.

## Types of Symmetric Encryption Algorithms

* **Data Encryption Standard (DES)** <br>
  * Its block cipher that was widely used for encrypting data in the 1970s and 1980s. It was developed by IBM and was adopted as a standard by the National Institute of Standards and Technology (NIST) in 1977.
  * DES is no longer considered secure for encrypting sensitive data, and it has been replaced by more secure algorithms such as AES.

* **Triple Data Encryption Standard (3DES)** <br>
  * It originated as an enhancement to the original Data Encryption Standard (DES) in the late 1990s to address its vulnerability to brute force attacks. 3DES applies the DES algorithm three times to each data block, offering enhanced security through multiple rounds of encryption.

* **Advanced Encryption Standard (AES)** <br>
  * Arrived in 2001 as a replacement for the aging DES standard.
  * AES encryption offers different security levels based on encryption key length, with 128-bit, 192-bit, and 256-bit keys. The 128-bit key is suitable for most applications. The 192-bit and 256-bit keys offer even higher security, making them ideal for more sensitive and critical data protection.

* **Blowfish** <br>
  * Blowfish is a block cipher symmetric encryption method designed by Bruce Schneier in 1993. It gained popularity for its simplicity, speed, and security features. Blowfish is suited for applications requiring fast encryption and decryption, such as securing data on disk drives or network communications.

* **Twofish** <br>
  * Twofish is the successor of Blowfish. It’s a symmetric-key block cipher algorithm developed in the late 1990s and is known for its security features. It supports key sizes of 128, 192, and 256 bits, providing a range of security options. Its 128-bit block size is larger than Blowfish’s, offering enhanced security.

* **Format-Preserving Encryption (FPE)** <br>
  * Format-preserving encryption (FPE) is a technique that encrypts data while preserving its original format, such as credit card numbers, dates, or social security numbers. FPE is used in industries like finance and healthcare to maintain data format integrity during encryption, making it compatible with existing systems and processes.

## Types of Asymmetric Encryption Algorithms
* **Rivest Shamir Adleman (RSA)** <br>
  * Its an asymmetric encryption algorithm created by Ron Rivest, Adi Shamir, and Leonard Adleman in 1977. It’s integral to SSL/TLS protocols, ensuring secure data transmission on the internet.

* **Elliptic Curve Cryptography (ECC)** <br>
  * Its an asymmetric encryption method that differs from other data encryption techniques because it doesn’t rely on big number problems. Instead, it uses the math of curves.
  * ECC offers significant advantages, particularly in resource-constrained environments. Unlike traditional methods like RSA encryption, it provides strong security with much shorter key lengths.
  * Ed25519 is an elliptic curve digital signature algorithm

* **Digital Signature Algorithm (DSA)** <br>
  * DSA creates digital signatures (known as digital seals) with private keys for message authenticity. Recipients use public keys to verify these signatures, ensuring the message’s integrity and source. Unlike RSA encryption, which focuses on confidentiality, DSA concentrates on the integrity and authenticity of data.


### References:
https://medium.com/@munteanu210/your-one-stop-guide-to-encryption-algorithms-ffa77f842d52