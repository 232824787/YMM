//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface HCBETCInvoiceBtn : UIView
{
    UILabel *_title;
    UIButton *_imgBtn;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIButton *imgBtn; // @synthesize imgBtn=_imgBtn;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)loadMasonry;
- (void)initView;
- (id)initWithImage:(id)arg1 andTitle:(id)arg2 andTarget:(id)arg3 andSelector:(SEL)arg4;

@end

