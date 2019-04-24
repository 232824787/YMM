//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMUserAuditProtocol.h"

@class NSString;

@protocol YMMUserAuditCommonProtocol <YMMUserAuditProtocol>
@property(copy, nonatomic) NSString *popupAuditMsg;
@property(nonatomic) long long certificateStatus;
@property(nonatomic) long long simpleAuthUser;
- (_Bool)isShipperSimpleAuthUser;
- (_Bool)authStatusWaiting;
- (_Bool)authStatusLicsUnPassed;
- (_Bool)authStatusUnPassed;
- (_Bool)authStatusUnCommited;
@end

