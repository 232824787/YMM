//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HCBLoanHyperlinkTextView, UIButton;

@interface HCBLoan6ElemAuthProtocolView : UIView
{
    UIButton *_checkButton;
    HCBLoanHyperlinkTextView *_textView;
    CDUnknownBlockType _didChecked;
}

@property(copy, nonatomic) CDUnknownBlockType didChecked; // @synthesize didChecked=_didChecked;
@property(retain, nonatomic) HCBLoanHyperlinkTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
- (void).cxx_destruct;
- (void)p_checkButtonDidPressed:(id)arg1;
- (void)awakeFromNib;

@end

