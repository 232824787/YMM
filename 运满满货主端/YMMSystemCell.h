//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface YMMSystemCell : YMMBaseTableViewCell
{
    _Bool _hiddenTitleImage;
    NSString *_rightTipsStr;
    UIImageView *_titleImageView;
    UIImageView *_subTitleIconView;
    UILabel *_titleLabel;
    UILabel *_bottomLabel;
    UILabel *_rightTipsLabel;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)createReuseCellForTableView:(id)arg1;
@property(nonatomic) _Bool hiddenTitleImage; // @synthesize hiddenTitleImage=_hiddenTitleImage;
@property(retain, nonatomic) UILabel *rightTipsLabel; // @synthesize rightTipsLabel=_rightTipsLabel;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *subTitleIconView; // @synthesize subTitleIconView=_subTitleIconView;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) NSString *rightTipsStr; // @synthesize rightTipsStr=_rightTipsStr;
- (void).cxx_destruct;
- (void)setTitleImage:(id)arg1 title:(id)arg2;
- (void)updateConstraints;
- (void)addSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

