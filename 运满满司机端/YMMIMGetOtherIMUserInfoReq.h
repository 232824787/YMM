//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMBaseReq.h"

@class NSNumber, NSString;

@interface YMMIMGetOtherIMUserInfoReq : YMMIMBaseReq
{
    NSNumber *_userIdLong;
    NSString *_userIdEncrypted;
}

@property(copy, nonatomic) NSString *userIdEncrypted; // @synthesize userIdEncrypted=_userIdEncrypted;
@property(retain, nonatomic) NSNumber *userIdLong; // @synthesize userIdLong=_userIdLong;
- (void).cxx_destruct;

@end

