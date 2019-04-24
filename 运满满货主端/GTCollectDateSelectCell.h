//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, YMMGTSearchDriverModel;

@interface GTCollectDateSelectCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_startDate;
    UILabel *_startDateLabel;
    UIImageView *_startMarkImageView;
    UIImageView *_line;
    UILabel *_endDate;
    UILabel *_endDateLabel;
    UIImageView *_endMarkImageView;
    CDUnknownBlockType _datePickerBlock;
    YMMGTSearchDriverModel *_cellDriverModel;
}

@property(retain, nonatomic) YMMGTSearchDriverModel *cellDriverModel; // @synthesize cellDriverModel=_cellDriverModel;
@property(copy, nonatomic) CDUnknownBlockType datePickerBlock; // @synthesize datePickerBlock=_datePickerBlock;
@property(retain, nonatomic) UIImageView *endMarkImageView; // @synthesize endMarkImageView=_endMarkImageView;
@property(retain, nonatomic) UILabel *endDateLabel; // @synthesize endDateLabel=_endDateLabel;
@property(retain, nonatomic) UILabel *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *startMarkImageView; // @synthesize startMarkImageView=_startMarkImageView;
@property(retain, nonatomic) UILabel *startDateLabel; // @synthesize startDateLabel=_startDateLabel;
@property(retain, nonatomic) UILabel *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)datePickerClick:(id)arg1;
- (void)reloadCellData:(id)arg1;
- (void)addConstraint;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

