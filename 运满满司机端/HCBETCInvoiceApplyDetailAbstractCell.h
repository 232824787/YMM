//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBETCInvoiceApplyDetailModel, UILabel, UIView;

@interface HCBETCInvoiceApplyDetailAbstractCell : UITableViewCell
{
    UILabel *_labType;
    UIView *_lineView;
    HCBETCInvoiceApplyDetailModel *_applyDetailModel;
}

+ (double)getCellHeightWithModel:(id)arg1;
@property(retain, nonatomic) HCBETCInvoiceApplyDetailModel *applyDetailModel; // @synthesize applyDetailModel=_applyDetailModel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *labType; // @synthesize labType=_labType;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

