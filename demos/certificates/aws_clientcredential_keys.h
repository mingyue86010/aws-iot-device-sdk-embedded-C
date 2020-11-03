/*
 * FreeRTOS V202007.00
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAOF69FlEITNxKH+YbfRXOjIhza/TMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDExMDIyMzMx\n"\
"MzNaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDCppRQu/NajnVzhisa\n"\
"ljXqlwViihRy9KSBQRSkFMYQMSQ8JvCz4CZHeNYaGFk8dBh4FxMZO3l65G0lYQsV\n"\
"QM4fcKHwJMFiMFXJ0RYoJtQzezXPzP8EweqIYwUVH0SEHjSlOgD8cAoM9wGuRLYR\n"\
"fNOJ9DB4T6YIsb7yQx+UrWtmfP/J8+IQhIRO9JxlDcIQ1HytfzsjQ+Jt5gsZjIvT\n"\
"4K2VstttreWtLPAaTlZn06SeYkHOofK42N/+xmeldqcW7Fm/vfLJ+ItBGcI++a73\n"\
"HGTMF333W+KrVszihhytsaTq4F+be3YV11tEN+PHvoPja6IKJt2iiiJg94CVw5EI\n"\
"JPKdAgMBAAGjYDBeMB8GA1UdIwQYMBaAFAd4foGGFa5RsBaJCKp8iFciLqrGMB0G\n"\
"A1UdDgQWBBQgp+Jzs6+aC2JDmE6XVNaL5xHfLTAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAjothvKqoR5OEUGxsQa/Sjisd\n"\
"RbZkislJaSjICCDVTM6MlsdvYSthDNQjv2o+8kun2qJDF1UjDM03uemN2YylILPc\n"\
"873unnWQ6DLHLYRZe4n5nyQi+NMGGxIjdTX/3vnk16p73UsitGi2k9DtSeAmO3dh\n"\
"L3J3+wINzbq591K1kPGOZRwfIaWnVbjX5TEiYWN+qmhu4FvJjTfSrZ2rlSX2+ynJ\n"\
"5vkR3gSsA2+uMAL7gRQ2T0IDgkIxQ00NPxpC3VjDftl2+WpMV0xWeVzBVB7Jx3Lk\n"\
"t20gkM586gDLgt+F6u0MqzEVeAaKDeJhzcap4mWfsyzUFffcoUM4pKKl4qfKXQ==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate
 * Authority) of the client certificate is used by the server for routing the
 * device's initial request. (The device client certificate must always be
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAwqaUULvzWo51c4YrGpY16pcFYooUcvSkgUEUpBTGEDEkPCbw\n"\
"s+AmR3jWGhhZPHQYeBcTGTt5euRtJWELFUDOH3Ch8CTBYjBVydEWKCbUM3s1z8z/\n"\
"BMHqiGMFFR9EhB40pToA/HAKDPcBrkS2EXzTifQweE+mCLG+8kMflK1rZnz/yfPi\n"\
"EISETvScZQ3CENR8rX87I0PibeYLGYyL0+CtlbLbba3lrSzwGk5WZ9OknmJBzqHy\n"\
"uNjf/sZnpXanFuxZv73yyfiLQRnCPvmu9xxkzBd991viq1bM4oYcrbGk6uBfm3t2\n"\
"FddbRDfjx76D42uiCibdoooiYPeAlcORCCTynQIDAQABAoIBAFf31HuQFXDNhQMK\n"\
"lZxUWlWEnuhjos45BcdsVBm7Ua+rpcaRiqKgIGyYjZoJevq5NP3A3969ZC9H4JPO\n"\
"AaY/PWg0DNtsoQDw+zRUDAFlWu1RN4aMDIxn3sh4h6l+EgbrZ7tsNVnggIpPbzEE\n"\
"2IuasDdeZjFZPZ4cRkFSWIlmvmz4MvsY8PBiYCcYGKr+TvW0NpvwodTxp4W2LnbT\n"\
"JQAsRxMCLB8rETTJ8YfTI7Pl2N9+6Kp9zaDRqTCLQFSkBe558cJihLcA5Ef27/hw\n"\
"8nZpCdoekQuU6NF58EIkhewKf7TLUHtIHvWWhwuFxlr+8rr7v3IEbD3j3jZmvMHC\n"\
"AuZZETkCgYEA5losbHR+MREMnMDIhv+NiR7TvxRPUICjc/UkxZMohZJcM+EjUjsO\n"\
"QHC7IzhNy+V4JMVt79aezFVo19QQ/kZxUERt6nMJU3laf0KsA8KSwbyuFHA+ZYsA\n"\
"7UzZjSSi/4m9b/wj3z9woo8C08SaMPeLoxH530UMQ7YtoqFR1UqB8w8CgYEA2FLK\n"\
"NSuQFDOVeTo9/OvgLcK1qyJNv58KO+TT9OYBKjbyMPM27AZGZCNw6DQxtIMessvq\n"\
"3q4G4/ucuFs9JsvQcvINm3RKcknjh6dvRDdTO7FIFywZxMbV0K7I9lowaMcwVuxQ\n"\
"o0lYdFaShBYcjBbhYA3WVS0+ScGml4qgDmcvj5MCgYAJoI0ovzmi7VZ8mqYG1llg\n"\
"+LPa0Yt7DtVF/GHcDAlug65s0KT8Q9GVqeB4WVsPAXki+Ele87ZRTeSC2K8ZIXKM\n"\
"6z84xDQIlBLPLMcppREjHbKc0hAZiFSyljqlZnmVenk7W+tX4jvf32A734SeNUpV\n"\
"t2OdDDK2BcAkgt97rZB+ywKBgQC/fQHL8UT37PWquxi2M6JdP5eK5rHGJyVrAVNy\n"\
"3Ms5MCxRkmoSojdbW1gN5G3/aXYaNZIyDgDBfTAsrW9DUXWy2nubGWTxKGEF6vv+\n"\
"ea7vDy5OfNZOrugEc0QndoyVo4Ux3LxA3qMzUJMf42bfxz03xufsvEEADzDFwouO\n"\
"VF7wiwKBgQCgghsC9ABW5Jk01RKCvDxSAbysghlQWU7EsFVPDqk3aHszJzO1b+Ah\n"\
"0cS32SWwrCvzGh0vElF/dFqevRW3UFGaiG/jwBZCYV1XD789gTfQ3pGSU2JZhwTc\n"\
"dF30SkLgkgxtsPK2W5E1SZ0ag+cdpyA9XTeQLdYEltK1dZEdz6mbYw==\n"\
"-----END RSA PRIVATE KEY-----\n"

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
