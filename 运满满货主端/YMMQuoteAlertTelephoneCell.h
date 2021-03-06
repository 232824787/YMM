//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class NSString, UIButton;

@interface YMMQuoteAlertTelephoneCell : YMMBaseTableViewCell
{
    UIButton *_callButton;
    NSString *_telephone;
}

+ (id)initWithTableView:(id)arg1;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
- (void).cxx_destruct;
- (id)attributedStringWithString:(id)arg1 titleColor:(id)arg2;
- (id)soldoutButtonTitle;
- (id)requestTitleForType:(long long)arg1;
- (void)updateCallButtonTitleForType:(long long)arg1;
- (void)ymm_configWithType:(long long)arg1 Telephone:(id)arg2;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

