//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKYSecServer : NSObject
{
}

+ (id)encryptRSA:(id)arg1 withKeyId:(id)arg2;
+ (struct __SecKey *)getPublicKeyWithId:(id)arg1;
+ (_Bool)addPublicKey:(id)arg1 withId:(id)arg2;
+ (id)stripServerPublicKey:(id)arg1;
+ (id)wrapData:(id)arg1 srvPubKey:(id)arg2;

@end

