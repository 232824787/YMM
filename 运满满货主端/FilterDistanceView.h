//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UITableView, YMMCommonDataModel;

@interface FilterDistanceView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    NSArray *_dataSource;
    NSMutableArray *_currentFilterItems;
    _Bool _isSelectedAll;
    YMMCommonDataModel *_wholeDataModel;
    unsigned long long _menuItemType;
    CDUnknownBlockType _hideFilterViewCallback;
    id <FilterDistanceViewDelegate> _delegate;
    NSArray *_filterItems;
    UITableView *_tableView;
    UIButton *_confirmButton;
    UIButton *_clearButton;
}

@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(nonatomic) __weak id <FilterDistanceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType hideFilterViewCallback; // @synthesize hideFilterViewCallback=_hideFilterViewCallback;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
@property(retain, nonatomic) YMMCommonDataModel *wholeDataModel; // @synthesize wholeDataModel=_wholeDataModel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clearFilterItem;
- (void)filterWithDistanceAction:(id)arg1;
- (void)initDataSource;
- (void)hideAllView;
- (void)setNeedsUpdateConstraints;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

