//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YMMImagePickerManagerDelegate.h"

@class GTUploadPicModel, NSData, NSIndexPath, NSString, UIButton, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer;

@interface GTUploadPicView : UIView <YMMImagePickerManagerDelegate>
{
    _Bool _needEdit;
    _Bool _needSwitchCamera;
    _Bool _needShowPhotoTip;
    NSString *_upLoadDesString;
    id <GTUploadPicViewDelegate> _delegate;
    UIButton *_uploadBtn;
    NSIndexPath *_currentIndexPath;
    UIImage *_uploadImage;
    UIImageView *_upLoadImageView;
    long long _imagePickerType;
    long long _selectPicType;
    UILabel *_uploadLab;
    UIImageView *_plusImageView;
    GTUploadPicModel *_uploadPicModel;
    NSData *_uploadData;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property(nonatomic) _Bool needShowPhotoTip; // @synthesize needShowPhotoTip=_needShowPhotoTip;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) NSData *uploadData; // @synthesize uploadData=_uploadData;
@property(retain, nonatomic) GTUploadPicModel *uploadPicModel; // @synthesize uploadPicModel=_uploadPicModel;
@property(retain, nonatomic) UIImageView *plusImageView; // @synthesize plusImageView=_plusImageView;
@property(retain, nonatomic) UILabel *uploadLab; // @synthesize uploadLab=_uploadLab;
@property(nonatomic) _Bool needSwitchCamera; // @synthesize needSwitchCamera=_needSwitchCamera;
@property(nonatomic) long long selectPicType; // @synthesize selectPicType=_selectPicType;
@property(nonatomic) long long imagePickerType; // @synthesize imagePickerType=_imagePickerType;
@property(nonatomic) _Bool needEdit; // @synthesize needEdit=_needEdit;
@property(retain, nonatomic) UIImageView *upLoadImageView; // @synthesize upLoadImageView=_upLoadImageView;
@property(retain, nonatomic) UIImage *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) UIButton *uploadBtn; // @synthesize uploadBtn=_uploadBtn;
@property(nonatomic) __weak id <GTUploadPicViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *upLoadDesString; // @synthesize upLoadDesString=_upLoadDesString;
- (void).cxx_destruct;
- (long long)btnTagType;
- (id)compressPhotosImage;
- (void)ymm_imagePickerManagerDidSelectItem:(id)arg1 dataStringArray:(id)arg2;
- (id)responderVC;
- (void)dismissKeyboard;
- (void)selectPicFromFrontCamera:(id)arg1;
- (void)selectPicFromCamera;
- (void)selectPicFromAblum;
- (void)selectPicFromFacePlusPlus;
- (void)showSelectPicSheet;
- (void)selectPic:(id)arg1;
- (void)showPicPicker;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

