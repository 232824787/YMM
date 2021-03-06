//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage_Builder.h"

@class AuthResponse;

@interface AuthResponse_Builder : PBGeneratedMessage_Builder
{
    AuthResponse *result;
}

@property(retain) AuthResponse *result; // @synthesize result;
- (id)clearAesSessionKey;
- (id)setAesSessionKey:(id)arg1;
- (id)aesSessionKey;
- (_Bool)hasAesSessionKey;
- (id)clearBaseResponse;
- (id)mergeBaseResponse:(id)arg1;
- (id)setBaseResponseBuilder:(id)arg1;
- (id)setBaseResponse:(id)arg1;
- (id)baseResponse;
- (_Bool)hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;
- (void)dealloc;

@end

