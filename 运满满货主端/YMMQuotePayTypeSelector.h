//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSDictionary, NSString, UIButton, UIPickerView, UIView;

@interface YMMQuotePayTypeSelector : YMMPopupMaskView <UIPickerViewDelegate, UIPickerViewDataSource, UIGestureRecognizerDelegate>
{
    NSString *_currentPayTypeStr;
    CDUnknownBlockType _callback;
    unsigned long long _selectedPayTypeIndex;
    UIView *_buttonView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIPickerView *_pickerView;
    NSArray *_payTypeArr;
    NSDictionary *_sourceArray;
}

@property(copy, nonatomic) NSDictionary *sourceArray; // @synthesize sourceArray=_sourceArray;
@property(copy, nonatomic) NSArray *payTypeArr; // @synthesize payTypeArr=_payTypeArr;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(nonatomic) unsigned long long selectedPayTypeIndex; // @synthesize selectedPayTypeIndex=_selectedPayTypeIndex;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)initPayTypeArray:(id)arg1;
- (void)initPayTypeArray;
- (void)dismiss;
- (void)show;
- (void)confirm;
- (void)setViewGesture;
- (void)setViewConstraints;
- (void)initControls;
- (void)dealloc;
- (id)initWithTypes:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

