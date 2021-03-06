//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface YMMRaisePriceView : YMMPopupMaskView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    NSString *_minValue;
    NSString *_maxValue;
    CDUnknownBlockType _valueCallback;
    UIView *_topView;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIView *_innerView;
    UIView *_priceView;
    UITextField *_priceField;
    UILabel *_unitLabel;
}

@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UITextField *priceField; // @synthesize priceField=_priceField;
@property(retain, nonatomic) UIView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType valueCallback; // @synthesize valueCallback=_valueCallback;
@property(retain, nonatomic) NSString *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSString *minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShowFront:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)removeKeyboardNotification;
- (void)sendKeyboardNotification;
- (void)cancelAction;
- (void)confirm;
- (void)setViewConstraints;
- (void)initControls;
- (void)setViewGesture;
- (void)dismiss;
- (void)show;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

