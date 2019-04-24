//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSIndexPath, UIImageView, UILabel, YMMSharedLocationModel;

@interface YMMIMSharedMapInfoCell : YMMBaseTableViewCell
{
    _Bool _firstCell;
    _Bool _selectedCell;
    NSIndexPath *_currentPath;
    YMMSharedLocationModel *_sharedModel;
    UILabel *_titleLab;
    UILabel *_subTitle;
    UIImageView *_tipsImgView;
}

+ (id)cellWithTableView:(id)arg1;
@property(retain, nonatomic) UIImageView *tipsImgView; // @synthesize tipsImgView=_tipsImgView;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) YMMSharedLocationModel *sharedModel; // @synthesize sharedModel=_sharedModel;
@property(retain, nonatomic) NSIndexPath *currentPath; // @synthesize currentPath=_currentPath;
@property(nonatomic) _Bool selectedCell; // @synthesize selectedCell=_selectedCell;
@property(nonatomic) _Bool firstCell; // @synthesize firstCell=_firstCell;
- (void).cxx_destruct;
- (void)updateSubViewConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

