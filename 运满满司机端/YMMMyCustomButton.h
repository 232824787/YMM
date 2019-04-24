//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel;

@interface YMMMyCustomButton : UIButton
{
    UILabel *_valueLabel;
    UILabel *_title;
    UIButton *_encryptBtn;
    CDUnknownBlockType _clickEncryptBalanceBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickEncryptBalanceBlock; // @synthesize clickEncryptBalanceBlock=_clickEncryptBalanceBlock;
@property(retain, nonatomic) UIButton *encryptBtn; // @synthesize encryptBtn=_encryptBtn;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void).cxx_destruct;
- (void)setBtnTitle:(id)arg1 valueText:(id)arg2;
- (void)setValue:(id)arg1;
- (id)allText:(id)arg1 lastLen:(long long)arg2;
- (void)setAttributeString:(id)arg1;
- (void)didClickBalanceEncryptButton:(id)arg1;
- (void)updateConstraints;
- (void)initSubviews;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (id)init;

@end

