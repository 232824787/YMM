//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CALayer, HCBRedPoint, UIImageView, UILabel;

@interface HCBCustomNavItemButton : UIControl
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    HCBRedPoint *_redPoint;
    CALayer *_tipRedPoint;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) CALayer *tipRedPoint; // @synthesize tipRedPoint=_tipRedPoint;
@property(retain, nonatomic) HCBRedPoint *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)updateTipRedPointPosition:(struct CGPoint)arg1;
- (void)showTipRedPoint:(_Bool)arg1;
- (void)setupUI;
- (void)adjustControlFrame;
- (void)updateParkState:(_Bool)arg1;
- (void)updateRedPointCountString:(id)arg1;
- (void)updateRedPointCount:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)init;
- (struct CGSize)intrinsicContentSize;

@end

