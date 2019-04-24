//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldPasswordKeyboardDelegate.h"
#import "VFSDKLotteryTicketSelectViewControllerDelegate.h"

@class NSArray, NSDictionary, NSIndexPath, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UITableView, UITextField, UIView, VFSDKPayWayModelV2, VFSDKUserInfoViewModel;

@interface VFSDKCashierViewController : VFSDKBaseViewController <UITextFieldPasswordKeyboardDelegate, UITableViewDataSource, UITableViewDelegate, VFSDKLotteryTicketSelectViewControllerDelegate>
{
    _Bool isGetPayWay;
    _Bool isGetUserInfo;
    _Bool _isOutsideJump;
    _Bool _havePayWayList;
    _Bool _canPayAllByCoupon;
    _Bool _isRecommend;
    _Bool _isDataLoad;
    _Bool _hasShowBaitiaoGuide;
    _Bool _viewDidAppeared;
    NSIndexPath *couponSelectIdx;
    NSString *couponPayMoney;
    NSString *otherPayMoney;
    NSArray *_couponArr;
    NSDictionary *_ext;
    NSDictionary *_frontTradeInfo;
    NSDictionary *_frontSubmitInfo;
    NSArray *_frontPayWayList;
    NSString *_extensionJson;
    UITableView *_tableView;
    UIView *_bottomButtonBar;
    UIButton *_payBtn;
    NSLayoutConstraint *_payBtnBarHeight;
    UIView *_tradeInfoView;
    NSLayoutConstraint *_tradeInfoViewHConstraint;
    UIImageView *_couponArrowIV;
    UILabel *_couponTitleLB;
    UIView *_couponDividerIV;
    UIButton *_showCouponBtn;
    UITextField *_passwordText;
    NSMutableArray *_payWayListArr;
    NSMutableArray *_foldPaywayList;
    NSDictionary *_tradeInfo;
    NSDictionary *_submitInfo;
    UILabel *_orderAmountLB;
    UILabel *_orderDescLB;
    NSString *_password;
    NSDictionary *_selectedCard;
    id <VFWalletSDKDelegate> _delegate;
    VFSDKPayWayModelV2 *_selectedPayWay;
    UIImageView *_couponIcon;
    UILabel *_couponDesc;
    UIView *_headerView;
    VFSDKUserInfoViewModel *_userInfoVM;
    NSString *_baitiaoBackupMoneyProductId;
}

