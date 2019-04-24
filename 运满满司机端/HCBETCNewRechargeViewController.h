//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "HCBETCNavigationBarProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "VFWalletSDKDelegate.h"

@class ETCCardInfo, FBKVOController, HCBETCContainerViewController, HCBETCMineWarnView, HCBETCNewRechargeViewModel, NSDictionary, NSString, UICollectionView;

@interface HCBETCNewRechargeViewController : HCBETCBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, VFWalletSDKDelegate, HCBETCNavigationBarProtocol>
{
    NSString *inform;
    _Bool _viewDidAppear;
    ETCCardInfo *_currentCardInfo;
    NSDictionary *_tempLoanChannelDic;
    HCBETCNewRechargeViewModel *_viewModel;
    UICollectionView *_collectionView;
    FBKVOController *_KVOController;
    HCBETCContainerViewController *_containerViewController;
    HCBETCMineWarnView *_warnView;
    NSString *_amount;
}

@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) HCBETCMineWarnView *warnView; // @synthesize warnView=_warnView;
@property(retain, nonatomic) HCBETCContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HCBETCNewRechargeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSDictionary *tempLoanChannelDic; // @synthesize tempLoanChannelDic=_tempLoanChannelDic;
@property(retain, nonatomic) ETCCardInfo *currentCardInfo; // @synthesize currentCardInfo=_currentCardInfo;
- (void).cxx_destruct;
- (id)etcNavigationBarAssociatedScrollView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didFinishedTransType:(long long)arg1 resultType:(long long)arg2 result:(id)arg3;
- (void)gdAlert:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkGdMaterialIsFullWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)marketOpenWithPararms:(id)arg1 withAmount:(id)arg2 withOrderNo:(id)arg3 withSource:(id)arg4 withSeller:(id)arg5;
- (void)getBindCardRecordwithCompletionHandler;
- (_Bool)isExistingSameOrderNotPayed:(id)arg1;
- (void)hideSwitchETCCardView:(id)arg1;
- (void)showSwitchETCCardView:(id)arg1;
- (void)hideWindowContainerVC;
- (void)showWindowContainerView:(id)arg1 animation:(_Bool)arg2;
- (_Bool)isCardAvailable;
- (void)handleExistedOrder:(id)arg1 withAmount:(id)arg2;
- (void)openWalletWithAmount:(id)arg1 wihtOrderNo:(id)arg2 withSource:(id)arg3 withSeller:(id)arg4;
- (void)payWithOrderInfo:(id)arg1 withParameters:(id)arg2;
- (void)deposit:(id)arg1 withParameters:(id)arg2;
- (void)checkSameOrderWithCardNumber:(id)arg1 amount:(id)arg2 withParameters:(id)arg3;
- (void)recharge:(id)arg1 withParameters:(id)arg2;
- (void)showChargeConfirmPage:(id)arg1 withParameters:(id)arg2;
- (void)checkGDCardWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)validateAmount:(id)arg1;
- (void)rechargeCheck:(id)arg1 withParameters:(id)arg2;
- (void)rechargeFlow:(id)arg1 withParameters:(id)arg2;
- (void)loanChannelRecharge;
- (void)writeCard:(id)arg1 withAmount:(id)arg2 withPayMethod:(id)arg3 whthThirdOrders:(id)arg4;
- (void)showToastWithText:(id)arg1;
- (void)hideProgress;
- (void)showProgressWithText:(id)arg1;
- (void)showProgress;
- (void)readCardForBind:(_Bool)arg1 autoPop:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readCardForBind:(CDUnknownBlockType)arg1;
- (void)tapNoticeLabel;
- (void)clickFAQCellWithIndex:(long long)arg1;
- (void)clickAdvertCellWithIndex:(long long)arg1;
- (void)checkBalance;
- (void)openBaiTiao;
- (void)clickEntranceCellWithIndex:(long long)arg1;
- (void)clickToShowInputView;
- (void)clickFaceValueCellWithIndex:(long long)arg1;
- (void)switchCard;
- (void)bindCard;
- (void)clickPlateNumCell;
- (void)clickMoreFaqBtn;
- (void)receiveRechargeNoti:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

