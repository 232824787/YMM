//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YFError;

@protocol YFClientDelegate <NSObject>

@optional
- (void)userAccountDidForcedToLogout:(YFError *)arg1;
- (void)userDidForbidByServer;
- (void)userAccountDidRemoveFromServer;
- (void)userAccountDidLoginFromOtherDevice;
- (void)autoLoginDidCompleteWithError:(YFError *)arg1;
- (void)connectionStateDidChange:(int)arg1;
@end

