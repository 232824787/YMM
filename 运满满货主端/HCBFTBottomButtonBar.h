//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor, UIImageView;

@interface HCBFTBottomButtonBar : UIView
{
    _Bool _buttonUseNewTheme;
    CDUnknownBlockType _buttonDidPressed;
    double _buttonHeight;
    UIImageView *_topLineView;
    UIButton *_button;
    struct UIEdgeInsets _buttonEdgeInsets;
}

+ (double)defaultHeight;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) struct UIEdgeInsets buttonEdgeInsets; // @synthesize buttonEdgeInsets=_buttonEdgeInsets;
@property(nonatomic) _Bool buttonUseNewTheme; // @synthesize buttonUseNewTheme=_buttonUseNewTheme;
@property(copy, nonatomic) CDUnknownBlockType buttonDidPressed; // @synthesize buttonDidPressed=_buttonDidPressed;
- (void).cxx_destruct;
- (void)p_buttonDidPressed:(id)arg1;
@property(copy, nonatomic) UIColor *topSeparatorColor;
- (void)p_setupView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

