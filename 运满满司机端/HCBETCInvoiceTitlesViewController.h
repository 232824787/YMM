//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface HCBETCInvoiceTitlesViewController : HCBETCInvoiceBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIView *_noticeView;
    UIView *_emptyView;
    UIView *_footerView;
    UIButton *_buttonAdd;
    NSMutableArray *_dataSource;
}

@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *buttonAdd; // @synthesize buttonAdd=_buttonAdd;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)actionAddTitle:(id)arg1;
- (void)editTitleWithLayout:(id)arg1;
- (void)deleteTitleWithLayout:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTitlesListData;
- (void)actionServiceTrack;
- (void)updateTableViewConstraints;
- (void)layoutConstraints;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

