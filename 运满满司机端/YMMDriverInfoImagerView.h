//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView;

@interface YMMDriverInfoImagerView : UIView
{
    _Bool _isPass;
    unsigned long long _type;
    NSString *_imageName;
    NSString *_title;
    UIImageView *_passImgView;
    UIImageView *_imageView;
    UIButton *_titleBtn;
}

@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *passImgView; // @synthesize passImgView=_passImgView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isPass; // @synthesize isPass=_isPass;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end

