//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView, YMMRegion;

@interface YMMGoodsPlaceCell : YMMBaseTableViewCell
{
    YMMRegion *_startRegion;
    YMMRegion *_endRegion;
    CDUnknownBlockType _selectStartPlaceCallback;
    CDUnknownBlockType _selectEndPlaceCallback;
    UIView *_startPlaceView;
    UIImageView *_startPlaceImageView;
    UILabel *_startPlaceLabel;
    UIButton *_startPlaceButton;
    UIView *_splitLineView;
    UIView *_endPlaceView;
    UIImageView *_endPlaceImageView;
    UILabel *_endPlaceLabel;
    UIButton *_endPlaceButton;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)createReuseCellForTableView:(id)arg1 withCellIdentifier:(id)arg2;
@property(retain, nonatomic) UIButton *endPlaceButton; // @synthesize endPlaceButton=_endPlaceButton;
@property(retain, nonatomic) UILabel *endPlaceLabel; // @synthesize endPlaceLabel=_endPlaceLabel;
@property(retain, nonatomic) UIImageView *endPlaceImageView; // @synthesize endPlaceImageView=_endPlaceImageView;
@property(retain, nonatomic) UIView *endPlaceView; // @synthesize endPlaceView=_endPlaceView;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UIButton *startPlaceButton; // @synthesize startPlaceButton=_startPlaceButton;
@property(retain, nonatomic) UILabel *startPlaceLabel; // @synthesize startPlaceLabel=_startPlaceLabel;
@property(retain, nonatomic) UIImageView *startPlaceImageView; // @synthesize startPlaceImageView=_startPlaceImageView;
@property(retain, nonatomic) UIView *startPlaceView; // @synthesize startPlaceView=_startPlaceView;
@property(copy, nonatomic) CDUnknownBlockType selectEndPlaceCallback; // @synthesize selectEndPlaceCallback=_selectEndPlaceCallback;
@property(copy, nonatomic) CDUnknownBlockType selectStartPlaceCallback; // @synthesize selectStartPlaceCallback=_selectStartPlaceCallback;
@property(retain, nonatomic) YMMRegion *endRegion; // @synthesize endRegion=_endRegion;
@property(retain, nonatomic) YMMRegion *startRegion; // @synthesize startRegion=_startRegion;
- (void).cxx_destruct;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)gotoSelectEndRegion;
- (void)gotoSelectStartRegion;
- (void)initControls;
- (void)setNeedsUpdateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

