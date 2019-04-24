//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class NSDictionary, UIButton, UIImageView, UILabel;

@interface VFSDKAuthUploadPhotosResultViewController : VFSDKBaseViewController
{
    _Bool _needReupload;
    CDUnknownBlockType _didFinished;
    UIImageView *_iconView;
    UIImageView *_lineView;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UIButton *_doneButton;
    NSDictionary *_resultDict;
}

@property(nonatomic) _Bool needReupload; // @synthesize needReupload=_needReupload;
@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak UILabel *label3; // @synthesize label3=_label3;
@property(nonatomic) __weak UILabel *label2; // @synthesize label2=_label2;
@property(nonatomic) __weak UILabel *label1; // @synthesize label1=_label1;
@property(nonatomic) __weak UIImageView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType didFinished; // @synthesize didFinished=_didFinished;
- (void).cxx_destruct;
- (void)_vf_backAction;
- (void)_vf_doneButtonDidPressed:(id)arg1;
- (void)_vf_queryAuthUploadResult;
- (id)_vf_attributedLevel1TextWithColor:(id)arg1;
- (_Bool)_vf_isResultInReview:(long long)arg1;
- (_Bool)_vf_isResultSuccess:(long long)arg1;
- (void)_vf_refreshAllUI;
- (void)_vf_hideAllUIs:(_Bool)arg1;
- (void)clickBackButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

