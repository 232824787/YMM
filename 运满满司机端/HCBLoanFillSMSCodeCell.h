//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, NSTimer, UIButton, UILabel, UITextField;

@interface HCBLoanFillSMSCodeCell : UITableViewCell
{
    NSTimer *codeTimer;
    long long timerCount;
    NSString *instCode;
    id <HCBLoanFillSMSCodeCellDelegate> delegate;
    UILabel *_titleLabel;
    UITextField *_verifyCodeTF;
    UIButton *_sendCodeBtn;
    UILabel *_tipLabel;
}

@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UIButton *sendCodeBtn; // @synthesize sendCodeBtn=_sendCodeBtn;
@property(nonatomic) __weak UITextField *verifyCodeTF; // @synthesize verifyCodeTF=_verifyCodeTF;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HCBLoanFillSMSCodeCellDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *instCode; // @synthesize instCode;
@property(nonatomic) long long timerCount; // @synthesize timerCount;
@property(retain, nonatomic) NSTimer *codeTimer; // @synthesize codeTimer;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)sendCode:(id)arg1;
- (void)sendSmsCode;
- (void)didFireCodeTimer:(id)arg1;
- (void)getCodeTimer;
- (void)updateCell:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)awakeFromNib;
- (_Bool)becomeFirstResponder;

@end

