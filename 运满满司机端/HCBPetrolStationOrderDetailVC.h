//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBPetrolBaseViewController.h"

#import "HCBPetrolOrderCancelAlertViewDelegate.h"

@class HCBEnterPayDetailModel, HCBPSOrderDetailBottomTypeBView, HCBPetrolCommonSelCrl, HCBPetrolInsuranceModel, HCBPetrolInsuranceSelView, HCBPetrolPayMethod, HCBPetrolSelInsuranceView, HCBPetrolStationOrderDetailModel, HCBPetrolStationOrderDetailTopView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UIControl, UIImageView, UILabel, UIScrollView, UIView;

@interface HCBPetrolStationOrderDetailVC : HCBPetrolBaseViewController <HCBPetrolOrderCancelAlertViewDelegate>
{
    _Bool _isAgree;
    _Bool _isShowAgree;
    _Bool _isBindInsurance;
    _Bool _isFetchData;
    _Bool _canCancelOrder;
    NSString *_orderNo;
    long long _sourceType;
    UIView *_agreementViewOld;
    UIView *_agreementViewNew;
    UIButton *_agreeBtn;
    UIImageView *_agreeImg;
    UILabel *_insuranceNewLbl;
    UIControl *_insuranceControlNew;
    NSLayoutConstraint *_constraintCenterOilAgreement;
    UIControl *_insuranceAgreementTag;
    UIView *_contentContainer;
    HCBPetrolStationOrderDetailTopView *_contentTopView;
    HCBPSOrderDetailBottomTypeBView *_contentBottomTypeBView;
    UIButton *_operatorBtn;
    UIView *_bottomOperatorContainer;
    NSLayoutConstraint *_bottomOperatorContainerHCons;
    UILabel *_agreementTitleLb;
    NSLayoutConstraint *_agreementTitleLbLeadingCons;
    NSLayoutConstraint *_agreementTitleLbCenterXCons;
    UILabel *_lblOrderNum;
    UILabel *_lblDealTime;
    UIButton *_cancelOrderBtn;
    NSLayoutConstraint *_constraintWidthCancelOrderBtn;
    NSLayoutConstraint *_constraintRightCancelOrderBtn;
    HCBPetrolStationOrderDetailModel *_model;
    NSString *_pvPageName;
    UIView *_viewTopLine;
    UIScrollView *_baseScrollView;
    HCBPetrolSelInsuranceView *_seledInsuranceView;
    HCBPetrolInsuranceSelView *_insuranceSelView;
    NSArray *_payTypeArray;
    HCBPetrolCommonSelCrl *_selPayTypeView;
    HCBPetrolCommonSelCrl *_selInsuranceView;
    HCBPetrolPayMethod *_curSelPayType;
    NSMutableArray *_insuranceArray;
    HCBPetrolInsuranceModel *_selInsurance;
    HCBEnterPayDetailModel *_enterPayDetailModel;
    UIView *_viewInsuranceInfo;
    NSLayoutConstraint *_constraintHeightInsurance;
    UILabel *_oilCardTaxDescLabel;
    NSLayoutConstraint *_cancancelBtnWidthCS;
    NSLayoutConstraint *_cancancelBtnTrailingCS;
    NSString *_source;
}

