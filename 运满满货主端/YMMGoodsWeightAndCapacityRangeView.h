//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField, UIView;

@interface YMMGoodsWeightAndCapacityRangeView : YMMPopupMaskView <UITextFieldDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _goodsValueType;
    NSString *_minValue;
    NSString *_maxValue;
    CDUnknownBlockType _rangeValueCallback;
    UIView *_topView;
    UILabel *_titleLabel;
    UIButton *_confirmButton;
    UIView *_innerView;
    UITextField *_minValueField;
    UILabel *_toLabel;
    UITextField *_maxValueField;
    UILabel *_typeLabel;
}

@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UITextField *maxValueField; // @synthesize maxValueField=_maxValueField;
@property(retain, nonatomic) UILabel *toLabel; // @synthesize toLabel=_toLabel;
@property(retain, nonatomic) UITextField *minValueField; // @synthesize minValueField=_minValueField;
@property(retain, nonatomic) UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(copy, nonatomic) CDUnknownBlockType rangeValueCallback; // @synthesize rangeValueCallback=_rangeValueCallback;
@property(retain, nonatomic) NSString *maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) NSString *minValue; // @synthesize minValue=_minValue;
@property(nonatomic) unsigned long long goodsValueType; // @synthesize goodsValueType=_goodsValueType;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShowFront:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)removeKeyboardNotification;
- (void)sendKeyboardNotification;
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

