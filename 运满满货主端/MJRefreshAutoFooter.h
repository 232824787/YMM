//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshFooter.h"

@interface MJRefreshAutoFooter : MJRefreshFooter
{
    _Bool _automaticallyRefresh;
    double _triggerAutomaticallyRefreshPercent;
}

@property(nonatomic) double triggerAutomaticallyRefreshPercent; // @synthesize triggerAutomaticallyRefreshPercent=_triggerAutomaticallyRefreshPercent;
@property(nonatomic, getter=isAutomaticallyRefresh) _Bool automaticallyRefresh; // @synthesize automaticallyRefresh=_automaticallyRefresh;
- (void)setHidden:(_Bool)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)prepare;
@property(nonatomic) double appearencePercentTriggerAutoRefresh;
- (void)willMoveToSuperview:(id)arg1;

@end

