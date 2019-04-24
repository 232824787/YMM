//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface YMMCommonOptionCell : YMMBaseTableViewCell
{
    _Bool _selImage;
    UILabel *_leftLabel;
    UIImageView *_selImageView;
    UIView *_bottomLine;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)ymm_createCellForTableView:(id)arg1;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *selImageView; // @synthesize selImageView=_selImageView;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) _Bool selImage; // @synthesize selImage=_selImage;
- (void).cxx_destruct;
- (id)colorWithHexString:(id)arg1;
- (id)ymm_bundleImageWithName:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

