//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBETCCreditZTRequestModel, NSArray, NSMutableArray, NSString, NSTimer, UIPickerView, UITableView;

@interface HCBETCCreditZTBankVerifyViewController : HCBETCBaseViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDataSource, UIPickerViewDelegate>
{
    HCBETCCreditZTRequestModel *_param;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSTimer *_timer;
    NSArray *_bankList;
    UIPickerView *_picker;
}

@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSArray *bankList; // @synthesize bankList=_bankList;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HCBETCCreditZTRequestModel *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (id)footerView;
- (id)headerView;
- (id)getModelWithType:(long long)arg1;
- (void)updateCountDown:(id)arg1;
- (_Bool)checkAuthCodeIfNeedSupplement;
- (_Bool)checkValueIfNeedSupplement;
- (void)actionSendVerifyCode;
- (void)actionConfirm:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)requestBankList;
- (void)setupView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

