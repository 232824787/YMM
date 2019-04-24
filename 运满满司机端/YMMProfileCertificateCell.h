//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseTableViewCell.h"

#import "YMMCertificateStatusViewDelegate.h"

@class NSArray, NSString, UIImageView, UILabel, YMMCertificateStatusView;

@interface YMMProfileCertificateCell : YMMBaseTableViewCell <YMMCertificateStatusViewDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_arrowIcon;
    YMMCertificateStatusView *_statusView;
    NSArray *_liceneses;
}

+ (double)ymm_heightForCellWithItem:(id)arg1 contentWidth:(double)arg2;
+ (id)ymm_createCellForTableView:(id)arg1;
@property(copy, nonatomic) NSArray *liceneses; // @synthesize liceneses=_liceneses;
@property(retain, nonatomic) YMMCertificateStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)certificateViewStatus;
- (id)numberOfCountStatusViews;
- (long long)numberOfCountInRow;
- (id)status;
- (id)titles;
- (void)ymm_configWithItemModel:(id)arg1 canEdit:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

