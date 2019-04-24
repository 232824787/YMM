//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UILabel, YMMCommonDataModel;

@interface YMMTruckTypeView : UIView
{
    NSMutableArray *_buttons;
    NSMutableArray *_truckTypeArray;
    long long _maxTypeCount;
    NSMutableArray *_currentTypeArr;
    _Bool _isShowUnLimitTruckType;
    NSMutableArray *_selectedTypeArr;
    NSString *_selectedTypeText;
    long long _maxTruckTypeCount;
    YMMCommonDataModel *_allDataModel;
    UILabel *_typeTitleLabel;
}

@property(retain, nonatomic) UILabel *typeTitleLabel; // @synthesize typeTitleLabel=_typeTitleLabel;
@property(retain, nonatomic) YMMCommonDataModel *allDataModel; // @synthesize allDataModel=_allDataModel;
@property(nonatomic) long long maxTruckTypeCount; // @synthesize maxTruckTypeCount=_maxTruckTypeCount;
@property(nonatomic) _Bool isShowUnLimitTruckType; // @synthesize isShowUnLimitTruckType=_isShowUnLimitTruckType;
@property(copy, nonatomic) NSString *selectedTypeText; // @synthesize selectedTypeText=_selectedTypeText;
@property(retain, nonatomic) NSMutableArray *selectedTypeArr; // @synthesize selectedTypeArr=_selectedTypeArr;
- (void).cxx_destruct;
- (void)pickTruckType:(id)arg1;
- (void)render;
- (void)setButtons;
- (id)currentTruckTypes;
- (void)setSelectedTruckTypeText;
- (void)initData;
- (id)initWithSelectedTruckType:(id)arg1;

@end

