//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface HCBETCMyInvoiceHeaderFilterBtn : UIView
{
    _Bool _isSelected;
    NSString *_titleText;
    id <HCBETCMyInvoiceHeaderFilterBtnDelegate> _delegate;
    UILabel *_title;
    UIImageView *_image;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *image; // @synthesize image=_image;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) id <HCBETCMyInvoiceHeaderFilterBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)initView;
- (void)awakeFromNib;

@end

