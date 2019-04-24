//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSData;

@interface AuthResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse_:1;
    unsigned int hasAesSessionKey_:1;
    BaseResponse *baseResponse;
    NSData *aesSessionKey;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseDelimitedFromInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property(retain) NSData *aesSessionKey; // @synthesize aesSessionKey;
@property(retain) BaseResponse *baseResponse; // @synthesize baseResponse;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)dealloc;
- (void)setHasAesSessionKey:(_Bool)arg1;
- (_Bool)hasAesSessionKey;
- (void)setHasBaseResponse:(_Bool)arg1;
- (_Bool)hasBaseResponse;

@end

