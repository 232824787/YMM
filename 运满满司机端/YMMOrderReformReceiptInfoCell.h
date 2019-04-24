//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMOrderDetailBaseCell.h"

#import "YMMCustomActionSheetDelegate.h"
#import "YMMImagePickerManagerDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, UIViewController, YMMOrderReformReceiptInfoModel;

@interface YMMOrderReformReceiptInfoCell : YMMOrderDetailBaseCell <YMMCustomActionSheetDelegate, YMMImagePickerManagerDelegate>
{
    UILabel *_titleLab;
    UILabel *_universalContentLab;
    UILabel *_receiptDetailLab;
    UIImageView *_receiptMoreIcon;
    UIButton *_receiptDetailBtn;
    UIView *_bottomView;
    YMMOrderReformReceiptInfoModel *_receiptInfo;
    UIViewController *_currentDetailVC;
}

@property(nonatomic) __weak UIViewController *currentDetailVC; // @synthesize currentDetailVC=_currentDetailVC;
@property(retain, nonatomic) YMMOrderReformReceiptInfoModel *receiptInfo; // @synthesize receiptInfo=_receiptInfo;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *receiptDetailBtn; // @synthesize receiptDetailBtn=_receiptDetailBtn;
@property(retain, nonatomic) UIImageView *receiptMoreIcon; // @synthesize receiptMoreIcon=_receiptMoreIcon;
@property(retain, nonatomic) UILabel *receiptDetailLab; // @synthesize receiptDetailLab=_receiptDetailLab;
@property(retain, nonatomic) UILabel *universalContentLab; // @synthesize universalContentLab=_universalContentLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)ymm_imagePickerManagerDidSelectItem:(id)arg1 dataStringArray:(id)arg2;
- (void)actionSheet:(id)arg1 didClickedButtonAtIndex:(long long)arg2;
- (void)receiptDetailBtnClicked:(id)arg1;
- (void)resetContraint;
- (void)insertModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

