//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSString, UIButton;

@interface YMMCallListBtnCell : YMMBaseTableViewCell
{
    NSString *_telephone;
    UIButton *_callButton;
}

+ (id)initWithTableView:(id)arg1;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
- (void).cxx_destruct;
- (id)attributedStringWithString:(id)arg1 titleColor:(id)arg2;
- (id)soldoutButtonTitle;
- (void)updateCallButtonTitleForType:(long long)arg1;
- (id)requestTitleForType:(long long)arg1;
- (void)ymm_configWithItemModel:(long long)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

