//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface HCBETCCreateInvoiceETCCardCell : UITableViewCell
{
    UILabel *_plateNumLabel;
    UILabel *_cardInfoLabel;
    UILabel *_cardStateLabel;
    UIView *_separateLineView;
}

@property(nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(nonatomic) UILabel *cardStateLabel; // @synthesize cardStateLabel=_cardStateLabel;
@property(nonatomic) UILabel *cardInfoLabel; // @synthesize cardInfoLabel=_cardInfoLabel;
@property(nonatomic) UILabel *plateNumLabel; // @synthesize plateNumLabel=_plateNumLabel;
- (void)setCardInfo:(id)arg1;
- (void)initView;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

