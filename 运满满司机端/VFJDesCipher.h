//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFJBlockCipher.h"

@interface VFJDesCipher : VFJBlockCipher
{
    int encryptKeys[32];
    int decryptKeys[32];
    int tempInts[2];
}

- (void)decrypt:(id)arg1 cipherOff:(int)arg2 clearData:(id)arg3 clearOff:(int)arg4;
- (void)encrypt:(id)arg1 clearOff:(int)arg2 cipherData:(id)arg3 cipherOff:(int)arg4;
- (void)setKey:(id)arg1;
- (id)initWithKeyData:(id)arg1;
- (id)initWithKeyStr:(id)arg1;
- (void)cookey:(int *)arg1 KnL:(int *)arg2;
- (void)desKey:(char *)arg1 encrypting:(_Bool)arg2 Knl:(int *)arg3;
- (int)countOnes:(long long)arg1;

@end

