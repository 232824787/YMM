//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBLoanBaseViewController.h"

#import "UITableViewDataSource.h"

@class NSDictionary, NSString, UIButton, UILabel, UITableView;

@interface HCBLoanOMModifyBankCardPhoneViewController : HCBLoanBaseViewController <UITableViewDataSource>
{
    NSDictionary *_bankCard;
    CDUnknownBlockType _didSuccess;
    UITableView *_tableView;
    UILabel *_footerLabel;
    UIButton *_footerButton;
    NSString *_inputPhone;
}

@property(copy, nonatomic) NSString *inputPhone; // @synthesize inputPhone=_inputPhone;
@property(nonatomic) __weak UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(nonatomic) __weak UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType didSuccess; // @synthesize didSuccess=_didSuccess;
@property(copy, nonatomic) NSDictionary *bankCard; // @synthesize bankCard=_bankCard;
- (void).cxx_destruct;
- (void)p_goToValidatePhoneWithInstOrderInfo:(id)arg1;
- (void)p_validateBankPhone;
- (_Bool)_checkInputValue;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_confirmButtonDidPressed:(id)arg1;
- (void)_configPhoneCell:(id)arg1;
- (void)_configBankCardCell:(id)arg1;
- (void)_setupFooterViews;
- (void)_setupTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

