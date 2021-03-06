//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBAppUpdateTipsModel;

@interface HCBAppUpdateService : NSObject
{
    _Bool _didUpdateAlertViewShown;
    HCBAppUpdateTipsModel *_tipsModel;
    id <HCBAppUpdateServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <HCBAppUpdateServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didUpdateAlertViewShown; // @synthesize didUpdateAlertViewShown=_didUpdateAlertViewShown;
@property(retain, nonatomic) HCBAppUpdateTipsModel *tipsModel; // @synthesize tipsModel=_tipsModel;
- (void).cxx_destruct;
- (void)uploadClickTrackWithRequired:(_Bool)arg1 confirm:(_Bool)arg2;
- (void)uploadViewTrackWithRequired:(_Bool)arg1;
- (void)gotoiTunesUpdate;
- (void)showUpdateAlertView;
- (void)handleUpdateCheckResult;
- (void)cleanRequestTimeFlag;
- (void)flagRequestTime;
- (_Bool)checkNeedRequestFromLastTime;
- (id)judgeIfNeedShowRequiredUpdateAlertViewWithCurrentModel:(id)arg1;
- (void)checkIfAppNeedUpdateWithDid:(long long)arg1 Uid:(long long)arg2 Lat:(double)arg3 Lng:(double)arg4 Appkey:(id)arg5;
- (id)init;

@end

