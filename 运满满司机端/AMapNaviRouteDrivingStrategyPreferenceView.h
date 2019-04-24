//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface AMapNaviRouteDrivingStrategyPreferenceView : UIView
{
    UIView *_containerView;
    UIButton *_avoidCongestion;
    UIButton *_avoidCost;
    UIButton *_avoidHighway;
    UIButton *_prioritiseHighway;
}

@property(nonatomic) __weak UIButton *prioritiseHighway; // @synthesize prioritiseHighway=_prioritiseHighway;
@property(nonatomic) __weak UIButton *avoidHighway; // @synthesize avoidHighway=_avoidHighway;
@property(nonatomic) __weak UIButton *avoidCost; // @synthesize avoidCost=_avoidCost;
@property(nonatomic) __weak UIButton *avoidCongestion; // @synthesize avoidCongestion=_avoidCongestion;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)changePreferenceButtonsState:(id)arg1 selected:(_Bool)arg2;
- (void)prioritiseHighwayAction:(id)arg1;
- (void)avoidHighwayAction:(id)arg1;
- (void)avoidCostAction:(id)arg1;
- (void)avoidCongestionAction:(id)arg1;
- (long long)currentDrivingStrategy;
- (void)readLocalData;
- (void)setUp;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

