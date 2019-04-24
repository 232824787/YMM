//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBKeyboard.h"

@class NSArray, NSMutableString, UIScrollView, UITextField;

@interface HCBTruckLenghtKeyboard : HCBKeyboard
{
    int _showTimes;
    NSArray *_btnTitleArray;
    NSMutableString *_inputStr;
    UITextField *_truckLengthTextField;
    UIScrollView *_scrollView;
}

@property(nonatomic) int showTimes; // @synthesize showTimes=_showTimes;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITextField *truckLengthTextField; // @synthesize truckLengthTextField=_truckLengthTextField;
@property(retain, nonatomic) NSMutableString *inputStr; // @synthesize inputStr=_inputStr;
@property(copy, nonatomic) NSArray *btnTitleArray; // @synthesize btnTitleArray=_btnTitleArray;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)endEditing:(_Bool)arg1;
- (void)confirmBtnPressed:(id)arg1;
- (void)cancelBtnPressed:(id)arg1;
- (void)btnPressed:(id)arg1;
- (void)setupBtnTitleUI;
- (id)init;
- (void)dealloc;
- (void)keyboardWillChangeFrameNotification:(id)arg1;

@end

