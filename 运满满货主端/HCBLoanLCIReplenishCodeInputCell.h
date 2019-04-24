//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextFieldDelegate.h"

@class CAShapeLayer, HCBLoanRiskShieldTextField, NSDictionary, NSString, NSTimer, UIButton, UILabel, UIView;

@interface HCBLoanLCIReplenishCodeInputCell : UITableViewCell <UITextFieldDelegate>
{
    _Bool _showTopRadius;
    _Bool _showBottomRadius;
    CDUnknownBlockType _sendCodeHanlder;
    CDUnknownBlockType _textChangedHanlder;
    HCBLoanRiskShieldTextField *_codeTF;
    UIView *_backView;
    UILabel *_titleLabel;
    UIButton *_sendButton;
    UIView *_lineView;
    NSDictionary *_info;
    CAShapeLayer *_radiusLayer;
    NSTimer *_codeTimer;
    long long _timerCount;
    NSString *_instCode;
    long long _maxInputLength;
    long long _maxCountdown;
}

@property(nonatomic) long long maxCountdown; // @synthesize maxCountdown=_maxCountdown;
@property(nonatomic) long long maxInputLength; // @synthesize maxInputLength=_maxInputLength;
@property(copy, nonatomic) NSString *instCode; // @synthesize instCode=_instCode;
@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;
@property(retain, nonatomic) NSTimer *codeTimer; // @synthesize codeTimer=_codeTimer;
@property(retain, nonatomic) CAShapeLayer *radiusLayer; // @synthesize radiusLayer=_radiusLayer;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak HCBLoanRiskShieldTextField *codeTF; // @synthesize codeTF=_codeTF;
@property(copy, nonatomic) CDUnknownBlockType textChangedHanlder; // @synthesize textChangedHanlder=_textChangedHanlder;
@property(copy, nonatomic) CDUnknownBlockType sendCodeHanlder; // @synthesize sendCodeHanlder=_sendCodeHanlder;
@property(nonatomic) _Bool showBottomRadius; // @synthesize showBottomRadius=_showBottomRadius;
@property(nonatomic) _Bool showTopRadius; // @synthesize showTopRadius=_showTopRadius;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)sendCode:(id)arg1;
- (void)sendSmsCode;
- (void)didFireCodeTimer:(id)arg1;
- (void)getCodeTimer;
- (void)textFieldDidChange:(id)arg1;
- (id)sharpPath;
- (void)updateCellWithInfo:(id)arg1 lastInputText:(id)arg2 showLine:(_Bool)arg3;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (_Bool)becomeFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

