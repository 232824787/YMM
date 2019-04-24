//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSMutableArray;

@interface YMMLeaveMessageCell : YMMBaseTableViewCell
{
    CDUnknownBlockType _callBack;
    NSMutableArray *_btnsArray;
}

+ (double)buttonHeightFor:(id)arg1;
+ (double)buttonWidthFor:(id)arg1;
+ (id)initWithTableView:(id)arg1;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *btnsArray; // @synthesize btnsArray=_btnsArray;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct CGRect)buttonFrameWitnButtonWidth:(double)arg1 Height:(double)arg2 RowHeight:(double)arg3 OffsetX:(double)arg4 OffsetY:(double)arg5 Margin:(double)arg6 Interval:(double)arg7;

@end

