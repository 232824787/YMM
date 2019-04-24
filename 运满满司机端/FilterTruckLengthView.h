//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, UITextField;

@interface FilterTruckLengthView : UIView <UITextFieldDelegate>
{
    NSArray *_defautLengthArr;
    NSMutableArray *_allLengthArr;
    NSMutableArray *_lengthButtonArr;
    double _lastLengthViewHeight;
    NSMutableArray *_selectedTruckLenArr;
    _Bool _isKeyboardShow;
    NSMutableArray *_currentRangeLengthArr;
    NSString *_defineLength;
    _Bool _isShowSpecialTruckLength;
    NSMutableArray *_currentLengthArr;
    long long _maxTruckLengthCount;
    CDUnknownBlockType _selectLengthCallback;
    CDUnknownBlockType _keyboardWillShowCallback;
    CDUnknownBlockType _keyboardWillHideCallback;
    UIView *_contentView;
    UILabel *_tipLabel;
    UIView *_doneView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UITextField *_lengthField;
}

@property(retain, nonatomic) UITextField *lengthField; // @synthesize lengthField=_lengthField;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *doneView; // @synthesize doneView=_doneView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isShowSpecialTruckLength; // @synthesize isShowSpecialTruckLength=_isShowSpecialTruckLength;
@property(copy, nonatomic) CDUnknownBlockType keyboardWillHideCallback; // @synthesize keyboardWillHideCallback=_keyboardWillHideCallback;
@property(copy, nonatomic) CDUnknownBlockType keyboardWillShowCallback; // @synthesize keyboardWillShowCallback=_keyboardWillShowCallback;
@property(copy, nonatomic) CDUnknownBlockType selectLengthCallback; // @synthesize selectLengthCallback=_selectLengthCallback;
@property(nonatomic) long long maxTruckLengthCount; // @synthesize maxTruckLengthCount=_maxTruckLengthCount;
@property(retain, nonatomic) NSMutableArray *currentLengthArr; // @synthesize currentLengthArr=_currentLengthArr;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)confirm;
- (void)dismissKeyboard;
- (void)selectCurrentLength:(id)arg1;
- (void)keyboardWasHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)removeKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (void)showTip:(id)arg1;
- (void)loadControls;
- (void)setViewFrame;
- (void)renderLengthView;
- (void)removeFilterItemButtonView;
- (double)buttonWidth;
- (void)initData:(id)arg1;
- (void)initDefalutLength;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

