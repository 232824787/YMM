//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class HCBETCInvoiceApplyModel, UIButton, UIImageView, UILabel, UIView;

@interface HCBETCInvoiceMineApplyCell : UITableViewCell
{
    HCBETCInvoiceApplyModel *_applyModel;
    id <HCBETCInvoiceMineApplyCellDelegate> _delegate;
    UIView *_containerView;
    UILabel *_labApplyStatus;
    UILabel *_labTime;
    UILabel *_labTotal;
    UILabel *_labPlate;
    UILabel *_labPostStatus;
    UIView *_lineTop;
    UIView *_lineBottom;
    UIImageView *_imgVTips;
    UILabel *_labFailure;
    UIButton *_buttonOne;
    UIButton *_buttonTwo;
    UIButton *_buttonThree;
}

+ (struct CGSize)getApplyFailReasonHeight:(id)arg1;
+ (double)getCellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIButton *buttonThree; // @synthesize buttonThree=_buttonThree;
@property(retain, nonatomic) UIButton *buttonTwo; // @synthesize buttonTwo=_buttonTwo;
@property(retain, nonatomic) UIButton *buttonOne; // @synthesize buttonOne=_buttonOne;
@property(retain, nonatomic) UILabel *labFailure; // @synthesize labFailure=_labFailure;
@property(retain, nonatomic) UIImageView *imgVTips; // @synthesize imgVTips=_imgVTips;
@property(retain, nonatomic) UIView *lineBottom; // @synthesize lineBottom=_lineBottom;
@property(retain, nonatomic) UIView *lineTop; // @synthesize lineTop=_lineTop;
@property(retain, nonatomic) UILabel *labPostStatus; // @synthesize labPostStatus=_labPostStatus;
@property(retain, nonatomic) UILabel *labPlate; // @synthesize labPlate=_labPlate;
@property(retain, nonatomic) UILabel *labTotal; // @synthesize labTotal=_labTotal;
@property(retain, nonatomic) UILabel *labTime; // @synthesize labTime=_labTime;
@property(retain, nonatomic) UILabel *labApplyStatus; // @synthesize labApplyStatus=_labApplyStatus;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <HCBETCInvoiceMineApplyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HCBETCInvoiceApplyModel *applyModel; // @synthesize applyModel=_applyModel;
- (void).cxx_destruct;
- (id)imageWithColor:(id)arg1;
- (void)updateButton:(id)arg1 style:(long long)arg2;
- (void)actionApplyAction:(id)arg1;
- (void)updateSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

