//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, YMMTruckYardInTransitModel;

@interface YMMTransportTruckInfoCell : YMMBaseTableViewCell
{
    CDUnknownBlockType _viewLocationCallback;
    UIImageView *_avatarImageView;
    UILabel *_driverNameLabel;
    UILabel *_plateNumberLabel;
    UILabel *_truckInfoLabel;
    UILabel *_timeLabel;
    UILabel *_cargoInfoLabel;
    UILabel *_locatinInfoLabel;
    UIButton *_viewLocationButton;
    YMMTruckYardInTransitModel *_dataModel;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)createReuseCellForTableView:(id)arg1 withCellIdentifier:(id)arg2;
@property(retain, nonatomic) YMMTruckYardInTransitModel *dataModel; // @synthesize dataModel=_dataModel;
@property(retain, nonatomic) UIButton *viewLocationButton; // @synthesize viewLocationButton=_viewLocationButton;
@property(retain, nonatomic) UILabel *locatinInfoLabel; // @synthesize locatinInfoLabel=_locatinInfoLabel;
@property(retain, nonatomic) UILabel *cargoInfoLabel; // @synthesize cargoInfoLabel=_cargoInfoLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *truckInfoLabel; // @synthesize truckInfoLabel=_truckInfoLabel;
@property(retain, nonatomic) UILabel *plateNumberLabel; // @synthesize plateNumberLabel=_plateNumberLabel;
@property(retain, nonatomic) UILabel *driverNameLabel; // @synthesize driverNameLabel=_driverNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) CDUnknownBlockType viewLocationCallback; // @synthesize viewLocationCallback=_viewLocationCallback;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)viewLocationAction:(id)arg1;
- (void)initControls;
- (void)setNeedsUpdateConstraints;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

