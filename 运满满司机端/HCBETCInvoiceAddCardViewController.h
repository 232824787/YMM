//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCInvoiceBaseViewController.h"

@class UIButton, UITextField, UIView;

@interface HCBETCInvoiceAddCardViewController : HCBETCInvoiceBaseViewController
{
    UIView *_containerView;
    UITextField *_textField;
    UIButton *_buttonAdd;
}

@property(retain, nonatomic) UIButton *buttonAdd; // @synthesize buttonAdd=_buttonAdd;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)textFieldTextEditingDidEnd:(id)arg1;
- (void)textFieldTextEditingChanged:(id)arg1;
- (void)actionAddCard:(id)arg1;
- (void)viewDidLoad;
- (id)setupPVCurrentPageName;

@end

