//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EaseMessageModel, NSArray, NSError;

@protocol YMMIMSinkProtocol <NSObject>
- (void)userLoginLongConnectDismiss;
- (void)userLoginLongConnectSuccess;
- (void)userAccountDidLoginFromOtherDevice;
- (void)didMessageAttachmentsStatusChanged:(EaseMessageModel *)arg1 error:(NSError *)arg2;
- (void)didMessageStatusChanged:(EaseMessageModel *)arg1 error:(NSError *)arg2;
- (void)didReceiveHasReadAcks:(NSArray *)arg1;
- (void)didReceiveHasDeliveredAcks:(NSArray *)arg1;
- (void)didReceiveCmdMessages:(NSArray *)arg1;
- (void)didReceiveMessages:(NSArray *)arg1;
@end

