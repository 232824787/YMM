//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIFont, UIImage, UIImageView, UILabel;

@interface YMMImageView : UIView
{
    _Bool _showBadge;
    UIImageView *_imageView;
    UIImage *_image;
    long long _badge;
    double _imageCornerRadius;
    double _badgeSize;
    UIFont *_badgeFont;
    UIColor *_badgeTextColor;
    UIColor *_badgeBackgroudColor;
    UILabel *_badgeView;
}

+ (void)initialize;
@property(retain, nonatomic) UILabel *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIColor *badgeBackgroudColor; // @synthesize badgeBackgroudColor=_badgeBackgroudColor;
@property(retain, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor=_badgeTextColor;
@property(retain, nonatomic) UIFont *badgeFont; // @synthesize badgeFont=_badgeFont;
@property(nonatomic) double badgeSize; // @synthesize badgeSize=_badgeSize;
@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(nonatomic) long long badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_updateBadgeViewWidthConstraint;
- (void)_setupBadgeViewConstraint;
- (void)_setupImageViewConstraint;
- (void)_setupSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

