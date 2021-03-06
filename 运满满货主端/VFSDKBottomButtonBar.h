//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor, UIImageView;

@interface VFSDKBottomButtonBar : UIView
{
    UIButton *_button;
    CDUnknownBlockType _buttonDidPressed;
    UIColor *_topSeparatorColor;
    UIImageView *_topLineView;
}

+ (id)createFromNib;
@property(nonatomic) __weak UIImageView *topLineView; // @synthesize topLineView=_topLineView;
@property(copy, nonatomic) UIColor *topSeparatorColor; // @synthesize topSeparatorColor=_topSeparatorColor;
@property(copy, nonatomic) CDUnknownBlockType buttonDidPressed; // @synthesize buttonDidPressed=_buttonDidPressed;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)awakeFromNib;

@end