+ (_Bool)notNeedLoadNib;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) __weak NSLayoutConstraint *cancancelBtnTrailingCS; // @synthesize cancancelBtnTrailingCS=_cancancelBtnTrailingCS;
@property(nonatomic) __weak NSLayoutConstraint *cancancelBtnWidthCS; // @synthesize cancancelBtnWidthCS=_cancancelBtnWidthCS;
@property(nonatomic) _Bool canCancelOrder; // @synthesize canCancelOrder=_canCancelOrder;
@property(nonatomic) __weak UILabel *oilCardTaxDescLabel; // @synthesize oilCardTaxDescLabel=_oilCardTaxDescLabel;
@property(nonatomic) _Bool isFetchData; // @synthesize isFetchData=_isFetchData;
@property(nonatomic) __weak NSLayoutConstraint *constraintHeightInsurance; // @synthesize constraintHeightInsurance=_constraintHeightInsurance;
@property(nonatomic) __weak UIView *viewInsuranceInfo; // @synthesize viewInsuranceInfo=_viewInsuranceInfo;
@property(nonatomic) _Bool isBindInsurance; // @synthesize isBindInsurance=_isBindInsurance;
@property(retain, nonatomic) HCBEnterPayDetailModel *enterPayDetailModel; // @synthesize enterPayDetailModel=_enterPayDetailModel;
@property(retain, nonatomic) HCBPetrolInsuranceModel *selInsurance; // @synthesize selInsurance=_selInsurance;
@property(retain, nonatomic) NSMutableArray *insuranceArray; // @synthesize insuranceArray=_insuranceArray;
@property(retain, nonatomic) HCBPetrolPayMethod *curSelPayType; // @synthesize curSelPayType=_curSelPayType;
@property(retain, nonatomic) HCBPetrolCommonSelCrl *selInsuranceView; // @synthesize selInsuranceView=_selInsuranceView;
@property(retain, nonatomic) HCBPetrolCommonSelCrl *selPayTypeView; // @synthesize selPayTypeView=_selPayTypeView;
@property(retain, nonatomic) NSArray *payTypeArray; // @synthesize payTypeArray=_payTypeArray;
@property(retain, nonatomic) HCBPetrolInsuranceSelView *insuranceSelView; // @synthesize insuranceSelView=_insuranceSelView;
@property(retain, nonatomic) HCBPetrolSelInsuranceView *seledInsuranceView; // @synthesize seledInsuranceView=_seledInsuranceView;
@property(nonatomic) __weak UIScrollView *baseScrollView; // @synthesize baseScrollView=_baseScrollView;
@property(nonatomic) UIView *viewTopLine; // @synthesize viewTopLine=_viewTopLine;
@property(retain, nonatomic) NSString *pvPageName; // @synthesize pvPageName=_pvPageName;
@property(retain, nonatomic) HCBPetrolStationOrderDetailModel *model; // @synthesize model=_model;
@property(nonatomic) __weak NSLayoutConstraint *constraintRightCancelOrderBtn; // @synthesize constraintRightCancelOrderBtn=_constraintRightCancelOrderBtn;
@property(nonatomic) __weak NSLayoutConstraint *constraintWidthCancelOrderBtn; // @synthesize constraintWidthCancelOrderBtn=_constraintWidthCancelOrderBtn;
@property(nonatomic) __weak UIButton *cancelOrderBtn; // @synthesize cancelOrderBtn=_cancelOrderBtn;
@property(nonatomic) __weak UILabel *lblDealTime; // @synthesize lblDealTime=_lblDealTime;
@property(nonatomic) __weak UILabel *lblOrderNum; // @synthesize lblOrderNum=_lblOrderNum;
@property(nonatomic) __weak NSLayoutConstraint *agreementTitleLbCenterXCons; // @synthesize agreementTitleLbCenterXCons=_agreementTitleLbCenterXCons;
@property(nonatomic) __weak NSLayoutConstraint *agreementTitleLbLeadingCons; // @synthesize agreementTitleLbLeadingCons=_agreementTitleLbLeadingCons;
@property(nonatomic) __weak UILabel *agreementTitleLb; // @synthesize agreementTitleLb=_agreementTitleLb;
@property(nonatomic) __weak NSLayoutConstraint *bottomOperatorContainerHCons; // @synthesize bottomOperatorContainerHCons=_bottomOperatorContainerHCons;
@property(nonatomic) __weak UIView *bottomOperatorContainer; // @synthesize bottomOperatorContainer=_bottomOperatorContainer;
@property(nonatomic) __weak UIButton *operatorBtn; // @synthesize operatorBtn=_operatorBtn;
@property(nonatomic) __weak HCBPSOrderDetailBottomTypeBView *contentBottomTypeBView; // @synthesize contentBottomTypeBView=_contentBottomTypeBView;
@property(nonatomic) __weak HCBPetrolStationOrderDetailTopView *contentTopView; // @synthesize contentTopView=_contentTopView;
@property(nonatomic) __weak UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) __weak UIControl *insuranceAgreementTag; // @synthesize insuranceAgreementTag=_insuranceAgreementTag;
@property(nonatomic) __weak NSLayoutConstraint *constraintCenterOilAgreement; // @synthesize constraintCenterOilAgreement=_constraintCenterOilAgreement;
@property(nonatomic) _Bool isShowAgree; // @synthesize isShowAgree=_isShowAgree;
@property(nonatomic) _Bool isAgree; // @synthesize isAgree=_isAgree;
@property(nonatomic) __weak UIControl *insuranceControlNew; // @synthesize insuranceControlNew=_insuranceControlNew;
@property(nonatomic) __weak UILabel *insuranceNewLbl; // @synthesize insuranceNewLbl=_insuranceNewLbl;
@property(nonatomic) __weak UIImageView *agreeImg; // @synthesize agreeImg=_agreeImg;
@property(nonatomic) __weak UIButton *agreeBtn; // @synthesize agreeBtn=_agreeBtn;
@property(nonatomic) __weak UIView *agreementViewNew; // @synthesize agreementViewNew=_agreementViewNew;
@property(nonatomic) __weak UIView *agreementViewOld; // @synthesize agreementViewOld=_agreementViewOld;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getInvoiceAction;
- (void)addRightBtnWtihTitle:(id)arg1;
- (void)gotoEvaluate;
- (void)pushToCheckBankPayStatusVC;
- (void)payFailedWithPaymentURL:(id)arg1;
- (void)handleWalletPaymentResultWithContext:(id)arg1 paymentURL:(id)arg2;
- (void)paymentWithNavigatorURL:(id)arg1;
- (void)createFreightGasCardOrderWithOrderNo:(id)arg1;
- (void)createPersonalPayOrderWithOrderNo:(id)arg1;
- (void)createOrderWithOrderNo:(id)arg1;
- (void)gotoPay;
- (void)reqBindInsuranceWithOrderNo:(id)arg1 insuranceInfo:(id)arg2 nCompleteBlock:(CDUnknownBlockType)arg3;
- (void)setupInsuranceTagWithShow:(_Bool)arg1;
- (void)agreementUrlBtnAction:(id)arg1;
- (void)insuranceAreementUrlBtnAction:(id)arg1;
- (void)updateAgreeImg;
- (void)agreeBtnPressed:(id)arg1;
- (void)showSelectCancelReasonWithArray:(id)arg1;
- (void)cancelOrderActionWithResult:(_Bool)arg1;
- (void)submitCancelOrder;
- (void)selectReasonWithModel:(id)arg1;
- (void)refreshCancelButtonState;
- (void)queryOrderCancelByOrderStatus:(long long)arg1 onCompleteBlock:(CDUnknownBlockType)arg2;
- (void)cancelOrderAction:(id)arg1;
- (void)orderStatusChangedAction:(id)arg1;
- (void)operatorBtnAction:(id)arg1;
- (void)fetchDetailData;
- (void)configurePVPageNameWithOrderState:(unsigned long long)arg1;
- (void)setupEnterPayUI;
- (void)reqEnterPayDetail;
- (void)reqPayMethodListWithStationId:(id)arg1 orderNo:(id)arg2 oilCode:(id)arg3 onCompleteBlock:(CDUnknownBlockType)arg4;
- (void)choosePayType;
- (void)checkPayChannelType;
- (void)clearSelectedInsurance;
- (void)selectedInsurance;
- (void)setupInsuranceView;
- (void)showCompleteInsurance;
- (void)showInsurance;
- (void)reqPetrolInsuranceListWithStationId:(id)arg1 oilOriginAmount:(id)arg2 onCompleteBlock:(CDUnknownBlockType)arg3;
- (void)checkInsuranceInfo;
- (void)goGasStationWithgasStationId:(long long)arg1;
- (void)configureAgreementViewWithOrderState:(unsigned long long)arg1;
- (void)configureOperatorBtnWithOrderState:(unsigned long long)arg1;
- (void)configureContentWithModel:(id)arg1;
- (void)configureViewsWithModel:(id)arg1;
- (id)sourceStr;
- (id)setupPVPageValues;
- (id)setupPVCurrentPageName;
- (void)clickBackButton:(id)arg1;
- (void)setupUIStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHCBNavigatorURL:(id)arg1 query:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

