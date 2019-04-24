//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class GTReceiptPicFileModel, UIButton, UIImage, UIImageView;

@interface GTUploadReceiptPhotoCollectionViewCell : UICollectionViewCell
{
    _Bool _deleteChoosed;
    unsigned long long _style;
    GTReceiptPicFileModel *_picFileModel;
    UIImage *_photoImage;
    UIImageView *_photoImageView;
    CDUnknownBlockType _deletePhotoCallback;
    CDUnknownBlockType _choosePhotoCallback;
    UIImageView *_bgImageView;
    UIButton *_deleteBtn;
    UIButton *_chooseBtn;
}

@property(retain, nonatomic) UIButton *chooseBtn; // @synthesize chooseBtn=_chooseBtn;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) CDUnknownBlockType choosePhotoCallback; // @synthesize choosePhotoCallback=_choosePhotoCallback;
@property(copy, nonatomic) CDUnknownBlockType deletePhotoCallback; // @synthesize deletePhotoCallback=_deletePhotoCallback;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(nonatomic) _Bool deleteChoosed; // @synthesize deleteChoosed=_deleteChoosed;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(retain, nonatomic) GTReceiptPicFileModel *picFileModel; // @synthesize picFileModel=_picFileModel;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)chooseAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

