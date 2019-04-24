//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSAttributedString, NSString;

@interface YMMCargoTipModel : YMMCommonModel
{
    NSString *_title;
    NSString *_des;
    NSString *_linkUrl;
    NSString *_tagName;
    NSArray *_imgList;
    NSArray *_ImageDTOList;
    NSAttributedString *_desAttributeString;
    double _tipCellHeight;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(nonatomic) double tipCellHeight; // @synthesize tipCellHeight=_tipCellHeight;
@property(retain, nonatomic) NSAttributedString *desAttributeString; // @synthesize desAttributeString=_desAttributeString;
@property(retain, nonatomic) NSArray *ImageDTOList; // @synthesize ImageDTOList=_ImageDTOList;
@property(retain, nonatomic) NSArray *imgList; // @synthesize imgList=_imgList;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end

