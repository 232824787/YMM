//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBNetworkSessionInfo;

@interface HCBNetworkLoginManager : NSObject
{
    id <HCBNetworkLoginManagerDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(nonatomic) __weak id <HCBNetworkLoginManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) HCBNetworkSessionInfo *session;
@property(readonly, nonatomic) _Bool isSessionExpired;
@property(readonly, nonatomic) _Bool canAutoLogin;
@property(readonly, nonatomic) _Bool isDoingLogin;
- (void)notifyAutoLoginCompleteWithContent:(id)arg1 error:(id)arg2;
- (void)autoLoginWithEndBlock:(CDUnknownBlockType)arg1;
- (void)refreshSessionChangeDate;

@end

