//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCBLoanAddressBookReader, HCBLoanCashLoanProduct, HCBLoanCashLoanUserStatus, NSArray, NSDictionary, NSString, UITableView;

@interface HCBLoanCLOldUserLoanConfirmViewController : HCBLoanBaseViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    _Bool _needCompleteData;
    _Bool _allowProtocol;
    NSString *_loanMoney;
    NSString *_useScene;
    HCBLoanCashLoanProduct *_product;
    UITableView *_tableView;
    NSString *_lastName;
    NSString *_lastIDCard;
    NSString *_pinCode;
    NSDictionary *_userIncompleteInfo;
    NSArray *_bankList;
    long long _selectCardIdx;
    HCBLoanCashLoanUserStatus *_userStatus;
    NSString *_contactStr;
    NSString *_contactCountStr;
    HCBLoanAddressBookReader *_addressBookReader;
}

@property(retain, nonatomic) HCBLoanAddressBookReader *addressBookReader; // @synthesize addressBookReader=_addressBookReader;
@property(copy, nonatomic) NSString *contactCountStr; // @synthesize contactCountStr=_contactCountStr;
@property(copy, nonatomic) NSString *contactStr; // @synthesize contactStr=_contactStr;
@property(retain, nonatomic) HCBLoanCashLoanUserStatus *userStatus; // @synthesize userStatus=_userStatus;
@property(nonatomic) long long selectCardIdx; // @synthesize selectCardIdx=_selectCardIdx;
@property(copy, nonatomic) NSArray *bankList; // @synthesize bankList=_bankList;
@property(retain, nonatomic) NSDictionary *userIncompleteInfo; // @synthesize userIncompleteInfo=_userIncompleteInfo;
@property(copy, nonatomic) NSString *pinCode; // @synthesize pinCode=_pinCode;
@property(copy, nonatomic) NSString *lastIDCard; // @synthesize lastIDCard=_lastIDCard;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(nonatomic) _Bool allowProtocol; // @synthesize allowProtocol=_allowProtocol;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool needCompleteData; // @synthesize needCompleteData=_needCompleteData;
@property(retain, nonatomic) HCBLoanCashLoanProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) NSString *useScene; // @synthesize useScene=_useScene;
@property(copy, nonatomic) NSString *loanMoney; // @synthesize loanMoney=_loanMoney;
- (void).cxx_destruct;
- (void)didFailAddressBookSyncWithError:(struct __CFError *)arg1;
- (void)didSyncAddressBook:(id)arg1 contactsDic:(id)arg2;
- (void)didFailAddressBookPermissionGrant;
- (void)didSucceedAddressBookPermissionGrant;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkLoanUserStatus;
- (void)submitShieldData;
- (void)checkReplenishInfor;
- (void)applyCashLoan;
- (void)queryUserIncompleteInfo;
- (void)queryPinCode;
- (void)toApplyStatusView;
- (void)addBankCardAction:(id)arg1;
- (void)submitAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)actionSheetButtonTitleWithData:(id)arg1;
- (void)startTimer;
- (id)addBankCardView;
- (id)footerView;
- (void)updateUI;
- (void)setupUI;
- (void)setupData;
- (void)clickBackButton:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

