//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCollectorBaseCell.h"

@class UIButton, UIImageView, UILabel, UIView, YMMCollectorListUserListModel;

@interface YMMCollectorListCell : YMMCollectorBaseCell
{
    CDUnknownBlockType _block;
    UIImageView *_waterMarkIamgeView;
    UILabel *_headLab;
    UILabel *_timeLab;
    UIView *_dashView;
    UIImageView *_headImageView;
    UILabel *_phoneLab;
    UILabel *_nameLab;
    UIButton *_rightBtn;
    UILabel *_rejectLab;
    UIView *_bottomView;
    YMMCollectorListUserListModel *_userListModel;
}

@property(retain, nonatomic) YMMCollectorListUserListModel *userListModel; // @synthesize userListModel=_userListModel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UILabel *rejectLab; // @synthesize rejectLab=_rejectLab;
@property(retain, nonatomic) UIButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UILabel *phoneLab; // @synthesize phoneLab=_phoneLab;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *dashView; // @synthesize dashView=_dashView;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UILabel *headLab; // @synthesize headLab=_headLab;
@property(retain, nonatomic) UIImageView *waterMarkIamgeView; // @synthesize waterMarkIamgeView=_waterMarkIamgeView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)insertModel:(id)arg1;
- (void)rightBtnClicked:(id)arg1;
- (void)drawDashLine:(id)arg1 lineLength:(int)arg2 lineSpacing:(int)arg3 lineColor:(id)arg4;
- (void)resetContraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

