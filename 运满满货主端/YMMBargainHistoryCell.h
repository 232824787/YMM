//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

@class UIImageView, UILabel, UIView, YMMBargainHistoryListModel, YMMBargainStatusView, YMMCargoInfoView, YMMVoiceBubblesView;

@interface YMMBargainHistoryCell : YMMBaseTableViewCell
{
    YMMVoiceBubblesView *_bubblesView;
    CDUnknownBlockType _tapPlayVoice;
    UIImageView *_userImageView;
    UILabel *_nameLabel;
    UILabel *_userDesLabel;
    UILabel *_bargainStatusLabel;
    UIView *_lineViewUser;
    YMMCargoInfoView *_infoView;
    UIView *_lineViewBubbles;
    YMMBargainStatusView *_bargainStatusView;
    YMMBargainHistoryListModel *_listModel;
    UIView *_marginView;
}

+ (_Bool)isShowVoiceBubble:(id)arg1;
+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) UIView *marginView; // @synthesize marginView=_marginView;
@property(retain, nonatomic) YMMBargainHistoryListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) YMMBargainStatusView *bargainStatusView; // @synthesize bargainStatusView=_bargainStatusView;
@property(retain, nonatomic) UIView *lineViewBubbles; // @synthesize lineViewBubbles=_lineViewBubbles;
@property(retain, nonatomic) YMMCargoInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *lineViewUser; // @synthesize lineViewUser=_lineViewUser;
@property(retain, nonatomic) UILabel *bargainStatusLabel; // @synthesize bargainStatusLabel=_bargainStatusLabel;
@property(retain, nonatomic) UILabel *userDesLabel; // @synthesize userDesLabel=_userDesLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(copy, nonatomic) CDUnknownBlockType tapPlayVoice; // @synthesize tapPlayVoice=_tapPlayVoice;
@property(retain, nonatomic) YMMVoiceBubblesView *bubblesView; // @synthesize bubblesView=_bubblesView;
- (void).cxx_destruct;
- (void)tapAction:(long long)arg1;
- (void)playVoice;
- (void)configBubbleView;
- (void)configAddress;
- (void)configUserInfo;
- (void)ymm_configWithItemModel:(id)arg1;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

