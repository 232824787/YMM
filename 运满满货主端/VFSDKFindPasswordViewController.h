//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

#import "VFSDKQPBankCardMoreInfoCellDelegate.h"
#import "VFSDKQPUserAgreementViewControllerDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView;

@interface VFSDKFindPasswordViewController : VFSDKBaseViewController <VFSDKQPBankCardMoreInfoCellDelegate, VFSDKQPUserAgreementViewControllerDelegate>
{
    _Bool selectedAgreement;
    NSMutableArray *moreInfoArr;
    UIButton *markBtn;
    UIButton *nextBtn;
    NSString *ticket;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn;
@property(retain, nonatomic) UIButton *markBtn; // @synthesize markBtn;
@property(nonatomic) _Bool selectedAgreement; // @synthesize selectedAgreement;
@property(retain, nonatomic) NSMutableArray *moreInfoArr; // @synthesize moreInfoArr;
- (void).cxx_destruct;
- (void)saveInputInfo:(long long)arg1 withContent:(id)arg2;
- (void)userAgreed;
- (void)toVerifyMobilePage;
- (void)toVerifyMobile;
- (void)toUserAgreement;
- (void)markBtnTouch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)addTableFooter;
- (id)addTableHeader;
- (void)checkBankcard;
- (_Bool)checkValue;
- (void)setupAuthInfo;
- (void)setupMoreInfoArrary;
- (id)setupTableHeader;
- (void)setupTableView;
- (void)setupStyle;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

