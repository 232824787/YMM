//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseViewController.h"

@class NSArray, SHTransportOrderIndexViewController, UISegmentedControl, UIViewController, YMMForeignOrderIndexViewController;

@interface YMMTransportManagerViewController : YMMBaseViewController
{
    long long _vcIndex;
    NSArray *_orderTypeArr;
    UIViewController *_currentVC;
    UISegmentedControl *_segmentControl;
    SHTransportOrderIndexViewController *_ymmOrderVC;
    YMMForeignOrderIndexViewController *_foreignOrderVC;
}

@property(retain, nonatomic) YMMForeignOrderIndexViewController *foreignOrderVC; // @synthesize foreignOrderVC=_foreignOrderVC;
@property(retain, nonatomic) SHTransportOrderIndexViewController *ymmOrderVC; // @synthesize ymmOrderVC=_ymmOrderVC;
@property(retain, nonatomic) UISegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSArray *orderTypeArr; // @synthesize orderTypeArr=_orderTypeArr;
- (void).cxx_destruct;
- (void)setYmm_pageParams:(id)arg1;
- (id)ymm_pageParams;
- (id)ymm_pageName;
- (void)segmentedValueChanged:(id)arg1;
- (void)replaceController:(id)arg1 newController:(id)arg2 withAnimate:(_Bool)arg3;
- (void)setNavRightBar;
- (void)addOrderChildViewController;
- (void)initSegmentData;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

