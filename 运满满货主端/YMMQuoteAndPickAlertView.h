//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface YMMQuoteAndPickAlertView : YMMPopupMaskView <UITextFieldDelegate>
{
    _Bool _agreementSelect;
    _Bool _agressClose;
    _Bool _agree;
    _Bool _isPopPrice;
    _Bool _virtualContactCargo;
    NSString *_headTitle;
    NSString *_messageTitle;
    NSString *_agreementTitle;
    NSString *_textFieldTitle;
    NSString *_cancelBtnTitle;
    NSString *_confirmBtnTitle;
    CDUnknownBlockType _confirmBtnBLock;
    CDUnknownBlockType _cancelBtnBlock;
    CDUnknownBlockType _agreementBLock;
    long long _isMyCar;
    long long _isUnRegister;
    UILabel *_titleLab;
    UILabel *_messageLab;
    UITextField *_textField;
    UIButton *_agreementBtn;
    UILabel *_agreementLab;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIButton *_protocolBtn;
    UIView *_line;
    UIView *_line2;
    long long _protocolBtnX;
    long long _protocolBtnWidth;
    UIButton *_addMyTruckBtn;
    UILabel *_truckLab;
    UILabel *_securedTips;
}

@property(retain, nonatomic) UILabel *securedTips; // @synthesize securedTips=_securedTips;
@property(retain, nonatomic) UILabel *truckLab; // @synthesize truckLab=_truckLab;
@property(retain, nonatomic) UIButton *addMyTruckBtn; // @synthesize addMyTruckBtn=_addMyTruckBtn;
@property(nonatomic) long long protocolBtnWidth; // @synthesize protocolBtnWidth=_protocolBtnWidth;
@property(nonatomic) long long protocolBtnX; // @synthesize protocolBtnX=_protocolBtnX;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *protocolBtn; // @synthesize protocolBtn=_protocolBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *agreementLab; // @synthesize agreementLab=_agreementLab;
@property(retain, nonatomic) UIButton *agreementBtn; // @synthesize agreementBtn=_agreementBtn;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *messageLab; // @synthesize messageLab=_messageLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) _Bool virtualContactCargo; // @synthesize virtualContactCargo=_virtualContactCargo;
@property(nonatomic) long long isUnRegister; // @synthesize isUnRegister=_isUnRegister;
@property(nonatomic) _Bool isPopPrice; // @synthesize isPopPrice=_isPopPrice;
@property(nonatomic) long long isMyCar; // @synthesize isMyCar=_isMyCar;
@property(copy, nonatomic) CDUnknownBlockType agreementBLock; // @synthesize agreementBLock=_agreementBLock;
@property(nonatomic) _Bool agree; // @synthesize agree=_agree;
@property(nonatomic) _Bool agressClose; // @synthesize agressClose=_agressClose;
@property(copy, nonatomic) CDUnknownBlockType cancelBtnBlock; // @synthesize cancelBtnBlock=_cancelBtnBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBtnBLock; // @synthesize confirmBtnBLock=_confirmBtnBLock;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(retain, nonatomic) NSString *cancelBtnTitle; // @synthesize cancelBtnTitle=_cancelBtnTitle;
@property(nonatomic) _Bool agreementSelect; // @synthesize agreementSelect=_agreementSelect;
@property(retain, nonatomic) NSString *textFieldTitle; // @synthesize textFieldTitle=_textFieldTitle;
@property(retain, nonatomic) NSString *agreementTitle; // @synthesize agreementTitle=_agreementTitle;
@property(retain, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(retain, nonatomic) NSString *headTitle; // @synthesize headTitle=_headTitle;
- (void).cxx_destruct;
- (void)updateUIConstraints;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)updateSecuredTips;
- (id)securedTipsStr;
- (void)closed;
- (void)protocolBtnClick:(id)arg1;
- (void)addMyTruckBtnAction:(id)arg1;
- (void)agreementBtnClick:(id)arg1;
- (void)cancelBtnClick:(id)arg1;
- (void)confirmBtnClick:(id)arg1;
- (void)hubShowTitle;
- (void)show;
- (void)hideKeyboard;
- (void)ymm_loadView;
- (void)setTitle:(id)arg1 ChickTitle:(id)arg2;
- (void)updateVirtualCargoConstraint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

