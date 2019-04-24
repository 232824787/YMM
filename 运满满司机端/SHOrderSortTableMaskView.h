//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface SHOrderSortTableMaskView : YMMPopupMaskView <UITableViewDelegate, UITableViewDataSource>
{
    long long _selectIndex;
    id <SHOrderSortTableMaskViewDelegate> _delegate;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
}

+ (id)sortListOptions:(id)arg1;
+ (id)iniWithDataArray:(id)arg1;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SHOrderSortTableMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ymm_doDismiss;
- (void)ymm_maskDoDisappear;
- (void)ymm_maskDoAppear;
- (void)dealloc;
- (void)ymm_maskWillAppear;
- (void)ymm_loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

