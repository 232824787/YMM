//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSString;

@interface YMMJewelBoxNewsModel : YMMBaseModel
{
    int _status;
    NSString *_detailUrl;
    long long _newsId;
    NSString *_newsType;
    NSString *_thumbnail;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *newsType; // @synthesize newsType=_newsType;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
- (void).cxx_destruct;

@end

