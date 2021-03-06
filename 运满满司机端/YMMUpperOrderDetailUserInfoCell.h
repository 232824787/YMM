//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

#import "YMMOrderUserInfoSubViewDelegate.h"

@class NSString, YMMOrderUserInfoSubView;

@interface YMMUpperOrderDetailUserInfoCell : YMMBaseTableViewCell <YMMOrderUserInfoSubViewDelegate>
{
    id <YMMUpperOrderDetailUserInfoCellDelegate> _userInfoCellDelegate;
    YMMOrderUserInfoSubView *_userInfoView;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) YMMOrderUserInfoSubView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(nonatomic) __weak id <YMMUpperOrderDetailUserInfoCellDelegate> userInfoCellDelegate; // @synthesize userInfoCellDelegate=_userInfoCellDelegate;
- (void).cxx_destruct;
- (void)addUserInfoSubContractsClickJournal:(id)arg1;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

