//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UITextView;

@interface YMMCallCargoInfoView : UIView
{
    UIView *_topLeftLine;
    UILabel *_titleLb;
    UIView *_topRightLine;
    UIImageView *_loadIconImg;
    UILabel *_loadAddressLb;
    UIImageView *_unloadIconImg;
    UILabel *_unloadAddressLb;
    UIImageView *_desBackImg;
    UITextView *_desLb;
    id _itemModel;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) id itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UITextView *desLb; // @synthesize desLb=_desLb;
@property(retain, nonatomic) UIImageView *desBackImg; // @synthesize desBackImg=_desBackImg;
@property(retain, nonatomic) UILabel *unloadAddressLb; // @synthesize unloadAddressLb=_unloadAddressLb;
@property(retain, nonatomic) UIImageView *unloadIconImg; // @synthesize unloadIconImg=_unloadIconImg;
@property(retain, nonatomic) UILabel *loadAddressLb; // @synthesize loadAddressLb=_loadAddressLb;
@property(retain, nonatomic) UIImageView *loadIconImg; // @synthesize loadIconImg=_loadIconImg;
@property(retain, nonatomic) UIView *topRightLine; // @synthesize topRightLine=_topRightLine;
@property(retain, nonatomic) UILabel *titleLb; // @synthesize titleLb=_titleLb;
@property(retain, nonatomic) UIView *topLeftLine; // @synthesize topLeftLine=_topLeftLine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initUI;
- (id)init;
- (double)ymm_viewHeightForCargoInfo:(id)arg1 contentWidth:(double)arg2;

@end

