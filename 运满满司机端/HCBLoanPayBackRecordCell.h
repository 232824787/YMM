//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UILabel;

@interface HCBLoanPayBackRecordCell : UITableViewCell
{
    NSString *_repaidAmount;
    NSString *_date;
    NSString *_status;
    UILabel *_amountLabel;
    UILabel *_dateLabel;
    UILabel *_statusLabel;
}

@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *repaidAmount; // @synthesize repaidAmount=_repaidAmount;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

