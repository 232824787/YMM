//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSIndexPath, NSNumber, NSString, UIImage;

@interface GTUploadPicModel : YMMCommonModel
{
    NSString *_imgToken;
    NSString *_imageTag;
    NSIndexPath *_indexPath;
    NSNumber *_uploadBtnTag;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *uploadBtnTag; // @synthesize uploadBtnTag=_uploadBtnTag;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *imageTag; // @synthesize imageTag=_imageTag;
@property(copy, nonatomic) NSString *imgToken; // @synthesize imgToken=_imgToken;
- (void).cxx_destruct;

@end

