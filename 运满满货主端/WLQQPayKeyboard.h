//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSBundle, NSMutableString, UIButton, UITextField;

@interface WLQQPayKeyboard : UIView
{
    UIView *headerView;
    int curentPos;
    NSMutableString *password;
    UIButton *okBtn;
    UIButton *deleteBtn;
    UIButton *cleanBtn;
    NSBundle *bundle;
    double height;
    unsigned long long keyboardType;
    UITextField *_textField;
}

@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)HCBCleanPassword;
- (void)pressOkKey;
- (void)pressClearallKey;
- (void)pressBackspaceKey;
- (void)setPassword:(int)arg1;
- (void)pressNumericKey:(id)arg1;
- (id)addOkKeyWithFrame:(struct CGRect)arg1;
- (id)addClearallKeyWithFrame:(struct CGRect)arg1;
- (id)addBackspaceKeyWithFrame:(struct CGRect)arg1;
- (id)addNumericKeyWithTitle:(id)arg1 frame:(struct CGRect)arg2;
- (void)closeBtnPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getMyBundlePath1:(id)arg1;
- (id)init;

@end

