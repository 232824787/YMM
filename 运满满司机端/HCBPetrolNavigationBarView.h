//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface HCBPetrolNavigationBarView : UIView
{
    UILabel *_lblBarTitle;
    UIImageView *_iconBack;
    UIButton *_rightBtn;
    NSLayoutConstraint *_iconHeightCS;
    NSLayoutConstraint *_iconWidthCS;
    CDUnknownBlockType _actionBack;
    CDUnknownBlockType _actionRight;
}

+ (id)getPetrolNavigationBar;
@property(copy, nonatomic) CDUnknownBlockType actionRight; // @synthesize actionRight=_actionRight;
@property(copy, nonatomic) CDUnknownBlockType actionBack; // @synthesize actionBack=_actionBack;
@property(nonatomic) NSLayoutConstraint *iconWidthCS; // @synthesize iconWidthCS=_iconWidthCS;
@property(nonatomic) NSLayoutConstraint *iconHeightCS; // @synthesize iconHeightCS=_iconHeightCS;
@property(nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(nonatomic) __weak UIImageView *iconBack; // @synthesize iconBack=_iconBack;
@property(nonatomic) __weak UILabel *lblBarTitle; // @synthesize lblBarTitle=_lblBarTitle;
- (void).cxx_destruct;
- (void)clickRightBtn:(id)arg1;
- (void)clickedBack:(id)arg1;
- (void)setupTitle:(id)arg1;
- (void)awakeFromNib;

@end

