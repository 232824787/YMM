//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface YMMCargoNearbyLineCell : UICollectionViewCell
{
    UILabel *_lineLabel;
    UILabel *_truckInfoLabel;
    UILabel *_distanceLabel;
    UILabel *_timeLabel;
}

@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *truckInfoLabel; // @synthesize truckInfoLabel=_truckInfoLabel;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)updateConstraints;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

