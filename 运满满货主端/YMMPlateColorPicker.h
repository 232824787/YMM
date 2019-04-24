//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMPopupMaskView.h"

@class NSArray, UIButton, UILabel, UIView;

@interface YMMPlateColorPicker : YMMPopupMaskView
{
    UILabel *_titleLabel;
    NSArray *_dataTypes;
    long long _countInRow;
    CDUnknownBlockType _selectedBlock;
    UIButton *_closeBtn;
    UILabel *_lineLabel;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) long long countInRow; // @synthesize countInRow=_countInRow;
@property(copy, nonatomic) NSArray *dataTypes; // @synthesize dataTypes=_dataTypes;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)dissPicker;
- (void)showPicker;
- (id)btnWithType:(long long)arg1;
- (id)btnColorByType:(long long)arg1;
- (id)btnTitleByType:(long long)arg1;
- (void)configConstraints;
- (void)selectedPlateColor:(id)arg1;
- (void)ymm_maskDidAppear;
- (void)ymm_maskWillAppear;
- (id)init;

@end

