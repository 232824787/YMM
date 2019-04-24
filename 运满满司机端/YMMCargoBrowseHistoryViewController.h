//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCargoBaseViewController.h"

@class UISegmentedControl, UIViewController, YMMBaseViewController, YMMCargoHistoryViewController;

@interface YMMCargoBrowseHistoryViewController : YMMCargoBaseViewController
{
    long long _YMMHistoryItem_Default;
    UISegmentedControl *_segmentedControl;
    YMMBaseViewController *_quoteVC;
    YMMCargoHistoryViewController *_callVC;
    YMMCargoHistoryViewController *_browseVC;
    UIViewController *_currentVC;
}

@property(retain, nonatomic) UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) YMMCargoHistoryViewController *browseVC; // @synthesize browseVC=_browseVC;
@property(retain, nonatomic) YMMCargoHistoryViewController *callVC; // @synthesize callVC=_callVC;
@property(retain, nonatomic) YMMBaseViewController *quoteVC; // @synthesize quoteVC=_quoteVC;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) long long YMMHistoryItem_Default; // @synthesize YMMHistoryItem_Default=_YMMHistoryItem_Default;
- (void).cxx_destruct;
- (id)getHistoryCtrl;
- (void)fromController:(id)arg1 newController:(id)arg2;
- (void)switchDataSource:(id)arg1;
- (void)loadControls;
- (id)segmentItems;
- (void)pushedOrderDetail:(id)arg1;
- (void)reloadSegmentTitle:(id)arg1;
- (void)dealloc;
- (id)ymm_pageName;
- (void)didReceiveMemoryWarning;
- (void)ymm_doBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