@property(copy, nonatomic) NSString *baitiaoBackupMoneyProductId; // @synthesize baitiaoBackupMoneyProductId=_baitiaoBackupMoneyProductId;
@property(retain, nonatomic) VFSDKUserInfoViewModel *userInfoVM; // @synthesize userInfoVM=_userInfoVM;
@property(nonatomic) _Bool viewDidAppeared; // @synthesize viewDidAppeared=_viewDidAppeared;
@property(nonatomic) _Bool hasShowBaitiaoGuide; // @synthesize hasShowBaitiaoGuide=_hasShowBaitiaoGuide;
@property(nonatomic) _Bool isDataLoad; // @synthesize isDataLoad=_isDataLoad;
@property(nonatomic) _Bool isRecommend; // @synthesize isRecommend=_isRecommend;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UILabel *couponDesc; // @synthesize couponDesc=_couponDesc;
@property(nonatomic) __weak UIImageView *couponIcon; // @synthesize couponIcon=_couponIcon;
@property(nonatomic) _Bool canPayAllByCoupon; // @synthesize canPayAllByCoupon=_canPayAllByCoupon;
@property(retain, nonatomic) VFSDKPayWayModelV2 *selectedPayWay; // @synthesize selectedPayWay=_selectedPayWay;
@property(nonatomic) __weak id <VFWalletSDKDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *selectedCard; // @synthesize selectedCard=_selectedCard;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) __weak UILabel *orderDescLB; // @synthesize orderDescLB=_orderDescLB;
@property(nonatomic) __weak UILabel *orderAmountLB; // @synthesize orderAmountLB=_orderAmountLB;
@property(retain, nonatomic) NSDictionary *submitInfo; // @synthesize submitInfo=_submitInfo;
@property(retain, nonatomic) NSDictionary *tradeInfo; // @synthesize tradeInfo=_tradeInfo;
@property(retain, nonatomic) NSMutableArray *foldPaywayList; // @synthesize foldPaywayList=_foldPaywayList;
@property(retain, nonatomic) NSMutableArray *payWayListArr; // @synthesize payWayListArr=_payWayListArr;
@property(retain, nonatomic) UITextField *passwordText; // @synthesize passwordText=_passwordText;
@property(nonatomic) __weak UIButton *showCouponBtn; // @synthesize showCouponBtn=_showCouponBtn;
@property(nonatomic) __weak UIView *couponDividerIV; // @synthesize couponDividerIV=_couponDividerIV;
@property(nonatomic) __weak UILabel *couponTitleLB; // @synthesize couponTitleLB=_couponTitleLB;
@property(nonatomic) __weak UIImageView *couponArrowIV; // @synthesize couponArrowIV=_couponArrowIV;
@property(nonatomic) __weak NSLayoutConstraint *tradeInfoViewHConstraint; // @synthesize tradeInfoViewHConstraint=_tradeInfoViewHConstraint;
@property(nonatomic) __weak UIView *tradeInfoView; // @synthesize tradeInfoView=_tradeInfoView;
@property(nonatomic) __weak NSLayoutConstraint *payBtnBarHeight; // @synthesize payBtnBarHeight=_payBtnBarHeight;
@property(nonatomic) __weak UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(nonatomic) __weak UIView *bottomButtonBar; // @synthesize bottomButtonBar=_bottomButtonBar;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *extensionJson; // @synthesize extensionJson=_extensionJson;
@property(retain, nonatomic) NSArray *frontPayWayList; // @synthesize frontPayWayList=_frontPayWayList;
@property(retain, nonatomic) NSDictionary *frontSubmitInfo; // @synthesize frontSubmitInfo=_frontSubmitInfo;
@property(retain, nonatomic) NSDictionary *frontTradeInfo; // @synthesize frontTradeInfo=_frontTradeInfo;
@property(nonatomic) _Bool havePayWayList; // @synthesize havePayWayList=_havePayWayList;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSArray *couponArr; // @synthesize couponArr=_couponArr;
@property(nonatomic) _Bool isOutsideJump; // @synthesize isOutsideJump=_isOutsideJump;
@property(copy, nonatomic) NSString *otherPayMoney; // @synthesize otherPayMoney;
@property(copy, nonatomic) NSString *couponPayMoney; // @synthesize couponPayMoney;
@property(retain, nonatomic) NSIndexPath *couponSelectIdx; // @synthesize couponSelectIdx;
@property(nonatomic) _Bool isGetUserInfo; // @synthesize isGetUserInfo;
@property(nonatomic) _Bool isGetPayWay; // @synthesize isGetPayWay;
- (void).cxx_destruct;
- (void)retryPay;
- (void)pay;
- (id)configLoanPayParams;
- (id)configExceptQPParams;
- (id)configQPParams;
- (id)configCouponPayData;
- (void)useNewCardPay;
- (void)textFieldPasswordKeyboardDidFinshed:(id)arg1 card:(id)arg2;
- (void)textFieldPasswordKeyboardClose;
- (void)textFieldPasswordKeyboardDidSetPwdFinshed:(id)arg1;
- (void)textFieldPasswordKeyboardDidFinshed:(id)arg1;
- (void)selectRow:(id)arg1;
- (void)p_checkPasswordBeforPayWithBaitiaoBackupMoney;
- (void)p_setPasswordBeforePayWithBaitiaoBackupMoney;
- (_Bool)p_shouldOpenBaitiaoBackupMoney:(id)arg1;
- (_Bool)p_openBaitiaoBackupMoneyIfNeeded;
- (_Bool)p_jumpToBaitiaoProductsPageIfNeeded;
- (_Bool)p_canUseBaitiaoPayway:(id)arg1;
- (id)p_findBaitiaoPayway;
- (_Bool)p_autoSelectBaiTiaoPayWayAndGotoBaitiaoProductsPage:(_Bool)arg1;
- (_Bool)p_showBaitiaoGuidePageIfNeeded;
- (void)toSignView:(id)arg1;
- (void)pay:(id)arg1;
- (void)toUserAgreement;
- (void)showLoanPayPlatform;
- (void)paymentWithNewCard;
- (void)hideShadow;
- (void)showShadow;
- (void)couponPay;
- (void)showCouponsList:(id)arg1;
- (void)showWXSignPop;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)addTableFooter;
- (id)configCashierRecommendCell:(id)arg1 atIndexPath:(id)arg2;
- (id)configCashierCell:(id)arg1 atIndexPath:(id)arg2;
- (void)toSetLLMobile;
- (_Bool)checkMobile;
- (_Bool)checkPayPassword;
- (void)setupCouponUI;
- (void)setupOrderInfo;
- (void)handleSelectPayWay;
- (void)setupCommonPayWay:(id)arg1;
- (void)setupInitData;
- (void)queryWXSignStatus;
- (void)sendSmsCaptcha;
- (void)setPayPassWordReuqest:(id)arg1;
- (void)queryUserinfo;
- (void)getApplyPayInfo;
- (void)updateUI;
- (_Bool)couponPayWayNeedPassword;
- (long long)payWayListHasCoupon;
- (long long)hasCouponPay;
- (id)couponsJsonStr;
- (void)sortPayway;
- (_Bool)shouldPaymentConfigRight;
- (_Bool)isRecommendPay:(id)arg1;
- (_Bool)canUseBalance:(id)arg1;
- (id)payMoneyWithPayWay:(id)arg1;
- (void)updatePayMoney;
- (void)setupTableView;
- (void)setupCouponSelect;
- (void)setupCommonData;
- (void)clickBackButton:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

