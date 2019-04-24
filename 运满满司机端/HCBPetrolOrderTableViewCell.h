//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface HCBPetrolOrderTableViewCell : UITableViewCell
{
    CDUnknownBlockType _btnClick;
    UILabel *_timeLabel;
    UILabel *_oilCodeLabel;
    UILabel *_statusLabel;
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_amountLabel;
    UILabel *_discountLabel;
    UIButton *_rightBtn;
    UIButton *_midBtn;
    UIButton *_leftBtn;
    NSLayoutConstraint *_leftBtnTopCS;
    NSLayoutConstraint *_leftBtnHeightCS;
    NSLayoutConstraint *_midBtnHeightCS;
    NSLayoutConstraint *_rightBtnHeightCS;
}

@property(nonatomic) __weak NSLayoutConstraint *rightBtnHeightCS; // @synthesize rightBtnHeightCS=_rightBtnHeightCS;
@property(nonatomic) __weak NSLayoutConstraint *midBtnHeightCS; // @synthesize midBtnHeightCS=_midBtnHeightCS;
@property(nonatomic) __weak NSLayoutConstraint *leftBtnHeightCS; // @synthesize leftBtnHeightCS=_leftBtnHeightCS;
@property(nonatomic) __weak NSLayoutConstraint *leftBtnTopCS; // @synthesize leftBtnTopCS=_leftBtnTopCS;
@property(nonatomic) __weak UIButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(nonatomic) __weak UIButton *midBtn; // @synthesize midBtn=_midBtn;
@property(nonatomic) __weak UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(nonatomic) __weak UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *oilCodeLabel; // @synthesize oilCodeLabel=_oilCodeLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) CDUnknownBlockType btnClick; // @synthesize btnClick=_btnClick;
- (void).cxx_destruct;
- (void)btnPressed:(id)arg1;
- (void)setupBtnDarkStyle:(id)arg1;
- (void)setupBtnWhiteStyle:(id)arg1;
- (void)setupBtn:(id)arg1;
- (void)setupBtnsHidden:(_Bool)arg1;
- (void)configCellWithModel:(id)arg1;
- (void)setupBtn_Border:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

