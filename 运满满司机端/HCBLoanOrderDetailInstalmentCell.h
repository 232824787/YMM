//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface HCBLoanOrderDetailInstalmentCell : UITableViewCell
{
    _Bool _choosed;
    NSString *_moneyAmount;
    NSString *_dateAndStatus;
    long long _index;
    UIImageView *_statusIconImageView;
    UILabel *_statusIconLabel;
    UILabel *_moneyLabel;
    UILabel *_dateLabel;
}

@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(nonatomic) __weak UILabel *statusIconLabel; // @synthesize statusIconLabel=_statusIconLabel;
@property(nonatomic) __weak UIImageView *statusIconImageView; // @synthesize statusIconImageView=_statusIconImageView;
@property(nonatomic) _Bool choosed; // @synthesize choosed=_choosed;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *dateAndStatus; // @synthesize dateAndStatus=_dateAndStatus;
@property(copy, nonatomic) NSString *moneyAmount; // @synthesize moneyAmount=_moneyAmount;
- (void).cxx_destruct;
- (void)setMoneyAmount:(id)arg1 index:(long long)arg2 withStatus:(long long)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

