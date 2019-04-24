//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMIMBaseCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface YMMIMMessageListSubActivityCell : YMMIMBaseCell
{
    CDUnknownBlockType _clickBlock;
    UILabel *_timeLab;
    UIView *_clearView;
    UIView *_radiusView;
    UIImageView *_iconImageView;
    UILabel *_contentTitleLab;
    UILabel *_contentDescLab;
    UIView *_horLine;
    UIButton *_seeMoreBtn;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIButton *seeMoreBtn; // @synthesize seeMoreBtn=_seeMoreBtn;
@property(retain, nonatomic) UIView *horLine; // @synthesize horLine=_horLine;
@property(retain, nonatomic) UILabel *contentDescLab; // @synthesize contentDescLab=_contentDescLab;
@property(retain, nonatomic) UILabel *contentTitleLab; // @synthesize contentTitleLab=_contentTitleLab;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *radiusView; // @synthesize radiusView=_radiusView;
@property(retain, nonatomic) UIView *clearView; // @synthesize clearView=_clearView;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)addSubViews;
- (void)updateConstraints;
- (void)didClickCellWithTapGest:(id)arg1;
- (void)ymm_configWithItemModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

