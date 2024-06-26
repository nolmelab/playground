#include <doctest/doctest.h>
#include <sodium.h>
#include <string_view>
#include <stdlib.h>

TEST_CASE("libsodium")
{
  SUBCASE("reading")
  {
    // https://doc.libsodium.org/
    // the style of document is different from others: 
    // - it shows a simple usage supposing basic understanding of encryption
    // - code to show the usage is not detailed
    // - hence it requires some to get acquainted

    // libsodium is also called NaCl. hence it means salt.

    SUBCASE("quickstart")
    {
      // https://doc.libsodium.org/quickstart

      auto rc = sodium_init();

      SUBCASE("difference between secrete key and password")
      {
        // secrete key is a stream of bits generated by algorithms
      }

      SUBCASE("checking funtion call")
      {
        // xchacha20 ? aes-gcm?
      }

      SUBCASE("encrypt memory")
      {
        // crypto_secretbox_keygen();
        // randombytes_buf();
        // crypto_secretbox_easy();
        // crypto_secretbox_open_easy();
      }

      SUBCASE("encryt file with a password")
      {
        // crypto_pwhash();
        // crypto_secretstream_*
      }

      SUBCASE("key exchange")
      {
        // crypto_kx_keypair();
        // crypto_kx_client_session_keys();
        // crypto_kx_server_session_keys();
      }
    }

    SUBCASE("helpers")
    {
      // side-channel attacks: attacks using other information outside crypto algorithms
      // like timing of memcmp.

      // sodium_memcmp()
      // sodium_bin2hex()
      // sodium_hex2bin()
      // sodium_bin2base64()
      // sodium_base642bin()
      // 
    }
  }

  SUBCASE("encryption")
  {
    // https://doc.libsodium.org/secret-key_cryptography/secretbox
    // 

    #define IN_MESSAGE ((const unsigned char *) "test")
    #define MESSAGE_LEN 4
    #define CIPHERTEXT_LEN (crypto_secretbox_MACBYTES + MESSAGE_LEN)

    unsigned char key[crypto_secretbox_KEYBYTES];
    unsigned char nonce[crypto_secretbox_NONCEBYTES];
    unsigned char ciphertext[CIPHERTEXT_LEN];

    crypto_secretbox_keygen(key);
    randombytes_buf(nonce, sizeof nonce);
    crypto_secretbox_easy(ciphertext, IN_MESSAGE, MESSAGE_LEN, nonce, key);

    unsigned char decrypted[MESSAGE_LEN];
    if (crypto_secretbox_open_easy(decrypted, ciphertext, CIPHERTEXT_LEN, nonce, key) != 0) {
      /* message forged! */
    }

    // CHECK(
  }

  SUBCASE("key exchange")
  {

  }

  SUBCASE("hashing")
  {

  }


  SUBCASE("study the other usage")
  {
    // nonce generation from initialization vector
    // key exchange
  }

  SUBCASE("chacha20")
  {
    // https://github.com/vstakhov/libsodium-chacha20

  }

  SUBCASE("glossary")
  {
    // AEAD: https://en.wikipedia.org/wiki/Authenticated_encryption
    // - authentication and encryption with associated data

  }

  SUBCASE("reading tests code")
  {
    // https://github.com/jedisct1/libsodium/tree/master/test/
    // 


  }
}