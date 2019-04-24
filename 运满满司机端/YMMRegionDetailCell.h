//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YMMRegionDetailCell : YMMBaseTableViewCell
{
    _Bool _needHighlight;
    _Bool _isFromCommonRegions;
    UIView *_regionView;
    UILabel *_regionLabel;
    UIImageView *_regionImgView;
}

@property(retain, nonatomic) UIImageView *regionImgView; // @synthesize regionImgView=_regionImgView;
@property(retain, nonatomic) UILabel *regionLabel; // @synthesize regionLabel=_regionLabel;
@property(retain, nonatomic) UIView *regionView; // @synthesize regionView=_regionView;
@property(nonatomic) _Bool isFromCommonRegions; // @synthesize isFromCommonRegions=_isFromCommonRegions;
@property(nonatomic) _Bool needHighlight; // @synthesize needHighlight=_needHighlight;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)loadControls;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

