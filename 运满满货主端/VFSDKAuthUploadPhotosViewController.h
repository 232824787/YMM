//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VFSDKBaseViewController.h"

@class HCBFTImagePicker, NSMutableArray, NSMutableDictionary, UIButton, UIImage, UILabel, UITableView;

@interface VFSDKAuthUploadPhotosViewController : VFSDKBaseViewController
{
    _Bool _isGetUserInfo;
    _Bool _isGetAuth;
    CDUnknownBlockType _uploadDidSucceed;
    UITableView *_tableView;
    UILabel *_authNameLabel;
    UIButton *_frontButton;
    UIButton *_backButton;
    UIButton *_uploadButton;
    UIButton *_sender;
    UIImage *_frontImage;
    UIImage *_backImage;
    NSMutableArray *_imageUploadInfos;
    NSMutableDictionary *_urlParam;
    HCBFTImagePicker *_imagePicker;
}

@property(retain, nonatomic) HCBFTImagePicker *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(nonatomic) _Bool isGetAuth; // @synthesize isGetAuth=_isGetAuth;
@property(nonatomic) _Bool isGetUserInfo; // @synthesize isGetUserInfo=_isGetUserInfo;
@property(retain, nonatomic) NSMutableDictionary *urlParam; // @synthesize urlParam=_urlParam;
@property(retain, nonatomic) NSMutableArray *imageUploadInfos; // @synthesize imageUploadInfos=_imageUploadInfos;
@property(retain, nonatomic) UIImage *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) UIImage *frontImage; // @synthesize frontImage=_frontImage;
@property(nonatomic) __weak UIButton *sender; // @synthesize sender=_sender;
@property(nonatomic) __weak UIButton *uploadButton; // @synthesize uploadButton=_uploadButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIButton *frontButton; // @synthesize frontButton=_frontButton;
@property(nonatomic) __weak UILabel *authNameLabel; // @synthesize authNameLabel=_authNameLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType uploadDidSucceed; // @synthesize uploadDidSucceed=_uploadDidSucceed;
- (void).cxx_destruct;
- (void)p_didSelectImage:(id)arg1;
- (void)p_selectPhotoWithORCCameraForFrontIDCardImage:(_Bool)arg1;
- (void)p_selectPhotoInOldWayWithTitle:(id)arg1;
- (void)cleanForReupload;
- (void)uploadSuccess;
- (void)uploadImages;
- (void)uploadPhoto:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)frontButtonClick:(id)arg1;
- (void)submitPhotoUrls;
- (void)getAuthInfo;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableView;
- (void)setupUI;
- (void)viewDidLoad;

@end

