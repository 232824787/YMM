//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView, YMMCargoNameModel, YMMCargoNameTagView;

@interface YMMSearchCargoNameCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtextLabel;
    UIImageView *_arrowImageView;
    UIView *_bottomView;
    YMMCargoNameTagView *_tagView;
    YMMCargoNameModel *_cargoNameModel;
}

@property(retain, nonatomic) YMMCargoNameModel *cargoNameModel; // @synthesize cargoNameModel=_cargoNameModel;
@property(retain, nonatomic) YMMCargoNameTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateCargoNameModel:(id)arg1 keyWord:(id)arg2;
- (void)setViewConstraints;
- (void)initUI;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

