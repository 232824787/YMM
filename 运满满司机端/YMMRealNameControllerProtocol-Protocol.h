//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMAuthControllerBaseProtocol.h"

@class NSString;

@protocol YMMRealNameControllerProtocol <YMMAuthControllerBaseProtocol>

@optional
- (void)idCardNumberRegisted:(NSString *)arg1;
- (void)realnameCommitSuccess:(NSString *)arg1;
- (void)commitInfoSuccess:(NSString *)arg1;
- (void)idNumberBeOccupied:(NSString *)arg1;
- (void)startLoading:(NSString *)arg1;
@end

