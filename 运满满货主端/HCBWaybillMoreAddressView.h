//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HCBWaybillMoreAddressCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AMapNaviLocation, NSMutableArray, NSString, UIButton, UITableView;

@interface HCBWaybillMoreAddressView : UIView <UITableViewDelegate, UITableViewDataSource, HCBWaybillMoreAddressCellDelegate>
{
    float _lastHeight;
    float _defalutHeight;
    id <HCBWaybillMoreAddressViewDelegate> _delegate;
    NSMutableArray *_addressArr;
    NSString *_orderIdStr;
    AMapNaviLocation *_currentLocation;
    UITableView *_tableView;
    UIButton *_closeBtn;
}

@property(nonatomic) float defalutHeight; // @synthesize defalutHeight=_defalutHeight;
@property(nonatomic) float lastHeight; // @synthesize lastHeight=_lastHeight;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AMapNaviLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(copy, nonatomic) NSString *orderIdStr; // @synthesize orderIdStr=_orderIdStr;
@property(retain, nonatomic) NSMutableArray *addressArr; // @synthesize addressArr=_addressArr;
@property(nonatomic) __weak id <HCBWaybillMoreAddressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreAddressCell:(id)arg1 model:(id)arg2;
- (void)changeFramWithScroll:(id)arg1 didEndDragging:(_Bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setupSubviews;
- (void)closeView;
- (void)closeBtnClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

