//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIView;

@interface YMMBaseTableViewCell : UITableViewCell
{
    UIView *__ymm_separatorView;
    id __ymm_itemModel;
    struct UIEdgeInsets _ymm_separatorInset;
}

+ (id)ymm_createCellForTableView:(id)arg1;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)cellIdentifiler;
@property(retain, nonatomic) id _ymm_itemModel; // @synthesize _ymm_itemModel=__ymm_itemModel;
@property(nonatomic) __weak UIView *_ymm_separatorView; // @synthesize _ymm_separatorView=__ymm_separatorView;
@property(nonatomic) struct UIEdgeInsets ymm_separatorInset; // @synthesize ymm_separatorInset=_ymm_separatorInset;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)ymm_configWithItemModel:(id)arg1;
@property(readonly, nonatomic) id ymm_itemModel;
- (id)ymm_findSeparatorViewUnder:(id)arg1;

@end

