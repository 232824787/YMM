//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSMutableArray, NSString;

@interface YMMAppStructureFilterEditViewController : UIViewController
{
    NSString *_pageName;
    NSString *_elementId;
    NSArray *_eventTypes;
    NSArray *_filters;
    NSMutableArray *_filterItemViewArray;
}

@property(retain, nonatomic) NSMutableArray *filterItemViewArray; // @synthesize filterItemViewArray=_filterItemViewArray;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *eventTypes; // @synthesize eventTypes=_eventTypes;
@property(copy, nonatomic) NSString *elementId; // @synthesize elementId=_elementId;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)addFilterItemView:(id)arg1;
- (void)setupFilters;
- (void)setupRightBarButton;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

