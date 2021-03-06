//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCBaseViewController.h"

#import "UITextFieldDelegate.h"

@class HCBETCQiluBindCardViewModel, HCBETCQiluConfirmView, NSString, QiluCustomTextField, UIButton, UIImageView, UILabel, UIView;

@interface HCBETCQiluBindCardViewController : HCBETCBaseViewController <UITextFieldDelegate>
{
    long long _transferActivityStatus;
    HCBETCQiluBindCardViewModel *_viewModel;
    UIImageView *_topImageView;
    UIView *_btnContainerView;
    UIButton *_cardBindBtn;
    UIButton *_ObuBindBtn;
    UIImageView *_ObuIconImgView;
    UILabel *_descLabel;
    UIButton *_bindBtn;
    UIView *_cardInfoContainerView;
    QiluCustomTextField *_plateTF;
    QiluCustomTextField *_cardNoTF;
    UIView *_bindContainerView;
    UIView *_sliderView;
    UIView *_ObuBindContainerView;
    UILabel *_ObuDescLabel;
    HCBETCQiluConfirmView *_confirmView;
    UIButton *_bindGuideBtn;
}

@property(retain, nonatomic) UIButton *bindGuideBtn; // @synthesize bindGuideBtn=_bindGuideBtn;
@property(retain, nonatomic) HCBETCQiluConfirmView *confirmView; // @synthesize confirmView=_confirmView;
@property(retain, nonatomic) UILabel *ObuDescLabel; // @synthesize ObuDescLabel=_ObuDescLabel;
@property(retain, nonatomic) UIView *ObuBindContainerView; // @synthesize ObuBindContainerView=_ObuBindContainerView;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(nonatomic) __weak UIView *bindContainerView; // @synthesize bindContainerView=_bindContainerView;
@property(nonatomic) __weak QiluCustomTextField *cardNoTF; // @synthesize cardNoTF=_cardNoTF;
@property(nonatomic) __weak QiluCustomTextField *plateTF; // @synthesize plateTF=_plateTF;
@property(nonatomic) __weak UIView *cardInfoContainerView; // @synthesize cardInfoContainerView=_cardInfoContainerView;
@property(nonatomic) __weak UIButton *bindBtn; // @synthesize bindBtn=_bindBtn;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UIImageView *ObuIconImgView; // @synthesize ObuIconImgView=_ObuIconImgView;
@property(nonatomic) __weak UIButton *ObuBindBtn; // @synthesize ObuBindBtn=_ObuBindBtn;
@property(nonatomic) __weak UIButton *cardBindBtn; // @synthesize cardBindBtn=_cardBindBtn;
@property(nonatomic) __weak UIView *btnContainerView; // @synthesize btnContainerView=_btnContainerView;
@property(nonatomic) __weak UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) HCBETCQiluBindCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long transferActivityStatus; // @synthesize transferActivityStatus=_transferActivityStatus;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)selectBindStyle:(long long)arg1;
- (void)showConfirmView;
- (void)clickGuideBtn:(id)arg1;
- (void)openCouponPage;
- (void)bindCardWithPlate:(id)arg1 andCardNo:(id)arg2;
- (void)readCardForBindWithCompletion:(CDUnknownBlockType)arg1;
- (void)bindCardAction:(id)arg1;
- (void)readCardBindAction:(id)arg1;
- (void)ETCCardBindAction:(id)arg1;
- (void)freshUIWithStyle:(long long)arg1;
- (void)loadUI;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

